#ifndef USER_H
#define USER_H

#include <string>

class User {

private:
	std::string name;
	std::string address;
	std::string email;
	std::string phoneNumber;
	std::string userID;
	std::string username;
	std::string password;
	std::string role;

public:
	void setEmail(std::string s);

	void setPhoneNumber(std::string s);

	void setPassword(std::string s);
};

#endif
