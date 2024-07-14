#include <iostream>
#include <string>
using string = std::string;
class User
{
private:
	string login;
	string username;
	string password;
public:
	bool check_password;
};