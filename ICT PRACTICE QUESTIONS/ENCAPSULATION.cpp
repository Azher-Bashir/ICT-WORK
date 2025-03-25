//#include <iostream>
//using namespace std;
//class bank_account
//{
//private:
//	int balance;
//public:
//	bank_account(int balance = 0) : balance(balance) {}
//	int deposite(int);
//	int withdraw(int);
//	int current_balance() const;
//};
//int bank_account::deposite(int amount)
//{
//	balance = amount + balance;
//	return balance;
//}
//int bank_account::withdraw(int amount)
//{
//	if (balance >= amount)
//	{
//		balance -= amount;
//		return balance;
//	}
//	else
//	{
//		cout << "Insufficient balance" << endl;
//	}
//	return balance;
//	//return;
//}
//int bank_account::current_balance() const
//{
//	return balance;
//}
//
//int main()
//{
//	bank_account b1(1000);
//	cout << "What do you want to do?" << endl;
//	cout << "1. Deposite" << endl;
//	cout << "2. Withdraw" << endl;
//	cout << "3. Check Balance" << endl;
//	int choice;
//	cin >> choice;
//		
//	if (choice == 1)
//	{
//		int amount;
//		cout << "Enter the amount you want to deposite: ";
//		cin >> amount;
//		cout << "Your current balance is: " << b1.deposite(amount) << endl;
//	}
//	else if (choice == 2)
//	{
//		int amount;
//		cout << "Enter the amount you want to withdraw: ";
//		cin >> amount;
//		cout << "Your current balance is: " << b1.withdraw(amount) << endl;
//	}
//	else if (choice == 3)7
//	{
//		cout << "Your current balance is: " << b1.current_balance() << endl;
//	}
//	else
//	{
//		cout << "Invalid choice" << endl;
//	}
//
//
//	return 0;
//
//}