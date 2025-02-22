#include <iostream>
using namespace std;

class Student {
private:
    char name[50];
    int rollNo;
    int marks[5];

public:
    // Default Constructor
    Student() {
        rollNo = 0;
        name[0] = '\0';
        for (int i = 0; i < 5; i++) {
            marks[i] = 0;
        }
    }

    // Parameterized Constructor
    Student(const char n[], int r, int m[]) {
        strcpy(name, n);
        rollNo = r;
        for (int i = 0; i < 5; i++) {
            marks[i] = m[i];
        }
    }

    void setDetails(const char n[], int r, int m[]) {
        strcpy(name, n);
        rollNo = r;
        for (int i = 0; i < 5; i++) {
            marks[i] = m[i];
        }
    }

    int getTotalMarks() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total;
    }

    double getAverageMarks() {
        return getTotalMarks() / 5.0;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Total Marks: " << getTotalMarks() << endl;
        cout << "Average Marks: " << getAverageMarks() << endl;
    }
};

int main() {
    Student student1;
    char name[50];
    int rollNo, marks[5];

    cout << "Enter Student Name: ";
    cin.getline(name, 50);
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    cout << "Enter Marks for 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }
    cin.ignore();

    student1.setDetails(name, rollNo, marks);
    student1.displayDetails();

    return 0;
}
