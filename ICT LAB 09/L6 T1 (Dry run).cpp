//// Example program
//#include <iostream>
//#include <string>
//using namespace std;
//class student
//{
//private:
//	string name;
//	int rollnumber;
//public:
//	student();
//	student(string, int);
//	int getRollnumber();
//	void setRollnumber(int);
//	~student();
//};
//student::student()
//{
//	cout << "default constructor called" << endl;
//	name = " ";
//	rollnumber = 0;
//}
//student::student(string a, int b)
//{
//	cout << "parameterized constructor called" << endl;
//	name = a;
//	rollnumber = b;
//}
//student::~student()
//{
//	cout << "Destructor called for rollnumber" << rollnumber << endl;
//}
//void student::setRollnumber(int r)
//{
//	rollnumber = r;
//}
//int student::getRollnumber()
//
//{
//	return rollnumber;
//}
//
//int main()
//{
//	student A;
//	student* ptrB = new student("def", 867);
//	A.setRollnumber(122);
//	ptrB->setRollnumber(123);
//	cout << A.getRollnumber() << endl;
//	cout << ptrB->getRollnumber();
//	return 0;
//}