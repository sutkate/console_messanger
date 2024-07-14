#include <iostream>
#include "user.hpp"
#include "vector"

class Server
{
private:
	std::vector <User> users;
	std::vector 
public:
	void new_user(User user) { users.push_back(user); }
};