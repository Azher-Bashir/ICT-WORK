////#include <iostream>
////
////using namespace std;
////
////void new_size(int*& arr, int &size, int new_size)
////{
////	int* newarr = new int[new_size];
////	for (int i = 0; i < size; i++)
////	{
////		*(arr + i) = *(newarr + i);
////	}
////	for (int i = size; i < new_size; i++)
////	{
////		*(newarr + i) = 0;
////	}
////
////	arr = newarr;
////	size = new_size;
////}
////int main()
////{
////	int size = 1;
////	cout << "Enter hte size of the array: ";
////	cin >> size;
////
////	//char *arr = new char[size + 1];
////	string arr;
////
////	cin.ignore();
////	cout << "Enter the statement that you want to reverse: ";
////	//cin.getline(arr, size + 1);
////	getline(cin, arr);
////	//size = strlen(arr);
////	for (int i = size; i >= 0; i--)
////	{
////		cout << *(arr + i);
////	}
////	cout << endl;
////
////
////}
////
////
////
////
////
////
////
////
////
////	//system("pause");
////
////
//////cout << "Enter the Entrie of the array: " << endl;
////
////	//for (int i = 0; i < size; i++)
////	//{
////	//	cout << "Enter the " << i << "th term: ";
////	//	cin >> *(arr + i);
////	//}
//
//#include <iostream>
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//void reverseString(char* str)
//{
//    int size = strlen(str);
//    for (int i = 0; i < size / 2; i++)
//    {
//        swap(*(str + i), *(str + (size - 1 - i)));
//    }
//}
//
//int main()
//{
//    int size = 100; // Initial size for the array
//    char* arr = new char[size + 1];
//
//    cout << "Enter the statement that you want to reverse: ";
//    cin.getline(arr, size + 1);
//
//    reverseString(arr);
//
//    cout << "Reversed statement: " << arr << endl;
//
//    delete[] arr;
//    return 0;
//}
