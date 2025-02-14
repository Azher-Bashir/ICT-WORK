//#include <iostream>
//
//using namespace std;
//
//int* New_size(int*& arr, int& size, int new_size)
//{
//	int* newarr = new int[new_size];
//	for (int i = 0; i < size && i < new_size; i++)
//	{
//		*(newarr + i) = *(arr + i) ;
//	}
//	for (int i = size; i < new_size; i++)
//	{
//		*(newarr + i) = 0;
//	}
//	arr = newarr;
//	size = new_size;
//
//	return newarr;
//}
//
//int main()
//{
//	int size, newsize;
//	cout << "Enter the size of the array: ";
//	cin >> size;
//	cout << "Enter the new size of the array: ";
//	cin >> newsize;
//	int* arr = new int[size];
//	cout << "Enter the entries of the array: " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter the " << i << "th term: ";
//		cin >> *(arr + i);
//	}
//	int* New_Arr = New_size(arr, size, newsize);
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(arr + i);
//	}
//
//
//	
//	delete[] arr;
//	//delete[] New_Arr;
//	cout << endl;
//	return 0;
//
//}