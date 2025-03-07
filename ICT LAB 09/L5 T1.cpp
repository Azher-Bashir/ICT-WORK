////QUESTION NUMBER 1 OART A, B, C ARE HERE BECAUSE THEY HAD NOT MAJOR CHANGES WHERE AS PART D IS IN NEXT UNCOMMENTED PART
//
//#include <iostream>
//
//using namespace std;
//struct employe
//{
//    string name = "Wajeeh";
//    int employe_id = 123456;
//    string department = "Engine building";
//};
//void details(employe b)
//{
//    cout << b.name << endl;
//    cout << b.employe_id << endl;
//    cout << b.department << endl;
//}
//
//int main()
//{
//    employe a;
//    employe* ptr = &a;
//
//    cout << ptr->name << endl;
//    cout << ptr->employe_id << endl;
//    cout << ptr->department << endl;
//
//    details(a);
//    return 0;
//}



//QUESTION NUMBER 1 PART D
#include <iostream>

using namespace std;
struct employe
{
    string name;
    int employe_id;
    string department;
};
void input(employe* ptr, int size)
{
    cout << "Enter details: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter name: ";
        cin >> ptr[i].name;
        cout << "Enteremploye_id: ";
        cin >> ptr[i].employe_id;
        cout << "department: ";
        cin >> ptr[i].department;
    }
}
void details(employe* ptr, int size)
{
    cout << endl << "The details tht you entered are: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Name of the employe: " << ptr[i].name << endl;
        cout << "Employe ID: " << ptr[i].employe_id << endl;
        cout << "Department: " << ptr[i].department << endl;
        cout << endl;
    }
}

int main()
{
    // employe a;
    int size;
    cout << "enter the size of the array: ";
    cin >> size;

    employe* arr = new employe[size];
    input(arr, size);
    details(arr, size);

    return 0;
}
