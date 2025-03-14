//#include<iostream>
//#include <string>
//using namespace std;
//
//class charac
//{
//
//	int age;
//	double height;
//	string name;
//public:
//	void get_data(string, double, int);
//	int set_data(string, double , int);
//	void print();
//};
//
//void charac::get_data(string n, double h, int a)
//{
//	cout << "Enter name: ";
//	getline(cin, n);
//	cout << "Enter height: ";
//	cin >> h;
//	cout << "Enter age: ";
//	cin >> a;
//
//	set_data(n, h, a);
//}
//
//int charac::set_data(string n, double h, int a)
//{
//	int size = 0;
//	name = n;
//	height = h;
//	age = a;
//
//	return size;
//}
//
//void charac::print()
//{
//	cout << name << endl; 
//	cout << height << endl;
//	cout << age << endl;
//}
//
//int main()
//{
//	charac a;
//
//	string name = "";
//	double hei = 0;
//	int age = 0;
//	a.get_data(name, hei, age);
//	a.set_data(name, hei, age);
//	a.print();
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////class mighty_raju
////{
////	string name;
////	int age;
////	double height;
////	int* arr;
////
////public:
////
////	mighty_raju();
////
////	mighty_raju(string&, int&, double&, int*&);
////
////	//mighty_raju(double, string);
////
////
////	//void get_data(string, int, double, int*);
////	//void set_data(string&, int&, double&, int*&);
////	void print();
////
////	//void get_data(string n, int a, int h, int* ar);
////
////};
////
//////mighty_raju::mighty_raju()
//////{
//////	name = "fdscsdfsdfsdf";
//////	age = 01;
//////	height = 8.3;
//////	arr = new int[3] {1, 2, 3};
//////}
////
////mighty_raju::mighty_raju(string& n, int& a, double& h, int*& ptr)
////{
////	cout << "Enter hte name: ";
////	getline(cin, n);
////	cout << "Enter the age: ";
////	cin >> a;
////	cout << "Enter the height: ";
////	cin >> h;
////	cout << "Enter the three random numbers: ";
////	for (int i = 0; i < 3; i++)
////	{
////		cin >> ptr[i];
////	}
////
////	name = n;
////	age = a;
////	height = h;
////	arr = ptr;
////}
////
////
////
////
////
////
////
////
////
////
////
////
////
//////void mighty_raju::get_data(string n, int a, double h, int* ptr)
//////{
//////	ptr = new int[3];
//////	cout << "Enter three random number ranging from 1 - 100: ";
//////	for (int i = 0; i < 3; i++)
//////	{
//////		ERROR:
//////		cin >> ptr[i];
//////		if (ptr[i] < 0 || ptr[i] > 100)
//////		{
//////			cout << "Enter the number again: ";
//////			goto ERROR;
//////		}
//////	}
//////	cout << "Enter the name of the person: ";
//////	cin.ignore();
//////	getline(cin, n);
//////	cout << "Enter its age: ";
//////	cin >> a;
//////
//////	set_data(n, a, h, ptr);
//////}
//////
//////void mighty_raju::set_data(string& n, int& a, double& h, int*& ptr)
//////{
//////	name = n;
//////	age = a;
//////	height = h;
//////
//////	//for (int i = 0; i < 3; i++)
//////	//{
//////	//	arr[i] = ptr[i];
//////	//}
//////	arr = ptr;
//////}
//////
////void mighty_raju::print()
////{
////	cout << "Changed name = " << name << endl;
////	cout << "New age = " << age << endl;
////	cout << "OHeight = " << height << endl;
////	
////	for (int i = 0; i < 3; i++)
////	{
////		cout << arr[i] << " ";
////	}
////}
////
////
////int main()
////{
//////	mighty_raju raju;
////	string name = "";
////	int age = 0;
////	double height = 0.0;
////	int* ptr = new int[3];
//////	raju.get_data(name, age, height, ptr);
//////	//raju.set_data(name, age, height, ptr);
//////	raju.print();
////	//int* ptr = new int[3];
////	mighty_raju a(name, age, height, ptr);
////	a.print();
////
////	cout << name << endl;
////	cout << age << endl;
////	cout << height << endl;
////
////	for (int i = 0; i < 3; i++)
////	{
////		cout << ptr[i] << " ";
////	}
////
////	//mighty_raju raju("Azher", 7.8);
////
////	//raju.print();
////
////
////
////	return 0;
////
////}