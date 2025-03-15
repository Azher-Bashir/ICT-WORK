////Write a C++ program to add a functionality of performing arithmetic operations on fractions in
////an existing mathematics application.The functionality must support addition, subtraction,
////multiplication, division, and equality checks between fractions.After each operation, the result
////must be stored in its simplest form(i.e., reduced fraction).
////Design a Fraction class with private members : numerator and denominator.Provide
////appropriate constructors.Overload the following operators :
////• + for fraction addition
////• - for fraction subtraction
////•* for fraction multiplication
////• / for fraction division
////• == to compare two fractions for equality
////After each arithmetic operation, automatically reduce the resulting fraction using the Greatest
////Common Divisor(GCD).Display the result of operations using a member function.
////Sample Output :
////Fraction 1 : 2 / 3
////Fraction 2 : 3 / 4
////Sum : 17 / 12
////Difference : -1 / 12
////Product : 1 / 2
////Division : 8 / 9
////Are fractions equal ? No
////Is Fraction 1 equal to 4 / 6 ? Yes
//
//#include <iostream>
//using namespace std;
//
//class Fraction
//{
//private:
//	int numerator;
//	int denominator;
//public:
//	Fraction(int = 0, int = 1);
//	Fraction operator+(Fraction);
//	Fraction operator-(Fraction);
//	Fraction operator*(Fraction);
//	Fraction operator/(Fraction);
//	bool operator==(Fraction);
//	void display();
//};
//
//Fraction::Fraction(int num, int den)
//{
//	numerator = num;
//	denominator = den;
//}
//
//Fraction Fraction::operator+(Fraction f)
//{
//	Fraction temp;
//	temp.numerator = numerator * f.denominator + f.numerator * denominator;
//	temp.denominator = denominator * f.denominator;
//	return temp;
//}
//
//Fraction Fraction::operator-(Fraction f)
//{
//	Fraction temp;
//	temp.numerator = numerator * f.denominator - f.numerator * denominator;
//	temp.denominator = denominator * f.denominator;
//	return temp;
//}
//
//Fraction Fraction::operator*(Fraction f)
//{
//	Fraction temp;
//	temp.numerator = numerator * f.numerator;
//	temp.denominator = denominator * f.denominator;
//	return temp;
//}
//
//Fraction Fraction::operator/(Fraction f)
//{
//	Fraction temp;
//	temp.numerator = numerator * f.denominator;
//	temp.denominator = denominator * f.numerator;
//	return temp;
//}
//
//bool Fraction::operator==(Fraction f)
//{
//	return (numerator * f.denominator == denominator * f.numerator);
//}
//
//void Fraction::display()
//{
//	int gcd = 1;
//	for (int i = 1; i <= numerator && i <= denominator; i++)
//	{
//		if (numerator % i == 0 && denominator % i == 0)
//			gcd = i;
//	}
//	numerator /= gcd;
//	denominator /= gcd;
//	cout << numerator << " / " << denominator << endl;
//}
//
//int main()
//{
//	Fraction f1(2, 3), f2(3, 4), f3;
//	cout << "Fraction 1 : ";
//	f1.display();
//	cout << "Fraction 2 : ";
//	f2.display();
//	f3 = f1 + f2;
//	cout << "Sum : ";
//	f3.display();
//	f3 = f1 - f2;
//	cout << "Difference : ";
//	f3.display();
//	f3 = f1 * f2;
//	cout << "Product : ";
//	f3.display();
//	f3 = f1 / f2;
//	cout << "Division : ";
//	f3.display();
//	if (f1 == f2)
//		cout << "Are fractions equal ? Yes" << endl;
//	else
//		cout << "Are fractions equal ? No" << endl;
//	if (f1 == Fraction(4, 6))
//		cout << "Is Fraction 1 equal to 4 / 6 ? Yes" << endl;
//	else
//		cout << "Is Fraction 1 equal to 4 / 6 ? No" << endl;
//	return 0;
//}