//#include <iostream>
//using namespace std;
//
//
//void strCopy(char* dest, const char* src) {
//    int i = 0;
//    while (src[i] != '\0') {
//        dest[i] = src[i];
//        i++;
//    }
//    dest[i] = '\0';
//}
//
//void removeVowels(char** str) {
//    int len = 0;
//    while ((*str)[len] != '\0') len++;
//
//    char* newStr = new char[len + 1];
//    int j = 0;
//    for (int i = 0; i < len; i++) {
//        if ((*str)[i] != 'A' && (*str)[i] != 'E' && (*str)[i] != 'I' && (*str)[i] != 'O' && (*str)[i] != 'U' &&
//            (*str)[i] != 'a' && (*str)[i] != 'e' && (*str)[i] != 'i' && (*str)[i] != 'o' && (*str)[i] != 'u') {
//            newStr[j++] = (*str)[i];
//        }
//    }
//    newStr[j] = '\0';
//    delete[] * str;
//    *str = newStr;
//}
//
//int main() {
//    char* str = new char[18];
//    strCopy(str, "I am a Programmer");
//    removeVowels(&str);
//    cout << "Modified String: " << str << endl;
//    delete[] str;
//    return 0;
//}
