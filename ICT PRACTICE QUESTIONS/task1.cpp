//Consider the following class definition whose objects are supposed to encapsulate data that represents a color.Each color is represented by its RGB(red, green, blue) content, where RGB values are integers from 0 to 255. For example, red color is represented as(255, 0, 0).Assume that when you add two colors, their corresponding RGB values get added
//but this addition is done modulo 256. For example :
//-
//Adding(0, 0, 255) and (255, 0, 0) will result in(255, 0, 255).
//-
//Adding(255, 255, 0) and (255, 1, 10) will give you(255, 0, 10).
//
//- Adding(24, 43, 213)
//and (201, 222, 5) will give you(225, 9, 218)
//
//
//Complete
//the class declaration below such that the given main() compiles without errors.
//
//
//class Color
//{
//private:
//
//	int red, green, blue;
//public:
//
//
//	Color(int r = 0, int g = 0, int b = 0) :red(r), green(g), blue(b) {}
//
//
//	// write overloaded functions prototype here
//
//
//};
//int main()
//{
//	Color c1(111, 2, 250);
//	Color c2(7, 103, 42);
//	Color c3 = c1 + c2; // something required here
//	cout << ”Color1:”;
//	cout << c1 << endl; // something required here
//	cout << ”Color2:”;
//	cout << c2 << endl; // something required here
//	cout << ”Color3:”;
//	cout << c3 << endl; // something required here
//	return 0;
//}
//Sample output :
//
//Color1: 111, 2, 250
//Color2 : 7, 103, 42
//Color3 : 118, 105, 36

#include <iostream>
using namespace std;
class Color
{
private:
	int red, green, blue;
public:
	Color(int r = 0, int g = 0, int b = 0) :red(r), green(g), blue(b) {}
	Color operator+(const Color& other) 
	{
		return Color((red + other.red) % 256, (green + other.green) % 256, (blue + other.blue) % 256);
	}
	friend ostream& operator<<(ostream& os, const Color& color) {
		os << color.red << ", " << color.green << ", " << color.blue;
		return os;
	}
};
int main()
{
	Color c1(111, 2, 250);
	Color c2(7, 103, 42);
	Color c3 = c1 + c2;
	cout << "Color1: ";
	cout << c1 << endl;
	cout << "Color2: ";
	cout << c2 << endl;
	cout << "Color3: ";
	cout << c3 << endl;
	return 0;
}
