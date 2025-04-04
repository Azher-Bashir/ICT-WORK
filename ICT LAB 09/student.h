#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include<string>
using namespace std;

class student
{
private:
	string f_name, l_name, course;
public:
	student();
	student(string, string, string);
	void set_name(string, string);
	void set_course(string);
	string get_Full_name();
	void print_info();
};
#endif
