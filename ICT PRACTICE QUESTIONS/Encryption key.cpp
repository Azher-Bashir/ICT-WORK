//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int size, key;
//	cout << "Enter the size of the array: ";
//	cin >> size;
//
//
//	cout << "Enter the key for incription: ";
//	cin >> key;
//
//
//	char* char_arr = new char[size];
//	
//	
//	/*char list[100] = { "myname is Abdullah " };*/
//
//	for (int i = 0; i < size; i++)
//	{
//		cin >> char_arr[i];
//	}
//
//
//	for (int i = 0; i < size; i++)
//	{
//	
//		if (char_arr[i] >= 'a' && char_arr[i] <= 'z')
//		{
//			char_arr[i] = char_arr[i] + key;
//		}
//		else
//			cout << "Your have entered wrong value !!! Please enter a value between a & z" << endl;
//	}
//	for (int i = 0; i < size; i++)
//		cout << char_arr[i];
//
//}