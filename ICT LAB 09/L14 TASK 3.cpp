////exercise 03:
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void user_details(int& card_num, int& initial_bal, string& card_type)
//{
//	int a;
//	cout << endl << "Your card number is: ";
//CARD_NUM:
//	cin >> card_num;
//	cout << endl;
//	a = card_num;
//	int i = 0;
//	while (a != 0)
//	{
//		a /= 10;
//		i++;
//	}
//	if (i > 5)
//	{
//		cout << "Re Enter a 5 digit card number : ";
//		goto CARD_NUM;
//	}
//	cout << "Your current balance is: ";
//	cin >> initial_bal;
//	cout << endl;
//TYPE:
//	cout << "Enter Type of Card (Gold or Silver) : ";
//	cin >> card_type;
//	if ((card_type != "gold" || card_type == "GOLD") && (card_type != "silver" || card_type == "SILVER"))
//	{
//		cout << "!!! INVALIDE INPUT !!!" << endl;
//		goto TYPE;
//	}
//}
//void withdraw(int& amount, int& initial_bal, string& card_type)
//{
//AMOUNT:
//	cout << "Enter the amount you want to withdraw: ";
//	cin >> amount;
//	if (amount > 10000 && card_type == "gold" || card_type == "GOLD")
//	{
//		cout << "!!! You can not withdraw amount more than 10,000 !!!" << endl;
//		goto AMOUNT;
//	}
//	else if (amount > 25000 && card_type == "silver" || card_type == "SILVER")
//	{
//		cout << "!!! You can not withdraw amount more than 25000 !!!" << endl;
//		goto AMOUNT;
//	}
//	cout << endl;
//
//	cout << "Your previous balance was : " << initial_bal;
//	cout << endl;
//	cout << "your current balance after deduction is : " << initial_bal - amount << endl;
//
//}
//
//int main()
//{
//	int card_number, initial_balance;
//	string TypeOfCard;
//	user_details(card_number, initial_balance, TypeOfCard);
//
//	int choice;
//	do
//	{
//		cout << "1. Withdraw Money" << endl;
//		cout << "2. Exit" << endl;
//		cout << "Enter your choice: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			withdraw(card_number, initial_balance, TypeOfCard);
//			break;
//		case 2:
//			break;
//		default:
//			cout << "Invalid choice" << endl;
//		}
//	} while (choice != 2);
//	return 0;
//}