#ifndef USER_H
#define USER_H

class User {

private:
	String name;
	String address;
	String email;
	String phoneNumber;
	String userID;
	String username;
	String password;
	String role;

public:
	void setEmail(String s);

	void setPhoneNumber(String s);

	void setPassword(String s);
};

#endif
