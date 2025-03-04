//#include <iostream>
//using namespace std;
//
//bool areArraysEqual(int* firstArray, int* secondArray, int length) {
//    for (int i = 0; i < length; i++) {
//        if (firstArray[i] != secondArray[i]) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    int firstSize, secondSize;
//    cout << "ENTER THE SIZE OF THE FIRST ARRAY: ";
//    cin >> firstSize;
//    cout << "ENTER THE SIZE OF THE SECOND ARRAY: ";
//    cin >> secondSize;
//
//    if (firstSize != secondSize) {
//        cout << "THE ARRAYS ARE NOT EQUAL IN SIZE." << endl;
//        return 0;
//    }
//
//    int* firstArray = new int[firstSize];
//    int* secondArray = new int[secondSize];
//
//    cout << "ENTER THE ELEMENTS OF THE FIRST ARRAY:" << endl;
//    for (int i = 0; i < firstSize; i++) {
//        cin >> firstArray[i];
//    }
//
//    cout << "ENTER THE ELEMENTS OF THE SECOND ARRAY:" << endl;
//    for (int i = 0; i < secondSize; i++) {
//        cin >> secondArray[i];
//    }
//
//    bool result = areArraysEqual(firstArray, secondArray, firstSize);
//
//    if (result) {
//        cout << "THE ENTERED ARRAYS ARE EQUAL TO EACH OTHER IN SIZE AND ENTRIES." << endl;
//    }
//    else {
//        cout << "THE ENTERED ARRAYS ARE NOT EQUAL TO EACH OTHER IN SIZE AND ENTRIES." << endl;
//    }
//
//    delete[] firstArray;
//    delete[] secondArray;
//
//    return 0;
//}
//
//
