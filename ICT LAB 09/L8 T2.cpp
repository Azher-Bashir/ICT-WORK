////Design a class hierarchy in C++ that includes the following :
////A base class Shape with :
////Attribute: color(string).
////Constructor to initialize the color.
////Method getColor() that returns the value of color.
////A derived class TwoDShape that inherits from Shape and adds :
////Attribute: numSides(int).
////Constructor to initialize both the Shape attribute(color) and TwoDShape attribute
////(numSides).
////Method getSides() that returns the value of numSides.
////A derived class Rectangle that inherits from TwoDShape and adds :
////Attributes: length and width(doubles).
////Constructor to initialize all attributes(color, numSides, length, and width).
////Method area() that calculates and returns the area as length × width.
////In the main function :
////Create an instance of the Rectangle class.
////Demonstrate that the Rectangle instance can access :
////The color attribute and getColor() method from the Shape class.
////The numSides attribute and getSides() method from the TwoDShape class.
////Its own length, width, and area() method.
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class shape
//{
//protected:
//    string color;
//public:
//    shape(string color);
//    string get_color();
//};
//
//shape::shape(string color)
//{
//    this->color = color;
//}
//
//string shape::get_color()
//{
//    return color;
//}
//
//class two_d_shape : public shape
//{
//protected:
//    int num_sides;
//public:
//    two_d_shape(string color, int num_sides);
//    int get_sides();
//};
//
//two_d_shape::two_d_shape(string color, int num_sides) : shape(color)
//{
//    this->num_sides = num_sides;
//}
//
//int two_d_shape::get_sides()
//{
//    return num_sides;
//}
//
//class rectangle : public two_d_shape
//{
//protected:
//    double length;
//    double width;
//public:
//    rectangle(string color, int num_sides, double length, double width);
//    double calculate_area();
//};
//
//rectangle::rectangle(string color, int num_sides, double length, double width) : two_d_shape(color, num_sides)
//{
//    this->length = length;
//    this->width = width;
//}
//
//double rectangle::calculate_area()
//{
//    return length * width;
//}
//
//int main()
//{
//    rectangle rect("Red", 4, 5, 6);
//    cout << "Color: " << rect.get_color() << endl;
//    cout << "Number of Sides: " << rect.get_sides() << endl;
//    cout << "Area: " << rect.calculate_area() << endl;
//    return 0;
//}
