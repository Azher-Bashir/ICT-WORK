//QUESTION NUMBER 2
#include <iostream>

using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

struct employe
{
    string name;
    int employe_id;
    string department;
    Date date_of_birth;
};

void input(employe* ptr, int size)
{
    cout << "Enter details: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter name: ";
        cin >> ptr[i].name;
        cout << "Enter employe_id: ";
        cin >> ptr[i].employe_id;
        cout << "Enter department: ";
        cin >> ptr[i].department;
        cout << "Enter date of birth (day month year): ";
        cin >> ptr[i].date_of_birth.day >> ptr[i].date_of_birth.month >> ptr[i].date_of_birth.year;
    }
}

void details(employe* ptr, int size)
{
    cout << endl << "The details that you entered are: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Name of the employe: " << ptr[i].name << endl;
        cout << "Employe ID: " << ptr[i].employe_id << endl;
        cout << "Department: " << ptr[i].department << endl;
        cout << "Date of Birth: " << ptr[i].date_of_birth.day << "/" << ptr[i].date_of_birth.month << "/" << ptr[i].date_of_birth.year << endl;
        cout << endl;
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    employe* arr = new employe[size];
    input(arr, size);
    details(arr, size);

    delete[] arr;
    return 0;
}
