#include <iostream>
#include <string>

using namespace std;

//string uppercase()
//{
//	return 0;
//}
int main()
{
	int size;
	string array;
	cout << "Enter hte size of the array: ";
	cin >> size;
	char *arr = new char [size];

	cout << "Entr the sentence that you want to uppercase: ";
	for (int i = 0; i < size; i++)
	{
		cin.get(*arr);
		//getline(cin, arr[i]);

	}
	for (int i = 0; i < size; i++)
	{
		if ((*arr) > 'a' && (*arr) < 'z')

		{
			arr[i] = *(arr + 32);
			cout << arr[i];
		}
		else
			arr = arr;
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}
	
	//getline(cin, *arr);
}