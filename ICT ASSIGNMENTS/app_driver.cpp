//#include "employee_tree.h"
//int main() {
//    EmployeeDirectory<int> directory;
//    cout << "Attempting to load data from data1.txt...\n";
//    directory.loadFromFile("data1.txt");
//
//    int choice;
//    do {
//        cout << "\n--- Employee Directory Menu ---\n";
//        cout << "1. Add New Employee\n";
//        cout << "2. Search Employee by ID\n";
//        cout << "3. Delete Employee by ID\n";
//        cout << "4. Display All Employees (Ascending)\n";
//        cout << "5. Display All Employees (Descending)\n";
//        cout << "6. Exit\n";
//        cout << "Enter your choice: ";
//
//        // Input validation for choice
//        if (!(cin >> choice)) {
//            cout << "Invalid input. Exiting.\n";
//            break;
//        }
//
//        if (choice == 1) {
//            int id;
//            string fn, ln, dept;
//            double sal;
//            cout << "Enter Employee ID: ";
//            if (!(cin >> id)) { cin.clear(); cin.ignore(10000, '\n'); cout << "Invalid ID input.\n"; continue; }
//            cout << "Enter First Name: ";
//            if (!(cin >> fn)) { cin.clear(); cin.ignore(10000, '\n'); continue; }
//            cout << "Enter Last Name: ";
//            if (!(cin >> ln)) { cin.clear(); cin.ignore(10000, '\n'); continue; }
//            cout << "Enter Department: ";
//            if (!(cin >> dept)) { cin.clear(); cin.ignore(10000, '\n'); continue; }
//            cout << "Enter Salary: ";
//            if (!(cin >> sal)) { cin.clear(); cin.ignore(10000, '\n'); cout << "Invalid Salary input.\n"; continue; }
//
//            Employee<int> emp(id, fn, ln, dept, sal);
//            directory.insert(emp);
//            cout << "Employee added successfully.\n";
//        }
//        else if (choice == 2) {
//            int id;
//            cout << "Enter Employee ID to search: ";
//            if (!(cin >> id)) { cin.clear(); cin.ignore(10000, '\n'); cout << "Invalid ID input.\n"; continue; }
//            directory.search(id);
//        }
//        else if (choice == 3) {
//            int id;
//            cout << "Enter Employee ID to delete: ";
//            if (!(cin >> id)) { cin.clear(); cin.ignore(10000, '\n'); cout << "Invalid ID input.\n"; continue; }
//            directory.deleteEmployee(id);
//        }
//        else if (choice == 4) {
//            cout << "\nEmployees in Ascending Order (sorted by ID):\n";
//            directory.displayAll(true);
//        }
//        else if (choice == 5) {
//            cout << "\nEmployees in Descending Order (sorted by ID):\n";
//            directory.displayAll(false);
//        }
//        else if (choice == 6) {
//            cout << "Exiting program. Goodbye!\n";
//        }
//        else {
//            cout << "Invalid choice. Please enter a number between 1 and 6.\n";
//        }
//    } while (choice != 6);
//
//    return 0;
//}