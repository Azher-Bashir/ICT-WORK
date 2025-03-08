////In a C++ program, A graphics application allows users to create, duplicate, and modify
////rectangles.Each rectangle has a dynamically allocated color attribute, private width and height
////attributes with getter / setter methods.Users report that changing the color of one rectangle
////also changes its duplicate, indicating a shallow copy issue.
////Your task is to :
////• Implement a Rectangle class with a dynamically allocated color attribute.
////• Use the default copy constructor and demonstrate the shallow copy issue.
////• Fix the issue using a deep copy in the copy constructor.
////• Implement a move constructor to efficiently transfer ownership of resources.
////• Ensure proper memory management using a destructor.
////Sample Output :
////Creating Original Rectangle :
////Rectangle: Color = Red, Width = 10, Height = 20
////Copying Rectangle(Deep Copy Constructor Called) :
////	Rectangle : Color = Red, Width = 10, Height = 20
////	Modifying Color of Copy :
////Rectangle: Color = Blue, Width = 10, Height = 20
////Rectangle : Color = Red, Width = 10, Height = 20
////Using Move Constructor :
////Rectangle: Color = Blue, Width = 10, Height = 20
//
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Rectangle
//{
//	string* color;
//	int width;
//	int height;
//
//public:
//	Rectangle();
//	Rectangle(string, int, int);
//	Rectangle(const Rectangle&);
//	Rectangle(Rectangle&&);
//	~Rectangle();
//	void set_color(string);
//	string get_color();
//	void set_width(int);
//	int get_width();
//	void set_height(int);
//	int get_height();
//	void print();
//};
//
//Rectangle::Rectangle()
//{
//	color = new string("Red");
//	width = 10;
//	height = 20;
//}
//
//Rectangle::Rectangle(string c, int w, int h)
//{
//	color = new string(c);
//	width = w;
//	height = h;
//}
//
//Rectangle::Rectangle(const Rectangle& obj)
//{
//	color = new string(*obj.color);
//	width = obj.width;
//	height = obj.height;
//	cout << "Copying Rectangle(Deep Copy Constructor Called) :" << endl;
//}
//
//Rectangle::Rectangle(Rectangle&& obj)
//{
//	color = obj.color;
//	width = obj.width;
//	height = obj.height;
//	obj.color = nullptr;
//	obj.width = 0;
//	obj.height = 0;
//	cout << "Using Move Constructor :" << endl;
//}
//
//
//Rectangle::~Rectangle()
//{
//	delete color;
//}
//
//void Rectangle::set_color(string c)
//{
//	*color = c;
//}
//
//string Rectangle::get_color()
//{
//	return *color;
//}
//
//void Rectangle::set_width(int w)
//{
//	width = w;
//}
//
//int Rectangle::get_width()
//{
//	return width;
//}
//
//void Rectangle::set_height(int h)
//{
//	height = h;
//}
//
//int Rectangle::get_height()
//{
//	return height;
//}
//
//void Rectangle::print()
//{
//	cout << "Rectangle: Color = " << *color << ", Width = " << width << ", Height = " << height << endl;
//}
//
//int main()
//{
//	cout << "Creating Original Rectangle :" << endl;
//	Rectangle r1;
//	r1.print();
//	Rectangle r2 = r1;
//	cout << "Modifying Color of Copy :" << endl;
//	r2.set_color("Blue");
//	r2.print();
//	r1.print();
//	Rectangle r3 = move(r2);
//	r3.print();
//	return 0;
//}
//
