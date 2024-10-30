// QUESTION # 10 _ Write a C++ program to determine the type of a character (vowel,
//  consonant, or special character) using a switch-case statement. Explain why is this an
//  efficient way to categorize characters?
#include <iostream>
using namespace std;
// Function to determine the type of a character
int main()
{
    char ch;
    cout << "Enter the  character: ";
    cin >> ch;
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "The character is a vowel.";
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "The character is a vowel.";
        break;
    case 'b':
    case 'c':
    case 'd':
    case 'f':
    case 'g':
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
        cout << "The character is a consonant.";
        break;
    case 'B':
    case 'C':
    case 'D':
    case 'F':
    case 'G':
    case 'H':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
        cout << "The character is a consonant.";
        break;
    default:
        cout << "The character is a special character.";
        break;
    }
    // system("pause");
    return 0;
}
//Explain why is this an
//  efficient way to categorize characters?
// Answer: This is an efficient way to categorize characters because it is easy to understand and implement. It is also more efficient than using multiple if-else statements. The switch-case statement is well-suited for this task because it allows us to compare the value of a variable against multiple values in a more concise and readable way. It also makes the code easier to maintain and modify in the future.
//  The switch-case statement is also more efficient than using multiple if-else statements because it uses a jump table to determine the appropriate case to execute, which can be faster than evaluating multiple conditions in a series of if-else statements. This can result in better performance, especially when dealing with a large number of cases.
//  Overall, the switch-case statement is a good choice for categorizing characters because it is easy to understand, efficient, and allows for better performance compared to using multiple if-else statements.
//  system("pause");
//  return 0;
// }
