#Assignment (1)
### Muhammad Nashaat Refaie  [33822]
----------------------------------------------
Question 1
----------
A class in C++ is a user defined type or data structure declared with keyword class that has data and functions (also called methods) as its members whose access is governed by the three access specifiers private, protected or public (by default access to members of a class is private).

Question 2
----------

Abstraction and encapsulation are complementary concepts: abstraction focuses on the observable behavior of an object... encapsulation focuses upon the implementation that gives rise to this behavior... encapsulation is most often achieved through information hiding, which is the process of hiding all of the secrets of object that do not contribute to its essential characteristics.
In other words: abstraction = the object externally; encapsulation (achieved through information hiding) = the object internally,

Question 3
----------
The class is the blueprint or the definition for data and the methods related to them. Once it comes to be used (instantiation) that's an object -instance from the class-    
Question 4
----------
usually the data members are made private so they cannot be reached from outside the object , while the function members can

Question 5
----------
<pre>
class BankAccount
{
	string name, account_number;
	float balance;

public:
	BankAccount();
	BankAccount(string client_name,string account_num,float amount);
	//-------------------------
	void set_name(string str_in);
	void set_account_number(string str_in);
	void set_balance(int balance_in);
	//--------------------------
	string get_name();
	string get_account_number();
	float get_balance();
	//------------------------
	void deposite(float amount);
	void withdraw(float amount);

};
</pre>

Question 6
----------
Class constructors are called when an object is instantiated from the class.
Class destructors are called whenever an object of it's class goes out of scope or whenever the delete expression is applied to a pointer to the object of that class.
Question 7
----------
<pre>
BankAccount(string client_name,string account_num,float amount)
	{
		name = client_name;
		account_number = account_num;
		balance = amount;
	}
</pre>

Question 8
----------
A default constructor is a constructor that is used to create an object when you don’t provide
explicit initialization values.

Question 9
----------
<pre>

// stock20.h -- augmented version
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>
class Stock
{
private:
	std::string company;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }


public:
	Stock(); // default constructor
	Stock(const std::string & co, long n = 0, double pr = 0.0);
	~Stock(); // do-nothing destructor

	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show()const;
	const Stock & topval(const Stock & s) const;
	
	void return_val(); //definition for a function that return the values of the individual data members. 
};
#endif 
</pre>

Question 10
------------
The asterisk (*) is the dereference operator, it tells the function to return the object pointed by the pointer this
