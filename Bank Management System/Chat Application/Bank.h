#pragma once

class bank
{
	char name[100];
	char add[100];
	char y;
	int balance;

public:
	void open_account();
	void deposit_money();
	void withdraw_money();
	void Display_account();

};