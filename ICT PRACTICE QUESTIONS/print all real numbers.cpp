//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int ll, ul, sum_even = 0, diff_even = 0, sum_odd = 0, diff_odd = 0;
//	cout << "Enter the lower limit:";
//	cin >> ll;
//	cout << "Enter the upper limit:";
//	cin >> ul;
//	int i = ll;
//
//	cout << "Even numbers are:";
//	for (ll; ll <= ul; ll++)
//	{
//		if (ll % 2 == 0)
//		{
//			cout << ll << ", ";
//			sum_even += ll;
//			diff_even -= ll;
//			//cout << "Sum of even numbers = " << sum << endl << "difference = " << diff << endl;
//		}
//	}
//
//	cout << endl << "Sum of even numbers = " << sum_even << endl;
//	cout << endl << "odd numbers are: ";
//	for (i; i <= ul; i++)
//	{
//		if (i % 2 != 0)
//		{
//			cout << i << ", ";
//			sum_odd += i;
//			diff_odd -= i;
//
//		}
//	}
//	cout << endl << "Sum of odd numbers = " << sum_odd << endl;
//	cout << "Difference of sum of odd numbers and sum of even numbers = " << sum_even - sum_odd << endl;
//	//system("pause");
//	return 0;
//}