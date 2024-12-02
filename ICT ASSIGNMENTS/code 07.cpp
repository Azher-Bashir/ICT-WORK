//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//static int fibonacci(int n)
//{
//	if (n <= 1)
//		return n;
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main()
//{
//	int n;
//	cout << "Enter the number of terms: ";
//	cin >> n;
//	cout << "Fibonacci Series: ";
//	for (int i = 0; i < n; i++)
//	{
//		cout << fibonacci(i) << " ";
//	}
//	return 0;
//}
////
////#include <iostream>
////
////using namespace std;
////
////int main()
////{
////	int n, t1 = 0, t2 = 1, nextTerm = 0;
////	cout << "Enter the number of terms: ";
////	cin >> n;
////	cout << "Fibonacci Series: ";
////	for (int i = 1; i <= n; ++i)
////	{
////		if (i == 1)
////		{
////			cout << t1 << " ";
////			continue;
////		}
////		if (i == 2)
////		{
////			cout << t2 << " ";
////			continue;
////		}
////		nextTerm = t1 + t2;
////		t1 = t2;
////		t2 = nextTerm;
////		cout << nextTerm << " ";
////	}
////	return 0;
////}