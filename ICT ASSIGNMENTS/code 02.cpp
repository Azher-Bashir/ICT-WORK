//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//static int decimal_convertor(int binary)
//{
//	int i = 0;
//	int original = binary, rem, decimal = 1;
//	while (binary != 0)
//	{
//		original /= 10;
//		i++;
//	}
//	for (int j = 0; j <= i; i++)
//	{
//		rem = binary % 10;
//		binary /= 10;
//		decimal += rem * pow(10, i);
//	}
//	cout << "The decimal number is: " << decimal << endl;
//	return decimal;
//}
//
//int main()
//{
//	int binary;
//	cout << "Enter the bnary number (only 0 & 1): ";
//	cin >> binary;
//	decimal_convertor(binary);
//
//	return 0;
//}
