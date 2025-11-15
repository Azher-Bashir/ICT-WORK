//#include "EmployeeDirectory.h"
//
//int main() {
//    BTree<Employee> tree;
//    string fname = "Employee.txt";
//    loadFile(fname, tree);
//
//    int choice = 0;
//    while (true) {
//        cout << "\n--- Employee Directory Menu ---\n";
//        cout << "1. Add Employee\n";
//        cout << "2. Delete Employee\n";
//        cout << "3. Search Employee\n";
//        cout << "4. Display Employees (Ascending)\n";
//        cout << "5. Display Employees (Descending)\n";
//        cout << "6. Exit\n";
//        cout << "Enter your choice (1-6): ";
//        cin >> choice;
//
//        if (cin.fail()) {
//            cin.clear();
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
//            cout << "Invalid input. Please enter a number between 1 and 6.\n";
//            continue;
//        }
//
//        if (choice == 1) {
//            int id;
//            string fn, ln, dept;
//            double sal;
//            cout << "Enter Employee ID: ";
//            cin >> id;
//            cout << "Enter First Name: ";
//            cin >> fn;
//            cout << "Enter Last Name: ";
//            cin >> ln;
//            cout << "Enter Department: ";
//            cin >> dept;
//            cout << "Enter Salary: ";
//            cin >> sal;
//
//            Employee* emp = new Employee(id, fn, ln, dept, sal);
//            if (tree.insert(emp)) {
//                appendFile(fname, emp);
//                cout << "Employee added successfully.\n";
//            }
//            else {
//                cout << "Employee ID already exists. Duplicate not added.\n";
//                delete emp;
//            }
//
//        }
//        else if (choice == 2) {
//            int id;
//            cout << "Enter Employee ID to delete: ";
//            cin >> id;
//            if (tree.deleteNode(id)) {
//                cout << "Employee deleted successfully.\n";
//            }
//            else {
//                cout << "Employee not found.\n";
//            }
//
//        }
//        else if (choice == 3) {
//            int id;
//            cout << "Enter Employee ID to search: ";
//            cin >> id;
//            Employee* emp = tree.search(id);
//            if (emp) {
//                cout << "Employee found:\n";
//                emp->printInfo();
//            }
//            else {
//                cout << "Employee not found.\n";
//            }
//
//        }
//        else if (choice == 4) {
//            cout << "\n--- Employees in Ascending Order ---\n";
//            tree.displayAscending();
//
//        }
//        else if (choice == 5) {
//            cout << "\n--- Employees in Descending Order ---\n";
//            tree.displayDescending();
//
//        }
//        else if (choice == 6) {
//            cout << "Exiting program. Goodbye!\n";
//            break;
//
//        }
//        else {
//            cout << "Invalid choice. Please select a number between 1 and 6.\n";
//        }
//    }
//
//    return 0;
//}
