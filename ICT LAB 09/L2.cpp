//#include <iostream>
//#include <cstring>
//using namespace std;
//
//void removeVowels(char** str) {
//    int len = strlen(*str);
//    char* newStr = new char[len + 1];
//    int j = 0;
//    for (int i = 0; i < len; i++) {
//        if (!strchr("AEIOUaeiou", (*str)[i])) {
//            newStr[j++] = (*str)[i];
//        }
//    }
//    newStr[j] = '\0';
//    delete[] * str;
//    *str = newStr;
//}
//
//int main() {
//    char* str = new char[strlen("I am a Programmer") + 1];
//    strcpy(str, "I am a Programmer");
//    removeVowels(&str);
//    cout << "Modified String: " << str << endl;
//    delete[] str;
//    return 0;
//}
