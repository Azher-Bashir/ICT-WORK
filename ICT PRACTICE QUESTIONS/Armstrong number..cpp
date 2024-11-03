//////Write a C++ code that checks if a number is an Armstrong number.
////#include <iostream>
////#include <cmath>
////using namespace std;
////int main()
////{
////	int num, i, rem, result = 0, n = 0;
////	cout << "Enter an integer: ";
////	cin >> num;
////	i = num;
////	while (i != 0)
////	{
////		i /= 10;
////		++n;
////	}
////	i = num;
////	while (i != 0)
////	{
////		rem = i % 10; 
////		result += pow(rem, n);
////		i /= 10;
////	}
////	if (result == num)
////		cout << num << " is an Armstrong number." << endl;
////	else
////		cout << num << " is not an Armstrong number." << endl;
////	return 0;
////}
//
//
//
//
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	int num, original, rem, result = 0, n = 0;
//	cout << "Enter an integer";
//	cin >> num;
//	original = num;
//	while (original != 0)
//	{
//		original /= 10;
//		n++;
//	}
//	original = num;
//	while (original != 0)
//	{
//		rem = original % 10;
//		result += pow(rem, n);
//		original /= 10;
//	}
//	if (result == num)
//		cout << "The entered number is armstrong" << endl;
//
//	else
//		cout << "The entered number is not armstrong" << endl;
//	return 0;
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
//
//
//
//
//
//
//
