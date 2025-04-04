#pragma once
#ifndef MATH_H
#define MATH.H

#include "student.h"
class math_marks : public student
{
private:
	double quiz[3], test[2], final;
public:
	math_marks(string, string, double, double, double, double, double, double);
	double Math_grade() const;
};
#endif
