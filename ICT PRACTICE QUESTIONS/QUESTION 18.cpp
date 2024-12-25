////Construct a function named sort4 that takes four floating - point arguments, x, y, z, and w,
////and modifies their values to satisfy the inequality x& lt; y& lt; z& lt; wx& lt; y& lt; z& lt; wx& lt; y& lt; z& lt; w.The
////function should not return any value.
////For example :
////cpp
////float a = 6.5, b = 3.3, c = 8.1, d = 2.9;
////sort4(a, b, c, d);
////cout& lt; &lt; a& lt; &lt; &quot; &quot; &lt; &lt; b& lt; &lt; &quot; &quot; &lt; &lt; c& lt; &lt; &quot; &quot; &lt; &lt; d& lt; &lt; endl;
////// Output: 2.9 3.3 6.5 8.1
//
//#include <iostream>
//using namespace std;
//
//void sort4(float& x, float& y, float& z, float& w)
//{
//	float temp;
//	if (x > y)
//	{
//		temp = x;
//		x = y;
//		y = temp;
//	}
//	if (y > z)
//	{
//		temp = y;
//		y = z;
//		z = temp;
//	}
//	if (z > w)
//	{
//		temp = z;
//		z = w;
//		w = temp;
//	}
//	if (x > y)
//	{
//		temp = x;
//		x = y;
//		y = temp;
//	}
//	if (y > z)
//	{
//		temp = y;
//		y = z;
//		z = temp;
//	}
//	if (x > y)
//	{
//		temp = x;
//		x = y;
//		y = temp;
//	}
//}
//
//int main()
//{
//	float a, b, c, d;
//	cout << "Enter four decimal values : " << endl;
//	cout << "a = ";
//	cin >> a;
//	cout << "b = ";
//	cin >> b;
//	cout << "c = ";
//	cin >> c;
//	cout << "d = ";
//	cin >> d;
//	sort4(a, b, c, d);
//	cout << a << " " << b << " " << c << " " << d << endl;
//	return 0;
//}
