//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//static void Calculate_Roots(double a, double b, double c)
//{
//	double roots;
//	roots = -b + sqrt(pow(b, 2) - 4 * a * c) / (2 * a);
//	cout << "Roots are: " << roots << endl;
//	roots = -b - sqrt(pow(b, 2) - 4 * a * c) / (2 * a);
//	cout << "Roots are: " << roots << endl;
//}
//
//int main()
//{
//	double a, b, c, disccriminent;
//	cout << "Enter the value of a: ";
//	cin >> a;
//	cout << "Enter the value of b: ";
//	cin >> b;
//	cout << "Enter the value of c: ";
//	cin >> c;
//
//	disccriminent = pow(b, 2) - 4 * a * c;
//
//	if (disccriminent > 0)
//	{
//		Calculate_Roots(a, b, c);
//	}
//	else
//		cout << "!!! INVALIDE !!!" << endl;
//	system("pause");
//	return 0;
//}