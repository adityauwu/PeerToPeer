/*
 * P2Pmain.cpp
 *
 *  Created on: 24-Apr-2018
 *      Author: pinaki
 */
#include "PeerReceiver.h"
#include "PeerSender.h"
#include "logger.h"
#include <thread>
#include <unistd.h>
#include <memory>
#include <exception>
using namespace std;

//The PeerReceiver Thread act like a server
void StartThePeerReceiver(string PeerReceiverName,string PeerReceiverPort){

	std::unique_ptr<PeerReceiver> rec(new PeerReceiver(PeerReceiverName,PeerReceiverPort));
	rec->StartReceiver();
}

//The PeerSender Thread will connect to other peer
void StartThePeerSender(){
	sleep(1);
	std::unique_ptr<PeerSender> send(new PeerSender());
	//PeerSender* send = new PeerSender();
	send->RegisterPeer();
	send->FileDownload();
}

int main(){
	std::unique_ptr<logger> loginmanager(new logger());
	string PeerReceiverName ="";
	string PeerReceiverPort ="";
	int choice;
	do{
		cout<<"Enter 1 to register user"<<endl;
		cout<<"Enter 2 to login user"<<endl;
		cout<<"Enter 3 to exit"<<endl;
		cin>>choice;
		cout << "Enter the peer hostname \n";
		cin >> PeerReceiverName;
		cout << "Enter the peer receiver port \n";
		cin >> PeerReceiverPort;
		if(choice==2){
			//call that file function over here
			if(loginmanager->login(PeerReceiverName,PeerReceiverPort)){
				cout<<"Logged in";
				break;
			}

		}
		else if(choice==1){
			//call the function to login
				//return true if()
				loginmanager->registerer(PeerReceiverName,PeerReceiverPort);
				//break;
		
			//if false
			//cout<<wrong password and username please enter valid username
		}
		else{
			exit(0);
		}

	}while(true);
	
	
	
	
	
	
	// cout << "Enter the peer hostname \n";
	// cin >> PeerReceiverName;
	// cout << "Enter the peer receiver port \n";
	// cin >> PeerReceiverPort;

	thread PeerReceiver(StartThePeerReceiver,PeerReceiverName,PeerReceiverPort);
	thread StartTheSender(StartThePeerSender);
	cout <<" ---START---\n";
	PeerReceiver.join();
	StartTheSender.join();
	cout << "---END---" << endl;
	return 0;
}
