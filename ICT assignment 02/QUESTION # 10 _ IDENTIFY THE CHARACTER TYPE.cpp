//// QUESTION # 10 _ Write a C++ program to determine the type of a character (vowel,
////  consonant, or special character) using a�switch-case�statement. Explain why is this an
////  efficient way to categorize characters?
//#include <iostream>
//using namespace std;
//// Function to determine the type of a character
//int main()
//{
//    char ch;
//    cout << "Enter the  character: ";
//    cin >> ch;
//    switch (ch)
//    {
//    case 'a':
//    case 'e':
//    case 'i':
//    case 'o':
//    case 'u':
//        cout << "The character is a vowel." << endl;
//        break;
//    case 'A':
//    case 'E':
//    case 'I':
//    case 'O':
//    case 'U':
//        cout << "The character is a vowel." << endl;
//        break;
//    default:
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//        {
//            cout << ch << " is an alphabet." << endl;
//        }
//        else
//        {
//            cout << ch << " is a special character" << endl;
//        }
//    }
//     system("pause");
//    return 0;
//}
//    //case 'b':
//    //case 'c':
//    //case 'd':
//    //case 'f':
//    //case 'g':
//    //case 'h':
//    //case 'j':
//    //case 'k':
//    //case 'l':
//    //case 'm':
//    //case 'n':
//    //case 'p':
//    //case 'q':
//    //case 'r':
//    //case 's':
//    //case 't':
//    //case 'v':
//    //case 'w':
//    //case 'x':
//    //case 'y':
//    //case 'z':
//    //    cout << "The character is a consonant." << endl;
//    //    break;
//    //case 'B':
//    //case 'C':
//    //case 'D':
//    //case 'F':
//    //case 'G':
//    //case 'H':
//    //case 'J':
//    //case 'K':
//    //case 'L':
//    //case 'M':
//    //case 'N':
//    //case 'P':
//    //case 'Q':
//    //case 'R':
//    //case 'S':
//    //case 'T':
//    //case 'V':
//    //case 'W':
//    //case 'X':
//    //case 'Y':
//    //case 'Z':
//    //    cout << "The character is a consonant." << endl;
//    //    break;
//    //case '1':
//    //case '2':
//    //case '3':
//    //case '4':
//    //case '5':
//    //case '6':
//    //case '7':
//    //case '8':
//    //case '9':
//    //case '0':
//    //    cout << "The character is a number." << endl;
//    //default:
//    //    cout << "The character is a special character." << endl;
//    //    break;