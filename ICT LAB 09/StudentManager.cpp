#include "StudentManager.h"
#include "english.h"
#include "history.h"
#include "math.h"
#include <fstream>

StudentManager::StudentManager() {
    students = nullptr;
    studentCount = 0;
}

StudentManager::~StudentManager() {
    for (int i = 0; i < studentCount; i++) {
        delete students[i];
    }
    delete[] students;
}

void StudentManager::take_students_from_file(const string& filename) {
    ifstream file(filename);
    string fName, lName, course;
    double g1, g2, g3, g4, g5, g6;

    int count = 0;
    string temp;
    while (getline(file, temp)) count++;
    file.clear();
    file.seekg(0);

    students = new student * [count];
    studentCount = count;
    int index = 0;

    while (file >> fName >> lName >> course) {
        g1 = g2 = g3 = g4 = g5 = g6 = 0;

        if (course == "English") {
            file >> g1 >> g2 >> g3 >> g4;
            students[index] = new english_marks(fName, lName, g1, g2, g3, g4);
        }
        else if (course == "History") {
            file >> g1 >> g2 >> g3;
            students[index] = new history_marks(fName, lName, g1, g2, g3);
        }
        else if (course == "Math") {
            file >> g1 >> g2 >> g3 >> g4 >> g5 >> g6;
            students[index] = new math_marks(fName, lName, g1, g2, g3, g4, g5, g6);
        }
        index++;
    }
}

void StudentManager::return_report(const string& filename) {
    ofstream outFile(filename);
    for (int i = 0; i < studentCount; i++) {
        outFile << students[i]->get_full_name() << " - " << students[i]->get_course()
            << " - Final Grade: ";
        if (students[i]->get_course() == "English") {
            outFile << static_cast<english_marks*>(students[i])->English_grade();
        }
        else if (students[i]->get_course() == "History") {
            outFile << static_cast<history_marks*>(students[i])->History_grade();
        }
        else if (students[i]->get_course() == "Math") {
            outFile << static_cast<math_marks*>(students[i])->Math_grade();
        }
        outFile << endl;
    }
    outFile.close();
}
