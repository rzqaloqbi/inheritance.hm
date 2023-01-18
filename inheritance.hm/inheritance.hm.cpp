// inheritance.hm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class account
{
protected:
	int accountnumber;
	string accountname;
	double accountbalance;
public:
	int getaccountnumber()
	{
		return accountnumber;
	}
	void setaccountnumber(int acc)
	{
		accountnumber = acc;
	}
	string getaccountname()
	{
		return accountname;
	}
	void setaccountname(string acc)
	{
		accountname = acc;
	}
	double getaccountbalance()
	{
		return accountbalance;
	}
	void setaccountbalance(double acc)
	{
		accountbalance = acc;
	}
	void deposit(double amount)
	{
		accountbalance = accountbalance + amount;
	}
	void withdraw(double amount)
	{
		if (amount <= accountbalance)
			accountbalance = accountbalance - amount;
		else
			cout << "error amount greater than account balance";
	}
	void displayaccountinfo()
	{
		cout << "accountnumber: " << accountnumber << endl;
		cout << "accountname: " << accountname << endl;
		cout << "accountbalance: " << accountbalance << endl;
	}

};
class savingsaccount :public account
{
	double interestrate;
public:
	double calculateinterest()
	{
		return accountbalance * interestrate;
	}
	double getinterestrate()
	{
		return interestrate;
	}
	void setinterestrate(double inter)
	{
		interestrate = inter;
	}
};

int main()
{
	savingsaccount obj;
	obj.setaccountnumber(123);
	obj.setaccountname("abdullah ");
	obj.setaccountbalance(50000);
	obj.displayaccountinfo();
	obj.deposit(2000);

	cout << "account balance after deposit 2000 :" << endl;
	obj.displayaccountinfo();
	obj.withdraw(5000);
	cout << "account balance after withdraw 5000 : " << endl;
	obj.displayaccountinfo();
	obj.setinterestrate(0.12);
	cout << "calculate interest: " << obj.calculateinterest();

}
