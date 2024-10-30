//// QUESTION # 08 _ Write a C++ program to implement a simple calculator using a switch-
////  case statement. Explain why is a switch-case statement a good choice for this type of
////  program?
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    double a, c;
//    char b;
//    int d, e;
//    cout << "Enter the first number: ";
//    cin >> a;
//    cout << "Enter the operation (*,/,+,-,%) you want to perform: ";
//    cin >> b;
//    cout << "Enter the second number: ";
//    cin >> c;
//    switch (b)
//    {
//    case '+':
//        cout << a << " + " << c << " = " << a + c << endl;
//        break;
//    case '-':
//        cout << a << " - " << c << " = " << a - c << endl;
//        break;
//    case '*':
//        cout << a << " * " << c << " = " << a * c << endl;
//        break;
//    case '/':
//        if (c != 0)
//            cout << a << " / " << c << " = " << a / c << endl;
//        else
//            cout << "Error! Division by zero is not allowed." << endl;
//        break;
//    case '%':
//        if (c != 0)
//        {
//            d = a;
//            e = c;
//            cout << d << " % " << e << " = " << d % e << endl;
//        }
//        else
//            cout << "Error! mod by zero is not allowed." << endl;
//        break;
//    }
//    system("pause");
//    return 0;
//}
//Explain why is a switch - case statement a good choice for this type of
////  program?
//A switch-case statement is a good choice for this type of program because it allows the program to execute different code blocks based on the value of a variable. In this case, the program needs to perform different operations based on the user's input (e.g., addition, subtraction, multiplication, division, or modulus). Using a switch-case statement makes the code more readable and maintainable compared to using multiple if-else statements. It also provides better performance as the program directly jumps to the appropriate case without evaluating each condition sequentially. This makes the code more efficient and easier to understand.