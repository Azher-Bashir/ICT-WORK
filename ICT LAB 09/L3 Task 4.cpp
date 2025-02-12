#include <iostream>

using namespace std;
//void swap(int tem)

int main()
{
	int size;
	cout << "Etnre hte size of the array: ";
	cin >> size;

	int *arr = new int[size];

	cout << "Enter the Entrie of the array: " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter the " << i << "th term: ";
		cin >> *(arr + i);
	}

	////Now Bubble sorting.
	//for (int i = 0; i < size; i++)
	//{
	//	for (int j = 0; j < size - 1; j++)
	//	{
	//		if (arr[j] > arr[j + 1])
	//		{
	//			swap(arr[j], arr[j + 1]);
	//		}
	//	}
	//}

	//// Selection sorting
	//for (int i = 0; i < size; i++)
	//{
	//	//int max = *(arr + i);
	//	for (int j = 0; j < size; j++)
	//	{
	//		if (*(arr + j) < *(arr + i))
	//		{
	//			swap(*(arr + i), *(arr + j));
	//		}
	//	}
	//}


	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}

}