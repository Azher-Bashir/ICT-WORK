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
//    ~shape();
//    string get_color();
//};
//
//shape::shape(string color)
//{
//    this->color = color;
//    cout << "Shape constructor called with color: " << color << endl;
//}
//
//shape::~shape()
//{
//    cout << "Shape destructor called" << endl;
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
//    ~two_d_shape();
//    int get_sides();
//};
//
//two_d_shape::two_d_shape(string color, int num_sides) : shape(color)
//{
//    this->num_sides = num_sides;
//    cout << "TwoDShape constructor called with color: " << color << " and num_sides: " << num_sides << endl;
//}
//
//two_d_shape::~two_d_shape()
//{
//    cout << "TwoDShape destructor called" << endl;
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
//    ~rectangle();
//    double calculate_area();
//};
//
//rectangle::rectangle(string color, int num_sides, double length, double width) : two_d_shape(color, num_sides)
//{
//    this->length = length;
//    this->width = width;
//    cout << "Rectangle constructor called with color: " << color << ", num_sides: " << num_sides << ", length: " << length << ", and width: " << width << endl;
//}
//
//rectangle::~rectangle()
//{
//    cout << "Rectangle destructor called" << endl;
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
//    cout << "Creating a rectangle with the following attributes:" << endl;
//    cout << "Color: " << rect.get_color() << endl;
//    cout << "Number of Sides: " << rect.get_sides() << endl;
//    cout << "Length: " << 5 << endl; 
//    cout << "Width: " << 6 << endl; 
//    cout << "Area: " << rect.calculate_area() << endl;
//    return 0;
//}
