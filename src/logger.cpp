#include <iostream>
#include <fstream>
#include <string>
#include<bits/stdc++.h>
#include "logger.h"

using namespace std ; 
unordered_map<string, string> mp;

bool logger::login(string username, string password)

{
  // string username , password , user , pass ; 

  //    cout <<"enter username :";
  //   cin>> username ; 
  //   cout <<"Enter password :";
  //   cin>>password ;

  //ifstream read("file.txt");

     //getline(read , user );
    // getline(read , pass) ; 
            if(mp.find(username)==mp.end()){
              return false;
            }
            
            string pass1= mp[username];  
               
            if (password==pass1)
             {
                 return true; 
             }
             else 
             {
                 return false; 
             }
}

void logger::registerer(string username,string password)
{
    // int choice ; 
    // cout<<"1:Register\n2:Login\ntype your choice :";
    // cin>>choice ; 
      
      
      mp[username]=password;
      cout<<"Registered Successfully";
   //   return true;
      
      
      // if(choice == 1)
      // {
      //     string password , username ; 

      //   cout<<"select a username : ";
      //     cin>>username ; 
      //   cout<<"select a password : ";
      //     cin>>password ; 

      //    // ofstream file ;   
          
      //    // file.open("file.txt");  

      //    // file<<username<<endl ;
      //   //  file<<password ; 

      //    // file.close() ;

      //   mp[username]=password;
      //    main();
         
      // }
      // else if (choice==2)
      // {
      //     bool status=Logged() ; 
           
      //      if (!status)
      //      {
      //          cout<<"incorrect username or password , please check again ."<<endl; 
      //          system("PAUSE");
      //          return 0 ; 
      //      }
      //      else 
      //      {
      //          cout<<"Succesfully logged in ."<<endl; 
      //          system("PAUSE");
      //          return 1 ; 
      //      }

      // }
}