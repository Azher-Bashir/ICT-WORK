#include <iostream>

using namespace std;

int main()
{
	int size;
	cout << "Enter hte size of the array: ";
	cin >> size;

	char* arr = new char[size + 1];

	cin.ignore();
	cout << "Enter the statement that you want to reverse: ";
	cin.getline(arr, size + 1);

	for (int i = size; i >= 0; i--)
	{
		cout << *(arr + i);
	}
	cout << endl;
}
//
//
//
//
//
//
//
//
//
//	//system("pause");
//
//
////cout << "Enter the Entrie of the array: " << endl;
//
//	//for (int i = 0; i < size; i++)
//	//{
//	//	cout << "Enter the " << i << "th term: ";
//	//	cin >> *(arr + i);
//	//}