////QUESTION # 03 _ Write a C++ program to calculate the factorial of a number using
//// a for loop. Explain why is a loop necessary for this calculation?
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    long long int num, fact = 1;
//    cout << "Enter the number: ";
//    cin >> num;
//    for (long long int i = num; num >= 1; i++)
//    {
//        fact = fact * num;
//        num--;
//    }
//    cout << "Factorial of the number is: " << fact << endl;
//
//    // system("pause");
//    return 0;
//}
//Explain why is a loop necessary for this calculation?
//Answer: A loop is necessary for calculating the factorial of a number because the factorial of a number is the product of all positive integers up to that number. Using a loop, we can repeatedly multiply the current value of the factorial by the next integer in the sequence until we reach the desired number. This allows us to calculate the factorial of any number without having to manually multiply each integer, making the process more efficient and less error-prone.
