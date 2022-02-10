#pragma once
#include <string>

using namespace std;

class user {
private :
	string username = "";
	string password = "";
	int balance = 0;
public :
	user(string Username, string Password, int Balance)
	{
		this->balance = Balance;
		this->password = Password;
		this->username = Username;
	}

	static int getBalance(user d)
	{
		return d.balance;
	}
	static string getUsername(user d)
	{
		return d.username;
	}
	static string getPassword(user d)
	{
		return d.password;
	}
};