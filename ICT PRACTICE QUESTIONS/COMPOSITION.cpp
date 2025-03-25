//#include <iostream>
//#include <string>
//using namespace std;
//
//class address
//{
//private:
//	string house_num;
//	string street_no;
//	string city;
//public:
//	address(){}
//	address(string, string, string);
//	void print();
//};
//address::address(string house_num, string street_no, string city)
//{
//	this->house_num = house_num;
//	this->street_no = street_no;
//	this->city = city;
//}
//void address::print()
//{
//	cout << "House Number: " << house_num << endl;
//	cout << "Street Number: " << street_no << endl;
//	cout << "City: " << city << endl;
//}
//
//class student
//{
//private:
//	string stu_name;
//	string roll_no;
//	address Address;
//public:
//	student (){}
//	student(string, string, address);
//	void print();
//};
//
//student::student(string stu_name, string roll_no, address Address)
//{
//	this->stu_name = stu_name;
//	this->Address = Address;
//	this->roll_no = roll_no;
//}
//void student::print()
//{
//	cout << "Student Name: " << stu_name << endl;
//	cout << "Roll Number: " << roll_no << endl;
//	Address.print();
//}
//
//int main()
//{
//	string name, roll_num, house_num, street_num, city;
//	address s1;
//	student a;
//	cout << "Enter Student Name: ";
//	getline(cin, name);
//	cout << "Enter roll number: ";
//	getline(cin, roll_num);
//	cout << "Enter House Number: ";
//	getline(cin, house_num);
//	cout << "Enter Street Number: ";
//	getline(cin, street_num);
//	cout << "Enter City: ";
//
//	getline(cin, city);
//	address s2(house_num, street_num, city);
//	student a1(name, roll_num, s2);
//	a1.print();
//	return 0;
//
//}