#pragma once
#ifndef ENGLISH_H
#define ENGLISH_H
#include "student.h"
class english_marks:public student
{
private:
	double attendence, projecct, midterm, final_exam;
public:
	english_marks(string, string, string, double, double, double, double);
	double English_grade() const;
};
#endif