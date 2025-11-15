//#include <iostream>
//#include <fstream>
//#include <string>
//#include <stack>
//using namespace std;
//
//
//template <typename T>
//class Employee {
//private:
//    T id;
//    string firstName, lastName, department;
//    double salary;
//
//public:
//    Employee() {}
//    Employee(T i, string fn, string ln, string dept, double sal)
//        : id(i), firstName(fn), lastName(ln), department(dept), salary(sal) {
//    }
//
//
//    T getID() const { return id; }
//    string getFirstName() const { return firstName; }
//    string getLastName() const { return lastName; }
//    string getDepartment() const { return department; }
//    double getSalary() const { return salary; }
//
//
//    void setID(T i) { id = i; }
//    void setFirstName(string fn) { firstName = fn; }
//    void setLastName(string ln) { lastName = ln; }
//    void setDepartment(string dept) { department = dept; }
//    void setSalary(double sal) { salary = sal; }
//
//    void display() const {
//        cout << "ID: " << id << ", Name: " << firstName << " " << lastName
//            << ", Dept: " << department << ", Salary: " << salary << endl;
//    }
//};
//
//
//template <typename T>
//class BSTNode {
//private:
//    Employee<T> data;
//    BSTNode* left;
//    BSTNode* right;
//
//public:
//    BSTNode(Employee<T> emp) : data(emp), left(nullptr), right(nullptr) {}
//
//
//    Employee<T> getData() const { return data; }
//    BSTNode* getLeft() const { return left; }
//    BSTNode* getRight() const { return right; }
//
//
//    void setData(Employee<T> emp) { data = emp; }
//    void setLeft(BSTNode* node) { left = node; }
//    void setRight(BSTNode* node) { right = node; }
//};
//
//
//template <typename T>
//class EmployeeDirectory {
//private:
//    BSTNode<T>* root;
//
//public:
//    EmployeeDirectory() : root(nullptr) {}
//
//    void loadFromFile(string filename) {
//        ifstream file(filename);
//        T id;
//        string fn, ln, dept;
//        double sal;
//        while (file >> id >> fn >> ln >> dept >> sal) {
//            insert(Employee<T>(id, fn, ln, dept, sal));
//        }
//        file.close();
//    }
//
//    void insert(Employee<T> emp) {
//        BSTNode<T>* newNode = new BSTNode<T>(emp);
//        if (root == nullptr) {
//            root = newNode;
//            return;
//        }
//
//        BSTNode<T>* curr = root;
//        BSTNode<T>* parent = nullptr;
//
//        while (curr != nullptr) {
//            parent = curr;
//            if (emp.getID() < curr->getData().getID()) {
//                curr = curr->getLeft();
//            }
//            else {
//                curr = curr->getRight();
//            }
//        }
//
//        if (emp.getID() < parent->getData().getID()) {
//            parent->setLeft(newNode);
//        }
//        else {
//            parent->setRight(newNode);
//        }
//    }
//
//    void search(T id) {
//        BSTNode<T>* curr = root;
//        BSTNode<T>* parent = nullptr;
//
//        while (curr != nullptr) {
//            if (id == curr->getData().getID()) {
//                curr->getData().display();
//                return;
//            }
//
//            parent = curr;
//            if (id < curr->getData().getID()) {
//                curr = curr->getLeft();
//            }
//            else {
//                curr = curr->getRight();
//            }
//        }
//
//        cout << "Employee not found.\n";
//    }
//
//    void deleteEmployee(T id) {
//        BSTNode<T>* curr = root;
//        BSTNode<T>* parent = nullptr;
//
//        while (curr != nullptr && curr->getData().getID() != id) {
//            parent = curr;
//            if (id < curr->getData().getID()) {
//                curr = curr->getLeft();
//            }
//            else {
//                curr = curr->getRight();
//            }
//        }
//
//        if (curr == nullptr) {
//            cout << "Employee not found.\n";
//            return;
//        }
//
//        // Case 1: No child
//        if (curr->getLeft() == nullptr && curr->getRight() == nullptr) {
//            if (parent == nullptr) {
//                root = nullptr;
//            }
//            else {
//                if (parent->getLeft() == curr) {
//                    parent->setLeft(nullptr);
//                }
//                else {
//                    parent->setRight(nullptr);
//                }
//            }
//            delete curr;
//        }
//        // Case 2: One child
//        else if (curr->getLeft() == nullptr || curr->getRight() == nullptr) {
//            BSTNode<T>* child;
//            if (curr->getLeft() != nullptr) {
//                child = curr->getLeft();
//            }
//            else {
//                child = curr->getRight();
//            }
//
//            if (parent == nullptr) {
//                root = child;
//            }
//            else {
//                if (parent->getLeft() == curr) {
//                    parent->setLeft(child);
//                }
//                else {
//                    parent->setRight(child);
//                }
//            }
//            delete curr;
//        }
//        // Case 3: Two children
//        else {
//            BSTNode<T>* succParent = curr;
//            BSTNode<T>* succ = curr->getRight();
//            while (succ->getLeft() != nullptr) {
//                succParent = succ;
//                succ = succ->getLeft();
//            }
//            curr->setData(succ->getData());
//            if (succParent->getLeft() == succ) {
//                succParent->setLeft(succ->getRight());
//            }
//            else {
//                succParent->setRight(succ->getRight());
//            }
//            delete succ;
//        }
//    }
//
//    void displayAll(bool ascending = true) {
//        stack<BSTNode<T>*> s;
//        BSTNode<T>* curr = root;
//
//        if (ascending) {
//            while (curr != nullptr || !s.empty()) {
//                while (curr != nullptr) {
//                    s.push(curr);
//                    curr = curr->getLeft();
//                }
//                curr = s.top();
//                s.pop();
//                curr->getData().display();
//                curr = curr->getRight();
//            }
//        }
//        else {
//            while (curr != nullptr || !s.empty()) {
//                while (curr != nullptr) {
//                    s.push(curr);
//                    curr = curr->getRight();
//                }
//                curr = s.top();
//                s.pop();
//                curr->getData().display();
//                curr = curr->getLeft();
//            }
//        }
//    }
//};
//
//
//int main() {
//    EmployeeDirectory<int> directory;
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
//        cin >> choice;
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
//            Employee<int> emp(id, fn, ln, dept, sal);
//            directory.insert(emp);
//            cout << "Employee added successfully.\n";
//        }
//        else if (choice == 2) {
//            int id;
//            cout << "Enter Employee ID to search: ";
//            cin >> id;
//            directory.search(id);
//        }
//        else if (choice == 3) {
//            int id;
//            cout << "Enter Employee ID to delete: ";
//            cin >> id;
//            directory.deleteEmployee(id);
//        }
//        else if (choice == 4) {
//            cout << "\nEmployees in Ascending Order:\n";
//            directory.displayAll(true);
//        }
//        else if (choice == 5) {
//            cout << "\nEmployees in Descending Order:\n";
//            directory.displayAll(false);
//        }
//        else if (choice == 6) {
//            cout << "Exiting program.\n";
//        }
//        else {
//            cout << "Invalid choice. Try again.\n";
//        }
//    } while (choice != 6);
//
//    return 0;
//}
