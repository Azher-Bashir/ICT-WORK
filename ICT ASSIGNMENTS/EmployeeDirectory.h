#ifndef EMPLOYEE_DIRECTORY_H
#define EMPLOYEE_DIRECTORY_H

#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

// ------------------- Employee Class -------------------
class Employee {
private:
    int Id;
    string First_name;
    string Last_name;
    string Department;
    double Salary;

public:
    Employee();
    Employee(int, string, string, string, double);
    int getId() const;
    string getFirstName() const;
    string getLastName() const;
    string getDepartment() const;
    double getSalary() const;
    void printInfo() const;
};

// ------------------- BST Node -------------------
template <typename T>
class BNode {
public:
    T* data;
    BNode<T>* left;
    BNode<T>* right;
    BNode(T* val);
};

// ------------------- BST Tree -------------------
template <typename T>
class BTree {
public:
    BNode<T>* root;
    BTree();
    bool insert(T* val);
    T* search(int id);
    void displayAscending();
    void displayDescending();
    bool deleteNode(int id);
};

// ------------------- File Handling -------------------
void loadFile(const string& fname, BTree<Employee>& tree);
void appendFile(const string& fname, Employee* emp);

#endif
