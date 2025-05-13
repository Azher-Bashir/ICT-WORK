//#include <iostream>
//using namespace std;
//
//class student
//{
//private:
//	string name;
//	int roll_no;
//public:
//	student(){}
//	student(string, int);
//	void print();
//};
//student::student(string x, int y)
//{
//	name = x;
//	roll_no = y;
//}
//void student::print()
//{
//	cout << "Name: " << name << endl;
//	cout << "Roll No: " << roll_no << endl;
//}
//
//class address : public student
//{
//private:
//	string city;
//	string state;
//
//public:
//	address(string, int, string, string);
//	void print();
//};
//address::address(string x, int y, string z, string w)
//{
//	
//	/*student(x, y);*/
//	//set_name("x");
//	city = z;
//	state = w;
//
//}
//void address::print()
//{
//	student::print();
//	cout << "City: " << city << endl;
//	cout << "State: " << state << endl;
//}
//
//int main()
//{
//	address a("John Doe", 123, "New York", "NY");
//	a.print();
//	return 0;
//}