//#ifndef STUDENT_H
//#define STUDENT_H
//#include <string>
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//class Student {
//protected:
//    string firstName;
//    string lastName;
//    string courseType;
//    double finalGrade;
//public:
//    Student(string fName, string lName, string course);
//    virtual void calculateGrade() = 0;
//    virtual void printReport(ostream& out) const = 0;
//    virtual ~Student() {}
//};
//
//class EnglishStudent : public Student {
//    double attendance, project, midterm, finalExam;
//public:
//    EnglishStudent(string fName, string lName, double a, double p, double m, double f);
//    void calculateGrade() override;
//    void printReport(ostream& out) const override;
//};
//
//class HistoryStudent : public Student {
//    double termPaper, midterm, finalExam;
//public:
//    HistoryStudent(string fName, string lName, double tp, double m, double f);
//    void calculateGrade() override;
//    void printReport(ostream& out) const override;
//};
//
//class MathStudent : public Student {
//    double quiz1, quiz2, quiz3, test1, test2, finalExam;
//public:
//    MathStudent(string fName, string lName, double q1, double q2, double q3, double t1, double t2, double f);
//    void calculateGrade() override;
//    void printReport(ostream& out) const override;
//};
//
//#endif
