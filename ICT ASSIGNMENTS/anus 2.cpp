////Write a program that dynamically allocates memory for 1D array.Make a function which reverses the array elements
////and a function to display the reversed array
//#include <iostream>
//using namespace std;
//
//static void reverse(int* arr, int size)
//{
//	int* temp = new int[size];
//	for (int x = 0; x < size; x++)
//	{
//		temp[x] = arr[size - x - 1];
//	}
//	for (int x = 0; x < size; x++)
//	{
//		arr[x] = temp[x];
//	}
//	delete[] temp;
//}
//
//static void display(int* arr, int size)
//{
//	for (int x = 0; x < size; x++)
//	{
//		cout << arr[x] << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int size;
//	cout << "Enter the size of the array: "; cin >> size;
//	int* arr = new int[size];
//	for (int x = 0; x < size; x++)
//	{
//		cout << "Enter element " << x << ": "; cin >> arr[x];
//	}
//	reverse(arr, size);
//	display(arr, size);
//	delete[] arr;
//	system("Pause");
//}
