////In a right triangle, the square of the length of one side is equal to the sum of the squares of the lengths of the other two sides.
//// Write a program that prompts the user to enter the lengths of three sides of a triangle and then outputs a message indicating whether the triangle is a right triangle.
//#include <iostream>
//#include<cmath>
//
//using namespace std;
//
//int main()
//{
//    int  a, b, c;
//    cout << "Enter the side a: ";
//    cin >> a;
//    cout << "Enter the side b: ";
//    cin >> b;
//    cout << "Enter the side c: ";
//    cin >> c;
//    if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2))
//    {
//        cout << "The triangle is a right angle triangle:" << endl;
//    }
//    else
//    {
//        cout << "The triangle is not a right angle triangle..." << endl;
//    }
//    system("pause");
//    return 0;
//}


//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//    int year;
//    cout << "Enter the year: ";
//    cin >> year;
//    if ((year % 4 == 0) || (year % 100 != 0) && (year % 400 == 0))
//    {
//        cout << "The year is leap year";
//    }
//    else
//    {
//        cout << "The year is not a leap year..";
//    }
//    system("pause");
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    double marks;
//    cout << "Enter the marks of the student: ";
//    cin >> marks;
//    if (marks >= 90)
//    {
//        cout << "Grade is A";
//    }
//    else if (marks >= 75 && marks <= 89)
//
//    {
//        cout << "Grade is B";
//    }
//    else if (marks >= 60 && marks < 75)
//    {
//        cout << "Grade is C";
//    }
//    else if (marks >= 45 && marks < 60)
//    {
//        cout << "Grade is D";
//    }
//    else
//    {
//        cout << "The grade is F";
//    }
//    system("pause");
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    long long int a, b;
//    char c;
//    cout << "Enter the value of a: ";
//    cin >> a;
//    cout << "Enter the operation (+, -, *, /, %) you want to perform: ";
//    cin >> c;
//    cout << "Enter the value of b: ";
//    cin >> b;
//    if (c == '+')
//    {
//        cout << "The result of " << a << " + " << b << " is " << a + b << endl;
//    }
//    else if (c == '-')
//    {
//        cout << "The result of " << a << " - " << b << " is " << a - b << endl;
//    }
//    else if (c == '*')
//    {
//        cout << "The result of " << a << " * " << b << " is " << a * b << endl;
//    }
//    else if (c == '/')
//    {
//        if (b != 0)
//        {
//            cout << "The result of " << a << " / " << b << " is " << a / b << endl;
//        }
//        else
//        {
//            cout << "The division is not possible" << endl;
//        }
//    }
//    else if (c == '%')
//    {
//        if (b != 0)
//        {
//            cout << "The result of " << a << " % " << b << " is " << a % b << endl;
//        }
//        else
//        {
//            cout << "mod is not possible" << endl;
//        }
//    }
//    system("pause");
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//    int a, b, c;
//    cout << "Such that the equation ax^2 + bx + c = 0" << endl;
//    cout << "Then enter the value of a: ";
//    cin >> a;
//    cout << "Enter the value of b: ";
//    cin >> b;
//    cout << "Enter the value of c: ";
//    cin >> c;
//    if ((pow(b, 2) - 4 * a * c) == 0)
//    {
//        cout << "The equation has single repeated roots" << endl;
//    }
//    if ((pow(b, 2) - 4 * a * c) > 0)
//    {
//        cout << "The equation has two equal roots." << endl;
//    }
//    if ((pow(b, 2) - 4 * a * c) < 0)
//    {
//        cout << "The equation has complex roots roots" << endl;
//    }
//    system("pause");
//    return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int calls, bill;
//    cout << "Enter the number of calls: ";
//    cin >> calls;
//    if (calls <= 100)
//    {
//        bill = 200;
//        cout << "Total bill is " << bill << endl;
//    }
//    else if (calls > 100 && calls <= 150)
//    {
//        bill = 200 + ((calls - 100) * 0.6);
//        cout << "Total bill is: " << bill << endl;
//    }
//    else if (calls > 150 && calls <= 200)
//    {
//        bill = 200 + (0.6 * 50) + ((calls - 150) * 0.5);
//        cout << "Total bill is " << bill << endl;
//    }
//    else if (calls > 200)
//    {
//        bill = 200 + (0.6 * 50) + (0.5 * 50) + ((calls - 200) * 0.4);
//        cout << "Total bill is " << bill << endl;
//    }
//    else
//    {
//        cout << "Invalide entry..........." << endl;
//        cout << "Please enter correct number." << endl;
//    }
//    system("pause");
//    return 0;
//}

