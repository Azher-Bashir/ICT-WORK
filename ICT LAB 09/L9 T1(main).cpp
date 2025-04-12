#include <iostream>
#include "StudentManager.h"
#include "english.h"
#include "history.h"
#include "math.h"
using namespace std;

int main() {
    StudentManager manager;

    // Import student data from file
    manager.take_students_from_file("Student.txt");

    // Generate report
    manager.return_report("result.txt");

    cout << "Student data imported and report generated successfully." << endl;

    return 0;
}
