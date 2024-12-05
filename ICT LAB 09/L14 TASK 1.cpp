////#include<iostream> 
////using namespace std;
////
////int counter = 0;
////int function1(int x, int& y)
////{
////	counter = counter + 5; 
////	x = x * 100;
////	y = x * 10; 
////	return x * y;
////}
////static int function2(int& x, int& y, int& z)
////{
////	counter = counter * 10; x = y * z;
////	y = x * y;
////	z = z * z;
////	return x + y + z;
////}
////void main()
////{
////	int x = 10, y = 100, z = 1000;
////	int Result = 1; counter++;
////
////	Result = function1(x, y);
////
////	x = 1; y = 2; z = 3;
////	Result = function2(x, y, z);
//// 
//////cout << Result << endl;
//////cout << counter << endl;
//////cout << x << endl;
//////cout << y << endl;
//////cout << z << endl;
////}
////
//
//
//#include <iostream>
//
//using namespace std;
//
//int GlobalVariable1 = 100; int GlobalVariable2 = 10;
//int Area(int height, int width)
//{
//	height = 2 + width; width = 5 + height;
//	int a = height * width;
//	GlobalVariable1++;
//	GlobalVariable2++;
//	return a;
//}
//int Area1(int& height, int& width)
//{
//	int a = height * width; height = height / 10;
//
//	width = width / 2;
//	GlobalVariable1 = GlobalVariable1 * 10;
//	GlobalVariable2 = GlobalVariable2 * 100; return a;
//}
//
//
//
//void main()
//{
//	int Width = 10; int Length = 20; int area = 0;
//	area =
//		Area(Length, Width);
//	area =
//		Area(Length, Width);
//	area =
//		Area1(Width, Length);
//	area =
//		Area1(Length, Width);
//
////cout << GlobalVariable1 << endl;
////cout << GlobalVariable2 << endl;
////cout << Width << endl;
////cout << Length << endl;
////cout << area << endl;
//
//}