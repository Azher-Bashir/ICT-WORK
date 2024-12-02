//#include <iostream>
//#include <cmath>
//
//using namespace std;
//int org;
//int decimal_convertor(int num)
//{
//	org = num;
//	while (num != 0)
//	{
//		int remainder = num % 10;
//		if (remainder != 0 && remainder != 1)
//		{
//			cout << "Invalid binary number" << endl;
//			exit(0);
//		}
//		num /= 10;
//	}
//	num = org;
//	int decimal = 0, i = 0, rem;
//	while (num != 0)
//	{
//		rem = num % 10;
//		num /= 10;
//		decimal += rem * pow(2, i);
//		++i;
//	}
//	return decimal;
//}
//
//int main()
//{
//	int num;
//	cout << "Enter binary number to be converted: ";
//	cin >> num;
//	cout << "Decimal number of binary number (" << num << ") = " << decimal_convertor(num) << endl;
//	return 0;
//}
//
