//#include <iostream>
//
//using namespace std;
//
//void reverse(int* &arr, int size)
//{
//	int* arr_new = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		//int j = 0;
//		arr_new[size - i - 1] = arr[i];
//		//j++;
//	}
//
//	arr = arr_new;
//}
//
//void print(int* arr, int size)
//{
//	cout << "The reversed array is: ";
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int size;
//	cout << "Enter the size if the array: ";
//	cin >> size;
//
//	int* array = new int[size];
//
//	cout << "Enter the elements of the array: " << endl;
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter the " << i << "th element of the array : ";
//		cin >> array[i];
//	}
//
//	reverse(array, size);
//	print(array, size);
//
//	delete[] array;
//
//	return 0;
//	
//}