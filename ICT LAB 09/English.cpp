#include <iostream>
#include "student.h"
#include "english.h"

english_marks::english_marks(string firstName, string lastName, double att, double proj, double mid, double finalEx):student(firstName, lastName, "English"), attendance(att), project(proj), midterm(mid), final_exam(finalEx) 
{

}

double english_marks::English_grade() const {
    return (attendance * 0.10) + (project * 0.30) + (midterm * 0.30) + (final_exam * 0.30);
}
