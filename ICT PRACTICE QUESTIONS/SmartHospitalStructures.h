//#ifndef SMARTHOSPITALSTRUCTURES_H
//#define SMARTHOSPITALSTRUCTURES_H
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//// --------------------- Patient Class ------------------------
//class Patient
//{
//private:
//    int id;
//    string name;
//    int age;
//    int severity;
//
//public:
//    Patient()
//    {
//        id = 0;
//        name = "";
//        age = 0;
//        severity = 0;
//    }
//
//    Patient(int i, string n, int a, int s)
//    {
//        id = i;
//        name = n;
//        age = a;
//        severity = s;
//    }
//
//    // Getters
//    int getId() const { return id; }
//    string getName() const { return name; }
//    int getAge() const { return age; }
//    int getSeverity() const { return severity; }
//
//    // Setters
//    void setId(int i) { id = i; }
//    void setName(string n) { name = n; }
//    void setAge(int a) { age = a; }
//    void setSeverity(int s) { severity = s; }
//
//    void print() const
//    {
//        cout << "[ID: " << id << ", Name: " << name
//            << ", Age: " << age << ", Severity: " << severity << "]\n";
//    }
//};
//
//// --------------------- BST Node Class ------------------
//class BSTNode
//{
//public:
//    Patient data;
//    BSTNode* left;
//    BSTNode* right;
//    BSTNode(Patient p) : data(p), left(nullptr), right(nullptr) {}
//};
//
//
//// --------------------- BST Class ------------------
//class PatientBST
//{
//private:
//    BSTNode* root;
//
//    // Helper functions - TO BE IMPLEMENTED
//    BSTNode* insertHelper(BSTNode* node, Patient p);
//    void inorderHelper(BSTNode* node);
//    BSTNode* searchHelper(BSTNode* node, int id);
//
//public:
//    PatientBST() { root = nullptr; }
//
//    // TODO: Implement these functions
//    void insert(Patient p);
//    void inorderTraversal();
//    Patient* search(int id);
//};
//
//
//
//// --------------------- Heap Class -------------
//class EmergencyHeap
//{
//private:
//    Patient arr[50];
//    int size;
//
//    // TODO: Implement heapify functions
//    void heapifyDown(int index);
//
//public:
//    EmergencyHeap() { size = 0; }
//
//
//
//
//    // TODO: Implement these functions
//    void addEmergency(Patient p);
//    Patient deleteMostCritical();
//    void display();
//
//    bool isEmpty() const { return size == 0; }
//    int getSize() const { return size; }
//};
//
//#endif
