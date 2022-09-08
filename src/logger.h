
#ifndef LOGGER_H_
#define LOGGER_H_
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <regex.h>
#include <thread>
#include <iostream>
using namespace std;

class logger{

public:


bool login(string username, string password);
void registerer(string username, string password);





};

#endif