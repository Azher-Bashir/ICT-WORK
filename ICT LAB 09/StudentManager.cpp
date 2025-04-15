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
//    // Count the number of lines
//    int count = 0;
//    string temp;
//    while (getline(file, temp))
//        count++;
//    file.clear();
//    file.seekg(0);
//
//    // Allocate memory for students
//    students = new student * [count];
//    studentCount = count;
//    int index = 0;
//
//    // Only add condition for missing last name
//    while (file >> fName) {
//        if (!(file >> lName)) {
//            // If we can't read the second token, stop
//            break;
//        }
//        // Check if the second token is actually the course
//        if (lName == "English" || lName == "History" || lName == "Math") {
//            course = lName;
//            lName = "";
//        }
//        else {
//            // Otherwise, read the next token as course
//            if (!(file >> course)) {
//                cout << "Error reading course for student: " << fName << endl;
//                continue;
//            }
//        }
//
//        g1 = g2 = g3 = g4 = g5 = g6 = 0;
//
//        if (course == "English") {
//            if (!(file >> g1 >> g2 >> g3 >> g4)) {
//                cout << "Error reading grades for English: " << fName << endl;
//                continue;
//            }
//            students[index] = new english_marks(fName, lName, g1, g2, g3, g4);
//        }
//        else if (course == "History") {
//            if (!(file >> g1 >> g2 >> g3)) {
//                cout << "Error reading grades for History: " << fName << endl;
//                continue;
//            }
//            students[index] = new history_marks(fName, lName, g1, g2, g3);
//        }
//        else if (course == "Math") {
//            if (!(file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6)) {
//                cout << "Error reading grades for Math: " << fName << endl;
//                continue;
//            }
//            students[index] = new math_marks(fName, lName, g1, g2, g3, g4, g5, g6);
//        }
//        else {
//            cout << "Unrecognized course: " << course
//                << " for student: " << fName << " " << lName << endl;
//            continue;
//        }
//        index++;
//    }
//
//    // Update student count
//    studentCount = index;
//    file.close();
//}
//
//
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
