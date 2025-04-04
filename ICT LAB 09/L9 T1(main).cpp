#include <iostream>
#include "StudentManager.h"
#include "english.h"
#include "history.h"
#include "math.h"

int main() {
    StudentManager manager;

    // Import student data from file
    manager.take_students_from_file("Student.txt");

    // Generate report
    manager.return_report("result.txt");

    std::cout << "Student data imported and report generated successfully." << std::endl;

    return 0;
}
