////You are required to write a program which will take input from user in two integer arrays.The
////program should compare both arrays for checking if both arrays are totally identical(Exactly same in size
////	and elements).
////	Write a boolean function which return true if arrays are totally identical otherwise return false
//
//#include <iostream>
//using namespace std;
//
//bool are_arrays_identical(int* arr1, int* arr2, int length) {
//    for (int i = 0; i < length; i++) {
//        if (arr1[i] != arr2[i]) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    int length1, length2;
//    cout << "Enter the size of the first array: ";
//    cin >> length1;
//    cout << "Enter the size of the second array: ";
//    cin >> length2;
//    if (length1 != length2) {
//        cout << "The arrays are not equal in size." << endl;
//        return 0;
//    }
//    int* arr1 = new int[length1];
//    int* arr2 = new int[length2];
//    cout << "Enter the elements of the first array:" << endl;
//    for (int i = 0; i < length1; i++) {
//        cin >> arr1[i];
//    }
//    cout << "Enter the elements of the second array:" << endl;
//    for (int i = 0; i < length2; i++) {
//        cin >> arr2[i];
//    }
//    bool are_identical = are_arrays_identical(arr1, arr2, length1);
//    if (are_identical) {
//        cout << "The entered arrays are identical in size and elements." << endl;
//    }
//    else {
//        cout << "The entered arrays are not identical in size and elements." << endl;
//    }
//    delete[] arr1;
//    delete[] arr2;
//    return 0;
//}
//
