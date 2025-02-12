//// Write a program that converts all the lowercase characters in a string to uppercase. The program should use a function that takes a C-style string as an argument and returns no value. The program should use a loop to read the input string, and inside the loop it should call the function to convert the string's characters. The program should use the toupper function to convert each character to uppercase. Display the string in uppercase letters.
////
////#include <iostream>
////#include <string>
////
////using namespace std;
////	
////void uppercase(char* arr, int size)
////{
////	for (int i = 0; i < size; i++)
////	{
////		if (*(arr + i) >= 'a' && *(arr + i) <= 'z')
////		{
////			*(arr + i) -= 32;
////		}
////	}
////}
////
////int main()
////{
////	int size;
////	string array;
////	cout << "Enter the size of the array: ";
////	cin >> size;
////	char* arr = new char[size + 1];
////	cout << "Enter the sentence that you want to uppercase: ";
////	cin.ignore();
////	cin.getline(arr, size + 1);
////	uppercase(arr, size);
////	cout << arr;
////	delete[] arr;
////}
//
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const char uppercase(char *&arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//
//		if (*(arr + i) >= 'a' && *(arr + i) <= 'z')
//		{
//			*(arr + i) -= 32;
//		}
//			cout << *(arr + i);
//		//else
//			//arr = arr;
//	}
//	return 0;
//}
//int main()
//{
//	int size;
//	string array;
//	cout << "Enter hte size of the array: ";
//	cin >> size;
//	char *arr = new char [size + 1];
//
//	cout << "Entr the sentence that you want to uppercase: ";
//
//	cin.ignore();
//	cin.getline(arr, size + 1);
//
//	uppercase(arr, size);
//	//cout << arr;
//	
//	//getline(cin, *arr);
//}