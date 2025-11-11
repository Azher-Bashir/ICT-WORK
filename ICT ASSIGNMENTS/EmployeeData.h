//#ifndef EMPLOYEEDATA_H
//#define EMPLOYEEDATA_H
//
//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//// Function declarations
//void clearInputLine();
//void ensureSampleFile(const string& filename);
//void loadFromFile(const string& filename, class EmployeeBST& bst);
//
//// Employee as a simple class (fields public to keep code easy to read).
//class Employee
//{
//public:
//    int id;
//    string first;
//    string last;
//    string dept;
//    int salary;
//
//    Employee();
//    Employee(int i, const string& f, const string& l, const string& d, int s);
//
//    // Return a printable single-line representation (same format as file).
//    string toString() const;
//};
//
//// Node in the binary search tree.
//class Node
//{
//public:
//    Employee data;
//    Node* left;
//    Node* right;
//
//    Node(const Employee& e);
//};
//
//// Binary search tree keyed by Employee.id
//class EmployeeBST
//{
//public:
//    EmployeeBST();
//    ~EmployeeBST();
//
//    // Public API functions
//    bool insert(const Employee& e);
//    Employee* search(int id);
//    bool remove(int id);
//    void printAscending();
//    void printDescending();
//    void saveToFile(const string& filename);
//
//private:
//    Node* root;
//
//    // Recursive helper function declarations
//    void destroy(Node* n);
//    void inOrder(Node* n);
//    void reverseInOrder(Node* n);
//    void inOrderWrite(Node* n, ofstream& ofs);
//    Node* removeNode(Node* n, int id, bool& removed);
//};
//
//#endif // EMPLOYEEDATA_H