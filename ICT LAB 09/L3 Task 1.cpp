//#include <iostream>
//
//using namespace std;
//
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
//void Bubble_Sorting(int* &arr, int size)
//{
//	int counter = 0;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size - 1; j++)
//		{
//			if (*(arr + j) > *(arr + (j + 1)))
//			{
//				swap(*(arr + j), *(arr + (j + 1)));
//				counter++;
//			}
//		}
//	}
//	cout << "The total swaps made are: " << counter;
//	cout << endl;
//}
//
//int main()
//{
//	int size;
//	cout << "Enter the size of the array: ";
//	cin >> size;
//	int* arr = new int[size];
//	cout << "Enter the Entrie of the array: " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter the " << i << "th term: ";
//		cin >> *(arr + i);
//	}
//	Bubble_Sorting(arr, size);
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(arr + i) << " ";
//	}
//	cout << endl;
//}