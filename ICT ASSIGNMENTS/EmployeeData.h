//#ifndef EMPLOYEEDATA_H
//#define EMPLOYEEDATA_H
//
//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//void loadFromFile(const string& filename, class EmployeeBST& bst);
//
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
//    string toString() const;
//};
//class Node
//{
//public:
//    Employee data;
//    Node* left;
//    Node* right;
//
//    Node(const Employee& e);
//};
//class EmployeeBST
//{
//public:
//    EmployeeBST();
//    ~EmployeeBST();
//    bool insert(const Employee& e);
//    Employee* search(int id);
//    bool remove(int id);
//    void printAscending();
//    void printDescending();
//    void saveToFile(const string& filename);
//
//private:
//    Node* root;
//    void destroy(Node* n);
//    void inOrder(Node* n);
//    void reverseInOrder(Node* n);
//    void inOrderWrite(Node* n, ofstream& ofs);
//    Node* removeNode(Node* n, int id, bool& removed);
//};
//
//#endif