//#include "Manager.h"
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//Manager::Manager() : studentCount(0) {}
//
//void Manager::loadFromFile(const string& filename) {
//    ifstream inFile(filename);
//    if (!inFile) {
//        cerr << "Unable to open file: " << filename << endl;
//        return;
//    }
//
//    string line;
//    while (getline(inFile, line) && studentCount < MAX_STUDENTS) {
//        stringstream ss(line);
//        string course, fName, lName;
//        ss >> course >> fName >> lName;
//
//        if (course == "English") {
//            double a, p, m, f;
//            if (ss >> a >> p >> m >> f) {
//                students[studentCount] = new EnglishStudent(fName, lName, a, p, m, f);
//            }
//            else {
//                cerr << "Invalid data for English student: " << line << endl;
//                continue;
//            }
//        }
//        else if (course == "History") {
//            double tp, m, f;
//            if (ss >> tp >> m >> f) {
//                students[studentCount] = new HistoryStudent(fName, lName, tp, m, f);
//            }
//            else {
//                cerr << "Invalid data for History student: " << line << endl;
//                continue;
//            }
//        }
//        else if (course == "Math") {
//            double q1, q2, q3, t1, t2, f;
//            if (ss >> q1 >> q2 >> q3 >> t1 >> t2 >> f) {
//                students[studentCount] = new MathStudent(fName, lName, q1, q2, q3, t1, t2, f);
//            }
//            else {
//                cerr << "Invalid data for Math student: " << line << endl;
//                continue;
//            }
//        }
//        else {
//            cerr << "Unknown course type: " << course << endl;
//            continue;
//        }
//
//        students[studentCount]->calculateGrade();
//        studentCount++;
//    }
//
//    inFile.close();
//}
//
//void Manager::generateReport(const string& outputFile) {
//    ofstream outFile(outputFile);
//    if (!outFile) {
//        cerr << "Unable to open file: " << outputFile << endl;
//        return;
//    }
//
//    if (studentCount == 0) {
//        outFile << "No students to report." << endl;
//        return;
//    }
//
//    outFile << left << setw(15) << "First Name" << setw(15) << "Last Name"
//        << setw(10) << "Course" << setw(10) << "Grade" << endl;
//    outFile << string(50, '-') << endl;
//    for (int i = 0; i < studentCount; ++i) {
//        students[i]->printReport(outFile);
//    }
//
//    outFile.close();
//}
//
//Manager::~Manager() {
//    for (int i = 0; i < studentCount; ++i) {
//        delete students[i];
//    }
//}
