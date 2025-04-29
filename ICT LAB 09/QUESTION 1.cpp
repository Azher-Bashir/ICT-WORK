//#include <iostream>
//#include <string>
//using namespace std;
//
//class CarSpecs
//{
//private:
//	string brand;
//	string modle;
//	double cost;
//public:
//	CarSpecs();
//	CarSpecs(string, string, double);
//	void set_brand(string);
//	void set_modle(string);
//	void set_cost(double);
//	string get_brand();
//	string get_modle();
//	double get_cost();
//};
//CarSpecs::CarSpecs()
//{
//	brand = "";
//	modle = "";
//	cost = 0;
//}
//
//CarSpecs::CarSpecs(string brand, string modle, double cost)
//{
//	this->brand = brand;
//	this->modle = modle;
//	this->cost = cost;
//}
//void CarSpecs::set_brand(string brand)
//{
//	this->brand = brand;
//}
//void CarSpecs::set_modle(string modle)
//{
//	this->modle = modle;
//}
//void CarSpecs::set_cost(double cost)
//{
//	this->cost = cost;
//}
//string CarSpecs::get_brand()
//{
//	return brand;
//}
//string CarSpecs::get_modle()
//{
//	return modle;
//}
//double CarSpecs::get_cost()
//{
//	return cost;
//}
//
//class ManufacturingDate
//{
//private:
//	int month;
//	int day;
//	int year;
//public:
//	ManufacturingDate();
//	ManufacturingDate(int, int, int);
//	void set_month(int);
//	void set_day(int);
//	void set_year(int);
//	int get_month();
//	int get_day();
//	int get_year();
//};
//ManufacturingDate::ManufacturingDate()
//{
//	month = 0;
//	day = 0;
//	year = 0;
//}
//ManufacturingDate::ManufacturingDate(int d, int m, int y)
//{
//	year = y;
//	month = m;
//	day = d;
//}
//void ManufacturingDate::set_month(int m)
//{
//	month = m;
//}
//void ManufacturingDate::set_day(int d)
//{
//	day = d;
//}
//void ManufacturingDate::set_year(int y)
//{
//	year = y;
//}
//int ManufacturingDate::get_month()
//{
//	return month;
//}
//int ManufacturingDate::get_day()
//{
//	return day;
//}
//int ManufacturingDate::get_year()
//{
//	return year;
//}
//
//
////class for car and its features...
//class Car
//{
//private:
//	CarSpecs specs;
//	ManufacturingDate manufacturing_date;
//	string color;
//public:
//	Car();
//	Car(string, string, double, int, int, int, string);
//	void set_color(string);
//	string get_color();
//}
//Car::Car()
//{
//	CarSpecs();
//	ManufacturingDate();
//	color = "";
//}
//Car::Car(string b, string m, double c, int d, int mon, int y, string color)
//{
//	CarSpecs(b, m, c);
//	ManufacturingDate(d, mon, y);
//	this->color = color;
//}
//void Car::set_color(string color)
//{
//	this->color = color;
//}
//string Car::get_color()
//{
//	return color;
//}
//int main() {
//
//	Car spec;
//	string b, m, c, mon, d, y, color;
//	cout << "Enter details";
//
//
//
//	return 0;
//}