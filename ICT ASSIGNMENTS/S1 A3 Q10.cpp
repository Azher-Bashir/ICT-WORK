////Implement a recursive function to calculate the GCD of two numbers using the Euclidean algorithm
//
//#include <iostream>
//using namespace std;
//
//int gcd(int a, int b)
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	else
//	{
//		return gcd(b, a % b);
//	}
//}
//
//int main()
//{
//	int a, b;
//	cout << "Enter first number: ";
//	cin >> a; 
//	cout << "Enter second number: ";
//	cin >> b;
//	cout << "The GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
//	return 0;
//}