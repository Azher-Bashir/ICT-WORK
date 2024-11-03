////Create a code that takes an integer input and checks if it’s a prime number using a while loop.
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	int num, i = 2;
//	cout << "Enter a number:";
//	cin >> num;
//	while (i <= num / 2)
//	{
//		if (num % i == 0)
//		{
//			cout << num << " is not a prime number."  << endl;
//			break;
//		}
//		i++;
//	}
//	if (i > num / 2)
//	{
//		cout << num << " is a prime number." << endl;
//	}
//	return 0;
//
//	//int num;
//	//cout << "Enter the number:";
//	//cin >> num;
//	//if (num % 1 == 0 && num % num == 0)
//	//{
//	//	cout << num << " is a prime number.";
//	//}
//	//else
//	//	cout << num << " is not a prime number.";
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////{
////	int number, a, b, c, d;
////	cout << "Enter a number: ";
////	cin >> number;
////	a = number;
////	b = a % 10;
////	a = a / 10;
////	c = a % 10;
////	a = a / 10;
////	d = a % 10;
////	if (pow(b, 3) + pow(c, 3) + pow(d, 3) == number)
////	{
////		cout << number << " is an Armstrong number.";
////	}
////	else
////		cout << number << " is not an Armstrong number.";
////	return 0;
////}