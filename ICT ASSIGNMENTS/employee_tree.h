//#ifndef EMPLOYEE_TREE_H 
//#define EMPLOYEE_TREE_H 
//
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <stack>
//
//using namespace std;
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
//
//    Employee(T i, string fn, string ln, string dept, double sal)
//        : id(i), firstName(fn), lastName(ln), department(dept), salary(sal) {
//    }
//
//    T getID() const { return id; }
//    string getFirstName() const { return firstName; }
//    string getLastName() const { return lastName; }
//    string getDepartment() const { return department; }
//    double getSalary() const { return salary; }
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
//    Employee<T> getData() const { return data; }
//    BSTNode* getLeft() const { return left; }
//    BSTNode* getRight() const { return right; }
//
//    void setData(Employee<T> emp) { data = emp; }
//    void setLeft(BSTNode* node) { left = node; }
//    void setRight(BSTNode* node) { right = node; }
//};
//
//template <typename T>
//class EmployeeDirectory {
//private:
//    BSTNode<T>* root;
//
//public:
//    EmployeeDirectory() : root(nullptr) {}
//
//    ~EmployeeDirectory() {
//        stack<BSTNode<T>*> s;
//        BSTNode<T>* lastVisited = nullptr;
//        BSTNode<T>* curr = root;
//
//        while (curr || !s.empty()) {
//            if (curr) {
//                s.push(curr);
//                curr = curr->getLeft();
//            }
//            else {
//                BSTNode<T>* peekNode = s.top();
//                if (peekNode->getRight() && lastVisited != peekNode->getRight()) {
//                    curr = peekNode->getRight();
//                }
//                else {
//                    delete peekNode;
//                    s.pop();
//                    lastVisited = peekNode;
//                }
//            }
//        }
//    }
//
//
//    void loadFromFile(string filename) {
//        ifstream file(filename);
//        if (!file.is_open()) {
//            cout << "Error: Could not open file " << filename << ". Skipping load.\n";
//            return;
//        }
//
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
//
//        while (curr != nullptr) {
//            if (id == curr->getData().getID()) {
//                cout << "Employee Found: ";
//                curr->getData().display();
//                return;
//            }
//
//            if (id < curr->getData().getID()) {
//                curr = curr->getLeft();
//            }
//            else {
//                curr = curr->getRight();
//            }
//        }
//
//        cout << "Employee with ID " << id << " not found.\n";
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
//            cout << "Employee with ID " << id << " not found.\n";
//            return;
//        }
//
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
//            cout << "Employee with ID " << id << " deleted successfully (Case 1: Leaf).\n";
//        }
//        else if (curr->getLeft() == nullptr || curr->getRight() == nullptr) {
//            BSTNode<T>* child = (curr->getLeft() != nullptr) ? curr->getLeft() : curr->getRight();
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
//            cout << "Employee with ID " << id << " deleted successfully (Case 2: One Child).\n";
//        }
//        else {
//            BSTNode<T>* succParent = curr;
//            BSTNode<T>* succ = curr->getRight();
//            while (succ->getLeft() != nullptr) {
//                succParent = succ;
//                succ = succ->getLeft();
//            }
//
//            curr->setData(succ->getData());
//
//            if (succParent->getLeft() == succ) {
//                succParent->setLeft(succ->getRight());
//            }
//            else {
//                succParent->setRight(succ->getRight());
//            }
//            delete succ;
//            cout << "Employee with ID " << id << " deleted successfully (Case 3: Two Children).\n";
//        }
//    }
//
//    void displayAll(bool ascending = true) {
//        stack<BSTNode<T>*> s;
//        BSTNode<T>* curr = root;
//
//        if (root == nullptr) {
//            cout << "The directory is empty.\n";
//            return;
//        }
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
//#endif // EMPLOYEE_TREE_H