//#include<iostream>
//#include<string>
//#include"Lheader.h"
//using namespace std;
//
//Student::Student() {
//    attendance = 0;
//    project = 0;
//    midterm = 0;
//    term_paper = 0;
//    final_exam = 0;
//    quiz_3 = 0;
//    test_1 = 0;
//    test_2 = 0;
//}
//
//float Student::English_grade(float attendance, float project, float midterm, float final_exam) {
//    return (attendance * 0.1f + project * 0.3f + midterm * 0.3f + final_exam * 0.3f);
//}
//
//float Student::History_grade(float term_paper, float midterm, float final_exam) {
//    return (term_paper * 0.25f + midterm * 0.35f + final_exam * 0.4f);
//}
//
//float Student::Math_grade(float quiz_3, float test_1, float test_2, float final_exam) {
//    return (quiz_3 * 0.1f + test_1 * 0.25f + test_2 * 0.25f + final_exam * 0.4f);
//}
//
//string Student::Grading_scheme(float grade) {
//    if (grade < 50) return "F";
//    else if (grade < 70) return "B";
//    else if (grade < 90) return "A";
//    else return "A+";
//}
//
//bool Student::read_student(ifstream& in) {
//    if (!(in >> first_name)) return false;
//    string next;
//    if (!(in >> next)) return false;
//
//    if (next == "English" || next == "History" || next == "Math") {
//        last_name = "";
//        course = next;
//    }
//    else {
//        last_name = next;
//        if (!(in >> course)) return false;
//    }
//
//    if (course == "English") {
//        if (!(in >> attendance >> project >> midterm >> final_exam)) return false;
//    }
//    else if (course == "History") {
//        if (!(in >> term_paper >> midterm >> final_exam)) return false;
//    }
//    else if (course == "Math") {
//        if (!(in >> quiz_3 >> test_1 >> test_2 >> final_exam)) return false;
//    }
//    return true;
//}
//
//void Student::write_student(ofstream& out, float grade) {
//    out << first_name << " " << last_name << " - " << course
//        << " - Final Grade: " << grade
//        << " - " << Grading_scheme(grade) << "\n";
//}
