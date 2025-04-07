//////#include "StudentManager.h"
//////#include "english.h"
//////#include "history.h"
//////#include "math.h"
//////#include <fstream>
//////#include <iostream>
//////using namespace std;
//////
//////StudentManager::StudentManager() {
//////    students = nullptr;
//////    studentCount = 0;
//////}
//////
//////StudentManager::~StudentManager() {
//////    for (int i = 0; i < studentCount; i++) {
//////        delete students[i];
//////    }
//////    delete[] students;
//////}
//////
//////void StudentManager::take_students_from_file(const string& filename) {
//////    ifstream file(filename);
//////    if (!file.is_open()) {
//////        cout << "Error opening file: " << filename << endl;
//////        return;
//////    }
//////
//////    string fName, lName, course;
//////    double g1, g2, g3, g4, g5, g6;
//////
//////    int count = 0;
//////    string temp;
//////    while (getline(file, temp))
//////        count++;
//////    file.clear();
//////    file.seekg(0);
//////
//////    students = new student * [count];
//////    studentCount = count;
//////    int index = 0;
//////
//////    while (file >> fName) {
//////        lName = "";
//////        course = "";
//////        file >> lName;
//////
//////        if (lName == "English" || lName == "History" || lName == "Math") {
//////            course = lName;
//////            lName = "";
//////        }
//////        else {
//////            file >> course;
//////        }
//////
//////        g1 = g2 = g3 = g4 = g5 = g6 = 0;
//////
//////        if (course == "English") {
//////            file >> g1 >> g2 >> g3 >> g4;
//////            students[index] = new english_marks(fName, lName, g1, g2, g3, g4);
//////        }
//////        else if (course == "History") {
//////            file >> g1 >> g2 >> g3;
//////            students[index] = new history_marks(fName, lName, g1, g2, g3);
//////        }
//////        else if (course == "Math") {
//////            file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6;
//////            students[index] = new math_marks(fName, lName, g1, g2, g3, g4, g5, g6);
//////        }
//////        index++;
//////    }
//////    file.close();
//////}
//////
//////void StudentManager::return_report(const string& filename) {
//////    ofstream outFile(filename);
//////    if (!outFile.is_open()) {
//////        cerr << "Error opening file: " << filename << endl;
//////        return;
//////    }
//////
//////    for (int i = 0; i < studentCount; i++) {
//////        outFile << students[i]->get_full_name() << " - " << students[i]->get_course() << " - Final Grade: ";
//////        outFile << students[i]->get_grade();
//////        outFile << endl;
//////    }
//////    outFile.close();
//////    cout << "Report generated successfully: " << filename << endl;
//////}
////#include "StudentManager.h"
////#include "english.h"
////#include "history.h"
////#include "math.h"
////#include <fstream>
////#include <iostream>
////#include <iomanip> // Include for formatting
////using namespace std;
////
////StudentManager::StudentManager() {
////    students = nullptr;
////    studentCount = 0;
////}
////
////StudentManager::~StudentManager() {
////    for (int i = 0; i < studentCount; i++) {
////        delete students[i];
////    }
////    delete[] students;
////}
////
////void StudentManager::take_students_from_file(const string& filename) {
////    ifstream file(filename);
////    if (!file.is_open()) {
////        cout << "Error opening file: " << filename << endl;
////        return;
////    }
////
////    string fName, lName, course;
////    double g1, g2, g3, g4, g5, g6;
////
////    int count = 0;
////    string temp;
////    while (getline(file, temp))
////        count++;
////    file.clear();
////    file.seekg(0);
////
////    students = new student * [count];
////    studentCount = count;
////    int index = 0;
////
////    while (file >> fName) {
////        lName = "";
////        course = "";
////        file >> lName;
////
////        if (lName == "English" || lName == "History" || lName == "Math") {
////            course = lName;
////            lName = "";
////        }
////        else {
////            file >> course;
////        }
////
////        g1 = g2 = g3 = g4 = g5 = g6 = 0;
////
////        if (course == "English") {
////            file >> g1 >> g2 >> g3 >> g4;
////            students[index] = new english_marks(fName, lName, g1, g2, g3, g4);
////        }
////        else if (course == "History") {
////            file >> g1 >> g2 >> g3;
////            students[index] = new history_marks(fName, lName, g1, g2, g3);
////        }
////        else if (course == "Math") {
////            file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6;
////            students[index] = new math_marks(fName, lName, g1, g2, g3, g4, g5, g6);
////        }
////        index++;
////    }
////    file.close();
////}
////
////void StudentManager::return_report(const string& filename) {
////    ofstream outFile(filename);
////    if (!outFile.is_open()) {
////        cerr << "Error opening file: " << filename << endl;
////        return;
////    }
////
////    // Print table header
////    outFile << left << setw(20) << "Name" << setw(10) << "Course" << setw(15) << "Final Grade" << endl;
////    outFile << string(45, '-') << endl;
////
////    for (int i = 0; i < studentCount; i++) {
////        outFile << left << setw(20) << students[i]->get_full_name()
////            << setw(10) << students[i]->get_course()
////            << setw(15) << students[i]->get_grade()
////            << endl;
////    }
////    outFile.close();
////    cout << "Report generated successfully: " << filename << endl;
////}
//
//
//
//#include "StudentManager.h"
//#include "english.h"
//#include "history.h"
//#include "math.h"
//#include <fstream>
//#include <iostream>
//#include <iomanip> // Include for formatting
//using namespace std;
//
//StudentManager::StudentManager() {
//    students = nullptr;
//    studentCount = 0;
//}
//
//StudentManager::~StudentManager() {
//    for (int i = 0; i < studentCount; i++) {
//        delete students[i];
//    }
//    delete[] students;
//}
//
//void StudentManager::take_students_from_file(const string& filename) {
//    ifstream file(filename);
//    if (!file.is_open()) {
//        cout << "Error opening file: " << filename << endl;
//        return;
//    }
//
//    string fName, lName, course;
//    double g1, g2, g3, g4, g5, g6;
//
//    int count = 0;
//    string temp;
//    while (getline(file, temp))
//        count++;
//    file.clear();
//    file.seekg(0);
//
//    students = new student * [count];
//    studentCount = count;
//    int index = 0;
//
//    while (file >> fName) {
//        lName = "";
//        course = "";
//        file >> lName;
//
//        if (lName == "English" || lName == "History" || lName == "Math") {
//            course = lName;
//            lName = "";
//        }
//        else {
//            file >> course;
//        }
//
//        g1 = g2 = g3 = g4 = g5 = g6 = 0;
//
//        if (course == "English") {
//            file >> g1 >> g2 >> g3 >> g4;
//            students[index] = new english_marks(fName, lName, g1, g2, g3, g4);
//        }
//        else if (course == "History") {
//            file >> g1 >> g2 >> g3;
//            students[index] = new history_marks(fName, lName, g1, g2, g3);
//        }
//        else if (course == "Math") {
//            file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6;
//            students[index] = new math_marks(fName, lName, g1, g2, g3, g4, g5, g6);
//        }
//        index++;
//    }
//    file.close();
//}
//
//void StudentManager::return_report(const string& filename) {
//    ofstream outFile(filename);
//    if (!outFile.is_open()) {
//        cerr << "Error opening file: " << filename << endl;
//        return;
//    }
//
//    // Print table header
//    outFile << "+----------------------+----------+---------------+" << endl;
//    outFile << "| Name                 | Course   | Final Grade   |" << endl;
//    outFile << "+----------------------+----------+---------------+" << endl;
//
//    for (int i = 0; i < studentCount; i++) {
//        outFile << "| " << left << setw(20) << students[i]->get_full_name()
//            << " | " << setw(8) << students[i]->get_course()
//            << " | " << setw(13) << students[i]->get_grade()
//            << " |" << endl;
//    }
//    outFile << "+----------------------+----------+---------------+" << endl;
//
//    outFile.close();
//    cout << "Report generated successfully: " << filename << endl;
//}
//
//
