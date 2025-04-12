//#include "Student1.h"
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//Student::Student(string fName, string lName, string course)
//    : firstName(fName), lastName(lName), courseType(course), finalGrade(0.0) {
//}
//
//EnglishStudent::EnglishStudent(string fName, string lName, double a, double p, double m, double f)
//    : Student(fName, lName, "English"), attendance(a), project(p), midterm(m), finalExam(f) {
//}
//
//void EnglishStudent::calculateGrade() {
//    finalGrade = attendance * 0.1 + project * 0.3 + midterm * 0.3 + finalExam * 0.3;
//}
//
//void EnglishStudent::printReport(ostream& out) const {
//    out << left << setw(15) << firstName << setw(15) << lastName << setw(10) << courseType
//        << setw(10) << fixed << setprecision(2) << finalGrade << endl;
//}
//
//HistoryStudent::HistoryStudent(string fName, string lName, double tp, double m, double f)
//    : Student(fName, lName, "History"), termPaper(tp), midterm(m), finalExam(f) {
//}
//
//void HistoryStudent::calculateGrade() {
//    finalGrade = termPaper * 0.3 + midterm * 0.3 + finalExam * 0.4;
//}
//
//void HistoryStudent::printReport(ostream& out) const {
//    out << left << setw(15) << firstName << setw(15) << lastName << setw(10) << courseType
//        << setw(10) << fixed << setprecision(2) << finalGrade << endl;
//}
//
//MathStudent::MathStudent(string fName, string lName, double q1, double q2, double q3, double t1, double t2, double f)
//    : Student(fName, lName, "Math"), quiz1(q1), quiz2(q2), quiz3(q3), test1(t1), test2(t2), finalExam(f) {
//}
//
//void MathStudent::calculateGrade() {
//    double quizAvg = (quiz1 + quiz2 + quiz3) / 3.0;
//    finalGrade = quizAvg * 0.15 + test1 * 0.25 + test2 * 0.25 + finalExam * 0.35;
//}
//
//void MathStudent::printReport(ostream& out) const {
//    out << left << setw(15) << firstName << setw(15) << lastName << setw(10) << courseType
//        << setw(10) << fixed << setprecision(2) << finalGrade << endl;
//}
