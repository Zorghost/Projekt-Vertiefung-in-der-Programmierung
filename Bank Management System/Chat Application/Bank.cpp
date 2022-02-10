#include "Bank.h"
#include <iostream>

using namespace std;

void bank::open_account()
{
	cout << "enter your full name :: ";
	cin.ignore();
	cin.getline(name, 100);

	cout << "enter your address :";
	cin.ignore();
	cin.getline(add, 100);
	cout << "what type of account you want to open ?" << endl;
	cout << "saving (s) or current (c) ";
	cin >> y;
	cout << "enter amount for deposit :";
	cin >> balance;

	cout << "your account is created " << endl;
}

void bank::deposit_money()
{
	int a;
	cout << "enter how much you deposit ";
	cin >> a;
	balance += a;
	cout << "total amount : " << balance;
}

void bank::withdraw_money()
{
	float amount;
	cout << "\n withdraw :";
	cout << "enter amount to withdraw ";
	cin >> amount;
	balance = balance - amount;
	cout << "now the total amount is " << balance;

}

void bank::Display_account()
{
	cout << "your full name : " << name;
	cout << "your adress :" << add;
	cout << "type of account that opened " << y;
	cout << "amount you deposited" << balance;

}

