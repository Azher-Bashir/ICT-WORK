#include"student.h"
student::student()
{
	f_name = "";
	l_name = "";
	course = "";
}
student::student(string f_name, string l_name, string course)
{
	this->f_name = f_name;
	this->l_name = l_name;
	this->course = course;
}
void student::set_name(string f_name, string l_name)
{
	this->f_name = f_name;
	this->l_name = l_name;
}
void student::set_course(string course)
{
	this->course = course;
}
string student::get_Full_name()
{
	return f_name + " " + l_name;
}

void student::print_info()
{
	cout << "Name: " << f_name << " " << l_name << endl;
	cout << "Course: " << course << endl;
}