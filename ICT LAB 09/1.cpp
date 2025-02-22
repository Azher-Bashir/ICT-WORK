#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    char name[50];
    char program[50];

public:
    void setDetails(int r, const char n[], const char p[]) {
        rollNo = r;
        strcpy(name, n);
        strcpy(program, p);
    }

    void display() {
        cout << "Student Details:" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Program: " << program << endl;
    }
};

int main() {
    Student student1;
    int rollNo;
    char name[50], program[50];

    cout << "Enter Roll No: ";
    cin >> rollNo;
    cin.ignore();
    cout << "Enter Name: ";
    cin.getline(name, 50);
    cout << "Enter Program: ";
    cin.getline(program, 50);

    student1.setDetails(rollNo, name, program);
    student1.display();

    return 0;
}
