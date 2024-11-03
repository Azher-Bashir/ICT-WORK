//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	int num, original, rem = 0, n = 0, ans = 0;
//	cout << "Enter an integer only: ";
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
//		ans += pow(rem, n);
//		original /= 10;
//	}
//	if (num == ans)
//		cout << "The number you entered (" << num << ") is an armstrong number." << endl;
//	else if (num != ans)
//		cout << "The number you entered (" << num << ") is not an armstrong number." << endl;
//	else
//		cout << "PLease enter an integer..." << endl;
//	return 0;
//}