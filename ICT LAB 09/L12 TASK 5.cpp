////Write a program to calculate the place value of digit in an integer.
////For example, if the user inputs an integer “6918” and you want to determine the place value of 6, the output would be “Thousands”.You can include a check for whether that specific digit is present or not.Your program should work for a maximum place value of “thousands”.
////* Units; tens; hundreds; thousands
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int num, digit, place = 0;
//	cout << "Enter a number:";
//	cin >> num;
//	cout << "Enter the digit you want to find the place value of:";
//	cin >> digit;
//	int a = num;
//	int i;
//	for (i = 0; a != 0; ++i)
//	{
//		a /= 10;
//	}
//	for (a = num; a != 0; a)
//	{
//		place++;
//		if (a % 10 == digit)
//		{
//			break;
//		}
//		a /= 10;
//	}
//	if (place == 1)
//		cout << "The place value of " << digit << " in " << num << " is Units." << endl;
//	else if (place == 2)
//		cout << "The place value of " << digit << " in " << num << " is Tens." << endl;
//	else if (place == 3)
//		cout << "The place value of " << digit << " in " << num << " is Hundreds." << endl;
//	else if (place == 4)
//		cout << "The place value of " << digit << " in " << num << " is Thousands." << endl;
//	else
//		cout << "The digit " << digit << " is not present in the number " << num << endl;
//	return 0;
//}