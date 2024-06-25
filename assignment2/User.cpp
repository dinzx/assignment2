#include<iostream>
#include <cstring>
#include "User.h"
using namespace std;


User::User()
{
	Username = " ";
	Password = " ";
}

User::User(string usern, string pass)
{
	Username = usern;
	Password = pass;

}
void User::login(){}
void User::logout(){}
void User::validateUser(){}
User::~User(){}