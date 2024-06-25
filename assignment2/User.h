#pragma once
#include <string>

class User
{
protected:
	std::string Username;
	std::string Password;

public:
	User();
	User(std::string usern, std::string pass);
	void login();
	void logout();
	void validateUser();
	~User();
};

