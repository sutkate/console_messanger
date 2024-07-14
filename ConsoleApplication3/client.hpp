#pragma once
#include <iostream>
#include <string>
#include "user.hpp"
#include "server.hpp"
class Client
{
private:
	User* current;
public:
	Client();
	void send_message(string message, string username, User* current);
	void check_message(User* current);
	
};