#include <iostream>
#include <string>

using namespace std;
class BankAccount
{
	string name, account_number;
	float balance;

public:
	BankAccount()
	{
		name = "";
		account_number = "0";
		balance = 0;
	}
	BankAccount(string client_name,string account_num,float amount)
	{
		name = client_name;
		account_number = account_num;
		balance = amount;
	}

	//-------------------------
	void set_name(string str_in) { name = str_in; }
	void set_account_number(string str_in) { account_number = str_in; }
	void set_balance(int balance_in) { balance = balance_in; }
	//--------------------------
	string get_name() { return name; }
	string get_account_number() { return account_number; }
	float get_balance() { return balance; }
	//------------------------
	void deposite(float amount) { balance += amount; }
	void withdraw(float amount) { if (amount <= balance) { balance -= amount; } }

};

int main()
{
	BankAccount client1("Muhammad Nashaat","M0123456",1000);
	/*
	//-----> using the default constructor

	BankAccount client1;
	client1.set_name("Muhammad Nashaat");
	client1.set_account_number("M0123456");
	client1.set_balance(1000);
	*/
	
	client1.deposite(500.5);
	client1.withdraw(100);

	cout << "WELCOME, " << client1.get_name() << endl << "your balance is " << client1.get_balance() << endl;


	//system("pause");
	return 0;
}