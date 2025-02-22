//#include <iostream>
//using namespace std;
//
//class BankAccount {
//private:
//    int accountNumber;
//    char accountHolder[50];
//    double balance;
//
//public:
//    // Default Constructor
//    BankAccount() {
//        accountNumber = 0;
//        balance = 0;
//        accountHolder[0] = '\0';
//    }
//
//    // Parameterized Constructor
//    BankAccount(int accNum, const char accHolderName[], double bal) {
//        accountNumber = accNum;
//        balance = bal;
//        strcpy(accountHolder, accHolderName);
//    }
//
//    void deposit(double amount) {
//        balance += amount;
//        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
//    }
//
//    void withdraw(double amount) {
//        if (amount > balance) {
//            cout << "Insufficient funds to withdraw " << amount << endl;
//        }
//        else {
//            balance -= amount;
//            cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
//        }
//    }
//
//    double getBalance() {
//        return balance;
//    }
//
//    void displayDetails() {
//        cout << "Account Number: " << accountNumber << endl;
//        cout << "Account Holder: " << accountHolder << endl;
//        cout << "Balance: " << balance << endl;
//    }
//};
//
//int main() {
//    int accNum;
//    char accHolder[50];
//    double balance;
//
//    cout << "Enter Account Number: ";
//    cin >> accNum;
//    cin.ignore();
//    cout << "Enter Account Holder Name: ";
//    cin.getline(accHolder, 50);
//    cout << "Enter Initial Balance: ";
//    cin >> balance;
//
//    BankAccount account(accNum, accHolder, balance);
//    account.displayDetails();
//
//    double amount;
//    cout << "Enter deposit amount: ";
//    cin >> amount;
//    account.deposit(amount);
//
//    cout << "Enter withdrawal amount: ";
//    cin >> amount;
//    account.withdraw(amount);
//
//    return 0;
//}
