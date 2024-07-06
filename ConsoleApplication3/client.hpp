#include <iostream>
#include <string>
#include "user.hpp"
class Client
{
private:
	User* current;
public:
	Client();
	void send_message(string message, string username);
};