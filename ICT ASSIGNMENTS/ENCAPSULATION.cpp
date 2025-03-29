////Create a class BankAccount that encapsulates the account balance as a private member variable.Provide public methods to deposit, withdraw, and check the balance while ensuring that the balance cannot be accessed directly.
//#include <iostream>
//using namespace std;
//
//class BankAccount {
//private:
//    double balance;
//
//public:
//    BankAccount(double initialBalance)
//    {
//        balance = initialBalance; 
//    }
//
//    void deposit(double amount)
//    {
//        balance += amount; 
//    }
//
//    void withdraw(double amount) {
//        if (amount <= balance)
//            balance -= amount;
//        else
//            cout << "Insufficient funds!" << endl;
//    }
//
//    double getBalance() 
//    {
//        return balance; 
//    }
//};
//
//int main() {
//    BankAccount account(1000);
//    account.deposit(500);
//    account.withdraw(300);
//    cout << "Balance: " << account.getBalance() << endl;
//    return 0;
//}
