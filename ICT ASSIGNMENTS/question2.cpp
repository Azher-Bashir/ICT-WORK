//write a program that dynamically allocates memory for 1d array.make a function which reverses the array elements
//and a function to display the reversed array
//#include <iostream>
//using namespace std;
//
//void reverse(int* arr, int size)
//{
//	int* temp = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		temp[i] = arr[size - i - 1];
//	}
//	for (int x = 0; x < size; x++)
//	{
//		arr[x] = temp[x];
//	}
//	delete[] temp;
//}
//
//void display(int* arr, int size)
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
//	cout << "enter the size of the array: "; 
//	cin >> size;
//	int* arr = new int[size];
//	for (int x = 0; x < size; x++)
//	{
//		cout << "enter element " << x << ": "; cin >> arr[x];
//	}
//	reverse(arr, size);
//	display(arr, size);
//	delete[] arr;
//}
