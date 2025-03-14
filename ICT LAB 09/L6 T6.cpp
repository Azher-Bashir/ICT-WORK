////Using the above example as guideline please define a class named Bike, with four data members :
////brand, model, price and topspeed.Write a program that includes the following :
////a.Default constructor.
////b.Parameterized constructor.
////c.Destructor.
////d.Accessor / Mutator function for every data member.
////e.A general member function that displays all the data members .
////f.Write a main function that :
////a.Create a Bike object and call its various member functions using that object.
////b.Create a Bike pointer and calls its various member functions using the pointer.
////g.Write a non - member function that takes as parameter the Bike variable
//
//#include <iostream>
//#include <string>
//using namespace std;
//class Bike
//{
//private:
//	string brand;
//	string model;
//	double price;
//	double topspeed;
//public:
//	Bike();//default constructor
//	Bike(string, string, double, double);//parametrized constructor
//	~Bike();//destructor
//	string getBrand();
//	string getModel();
//	double getPrice();
//	double getTopspeed();
//	void setBrand(string);
//	void setModel(string);
//	void setPrice(double);
//	void setTopspeed(double);
//	void display();
//};
//Bike::Bike()
//{
//	brand = " ";
//	model = " ";
//	price = 0;
//	topspeed = 0;
//	cout << "Default constructor called" << endl;
//}
//Bike::Bike(string brand, string model, double price, double topspeed)
//{
//	this->brand = brand;
//	this->model = model;
//	this->price = price;
//	this->topspeed = topspeed;
//	cout << "Parametrized constructor called" << endl;
//}
//Bike::~Bike()
//{
//	cout << "Destructor called" << endl;
//}
//string Bike::getBrand()
//{
//	return brand;
//}
//string Bike::getModel()
//{
//	return model;
//}
//double Bike::getPrice()
//{
//	return price;
//}
//double Bike::getTopspeed()
//{
//	return topspeed;
//}
//
//void Bike::setBrand(string brand)
//{
//	this->brand = brand;
//}
//void Bike::setModel(string model)
//{
//	this->model = model;
//}
//void Bike::setPrice(double price)
//{
//	this->price = price;
//}
//void Bike::setTopspeed(double topspeed)
//{
//	this->topspeed = topspeed;
//}
//void Bike::display()
//{
//	cout << "Brand: " << brand << endl;
//	cout << "Model: " << model << endl;
//	cout << "Price: " << price << endl;
//	cout << "Topspeed: " << topspeed << endl;
//}
//void displayBike(Bike b)
//{
//	cout << "Brand: " << b.getBrand() << endl;
//	cout << "Model: " << b.getModel() << endl;
//	cout << "Price: " << b.getPrice() << endl;
//	cout << "Topspeed: " << b.getTopspeed() << endl;
//}
//int main()
//{
//	Bike A;
//	A.display();
//	A.setBrand("Honda");
//	A.setModel("CD70");
//	A.setPrice(80000);
//	A.setTopspeed(90);
//	A.display();
//	Bike* ptrA = new Bike("Yamaha", "YBR125", 150000, 120);
//
//	ptrA->display();
//	ptrA->setBrand("Suzuki");
//	ptrA->setModel("GS150");
//	ptrA->setPrice(120000);
//	ptrA->setTopspeed(100);
//	ptrA->display();
//	displayBike(A);
//	displayBike(*ptrA);
//	delete ptrA;
//	return 0;
//}
////OUTPUT
////Default constructor called
////Brand:
////Model:
////Price: 0
////Topspeed: 0
////Brand: Honda
////Model: CD70
////Price: 80000
//	
////Topspeed: 90
////Parametrized constructor called
////Brand: Yamaha
////Model: YBR125
////Price: 150000
////Topspeed: 120
////Brand: Suzuki
////Model: GS150
////Price: 120000
////Topspeed: 100
////Brand: Honda
////Model: CD70
////Price: 80000
////Topspeed: 90
