//#include <iostream>
//
//using namespace std;
//
//int lower, upper, sum = 0, fact;
//
//static int sum_of_factorials(int lower, int upper)
//{
//	for (int i = lower; i <= upper; i++)
//	{
//		fact = 1;
//		for (int j = i; j >= 1; j--)
//		{
//			fact *= j;
//		}
//		sum += fact;
//	}
//	return fact, sum;
//}
//
//int main()
//{
//	cout << "Enter the lower limit: ";
//	cin >> lower;
//	cout << "Enter the upper limit: ";
//	cin >> upper;
//
//	sum_of_factorials(lower, upper);
//
//	cout << "The sum of factorials of the numbers between " << lower << " & " << upper << " is: " << sum;
//
//	return 0;
//}