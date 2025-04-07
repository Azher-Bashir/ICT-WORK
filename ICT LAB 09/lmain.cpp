#include<iostream>
#include<string>
#include<fstream>
#include"Lheader.h"
using namespace std;

int main() {
    ifstream infile("students.txt");
    ofstream outfile("results.txt");

    if (!infile.is_open()) {
        cerr << "Error opening input file" << endl;
        return 1;
    }

    if (!outfile.is_open()) {
        cerr << "Error opening output file" << endl;
        return 1;
    }

    Student student;
    while (student.read_student(infile)) {
        float grade = 0;

        if (student.course == "English") {
            grade = student.English_grade(student.attendance, student.project, student.midterm, student.final_exam);
        }
        else if (student.course == "History") {
            grade = student.History_grade(student.term_paper, student.midterm, student.final_exam);
        }
        else if (student.course == "Math") {
            grade = student.Math_grade(student.quiz_3, student.test_1, student.test_2, student.final_exam);
        }

        student.write_student(outfile, grade);
    }

    infile.close();
    outfile.close();

    cout << "Report generated successfully: results.txt" << endl;

    return 0;
}
