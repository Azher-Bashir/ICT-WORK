//#include <iostream>
//using namespace std;
//
//class complex
//{
//private:
//	double real;
//	double comp;
//public:
//	complex();
//	complex(int, int);
//	void set(int, int);
//	int get_real();
//	int get_complex();
//	complex operator+ (complex& obj);
//	complex operator- (complex& obj);
//	complex operator* (complex& obj);
//	complex operator/ (complex& obj);
//	bool operator== (complex& obj);
//	complex operator= (complex& obj);
//	void print();
//};
//complex::complex()
//{
//	real = 0;
//	comp = 0;
//}
//complex::complex(int r, int c)
//{
//	real = r;
//	comp = c;
//}
//void complex::set(int r, int c)
//{
//	real = r;
//	comp = c;
//}
//
//int complex::get_real()
//{
//	return real;
//}
//
//int complex::get_complex()
//{
//	return comp;
//}
//complex complex::operator+(complex& obj)
//{
//	complex temp;
//	temp.real = real + obj.real;
//	temp.comp = comp + obj.comp;
//	return temp;
//}
//complex complex::operator-(complex& obj)
//{
//	complex temp;
//	temp.real = real - obj.real;
//	temp.comp = comp - obj.comp;
//	return temp;
//}
//
//complex complex::operator*(complex& obj)
//{
//	complex temp;
//	temp.real = (real * obj.real) - (comp * obj.comp);
//	temp.comp = (comp * obj.real) + (real * obj.comp);
//	return temp;
//}
//complex complex::operator/(complex& obj)
//{
//	complex temp;
//	int denominator = (obj.real * obj.real) + (obj.comp * obj.comp);
//	if (denominator == 0)
//	{
//		throw runtime_error("Division by zero");
//	}
//	else
//	{
//		temp.real = ((real * obj.real) + (comp * obj.comp)) / denominator;
//		temp.comp = ((comp * obj.real) - (real * obj.comp)) / denominator;
//	}
//	return temp;
//}
//complex complex::operator=(complex& obj)
//
//{
//	this->real = obj.real;
//	this->comp = obj.comp;
//	return *this;
//}
//
//bool complex::operator==(complex& obj)
//{
//	if (real == obj.real && comp == obj.comp)
//		return true;
//	else
//		return false;
//}
//
//void complex::print()
//{
//	cout << "real = " << real << endl;
//	cout << "complex = " << comp << endl;
//
//	cout << real << " + (" << comp << ") i" << endl;
//}
//int main()
//{
//	complex n1, n2, n3;
//	double r1, r2, c1, c2;
//	cout << "Ente the real and imaginary part of first the complex number: ";
//	cin >> r1 >> c1;
//	cout << "Ente the real and imaginary part of second the complex number: ";
//	cin >> r2 >> c2;
//	n1.set(r1, c1);
//	n2.set(r2, c2);
//	cout << "Assignment operator: " << endl;
//	n3 = n1;
//	n3.print();
//	cout << "Multiplication result is: " << endl;
//	(n1 * n2).print();
//	cout << "Adition result is: " << endl;
//	(n1 + n2).print();
//	cout << "Division result is: " << endl;
//	(n1 / n2).print();
//	cout << "Subtraction result will be: " << endl;
//	(n1 - n2).print();
//	if (n1 == n2)
//	{
//		cout << "Both numbers are equal!!!" << endl;
//
//	}
//	else
//		cout << "The numbers are not equal!!!" << endl;
//}