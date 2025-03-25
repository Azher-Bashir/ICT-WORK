#include <iostream>
using namespace std;
class bank_account
{
private:
	int balance;
public:
	bank_account(int balance = 0) : balance(balance) {}
	int deposite(int);
	int withdraw(int);
	int current_balance() const;
};
int bank_account::deposite(int amount)
{
	balance = amount + balance;
}
int bank_account::withdraw(int amount)
{
	if (balance >= amount)
	{
		balance -= amount;
		return balance;
	}
	else
	{
		cout << "Insufficient balance" << endl;
	}
}
int bank_account::current_balance() const
{
	return balance;
}

int main()
{
	bank_account b1(1000);
	cout << "Current balance: " << b1.current_balance() << endl;
	b1.deposite(500);
	cout << "Current balance: " << b1.current_balance() << endl;
	b1.withdraw(200);
	cout << "Current balance: " << b1.current_balance() << endl;
	b1.withdraw(2000);
	cout << "Current balance: " << b1.current_balance() << endl;
	return 0;

}