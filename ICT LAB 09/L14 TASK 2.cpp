////exercise 02: Write a program that will take the card number, initial balance, and type of card (Gold or Silver) as input from the user. The program will then provide the following options to the user:
//#include<iostream>
//using namespace std;
//void card_details(int& card_num, int& initial_balance, string& card_type)
//{
//	cout << "Enter Card Number: ";
//CARD_NUM:
//	cin >> card_num;
//	int a;
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
//
//	cout << "Enter Initial Balance: ";
//	cin >> initial_balance;
//	cout << "Enter Type of Card (Gold or Silver) : ";
//TYPE:
//	cin >> card_type;
//	if (card_type != "gold" || card_type == "GOLD" && card_type != "silver" || card_type == "SILVER")
//	{
//		cout << "!!! INVALIDE INPUT !!!" << endl;
//		cout << "Re-Enter Type of Card (Gold or Silver) : ";
//		goto TYPE;
//	}
//
//}
//int main()
//{
//	int CardNumber, InitialBalance;
//	string TypeOfCard;
//	card_details(CardNumber, InitialBalance, TypeOfCard);
//
//	return 0;
//}