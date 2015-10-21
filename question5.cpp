#include <iostream>
#include <string>
using namespace std;
class AccountClass
{
private:
	string name;
	string num;
	double balance;
public:
	AccountClass(string x, string y, double z) {
		name = x;

		balance = z;
		num = y;
	};

	string getname()
	{
		return name;
	}
	string getnum(){
		return num;
	}
	double amount;
	double withdraw()
	{

		if (amount > balance)
		{
			cout << "your current balance isn't enough";
			return balance;
		}
		else
		{
			balance = balance - amount;
			return balance;

		};



	}
	double deposite()
	{
		balance = balance + amount;
		return balance;

	}

};
void main()
{

	AccountClass Client1("Ahmad", "00", 150000.0);
	cout << Client1.getname() << endl;
	cout << Client1.getnum() << endl;
	cout << "if you want to withdraw press w; if you want to deposit press d\n";
	string test;
	cin >> test;
	if (test == "w" | test == "W")
	{
		cout << " Amount to be withdrawn\n";
		cin >> Client1.amount;
		cout << " Your current balance is: " << Client1.withdraw() << endl;
	}
	else if (test == "d" | test == "D")
	{
		cout << " Amount to be deposited\n";
		cin >> Client1.amount;
		cout << " Your current balance is: " << Client1.deposite() << endl;
	}
	else
		cout << "error";


	system("pause");



};
