//#include <iostream>
//
//using namespace std;
//bool identical(int* array1, int* array2, int size1, int size2)
//{
//	if (size1 != size2)
//	{
//		return false;
//	}
//	else
//	{
//		for (int i = 0; i < size1; i++)
//		{
//			if (array1[i] != array2[i])
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//}
//
//
//int main()
//{
//	int size1, size2, response;
//	cout << "Enter the size of first array: ";
//	cin >> size1;
//	cout << "Ente the size of the second array: ";
//	cin >> size2;
//
//	int* array1 = new int[size1]; 
//	int* array2 = new int[size2];
//
//	cout << "Enter the elemments of the first arrary: " << endl;
//	for (int i = 0; i < size1; i++)
//	{
//		cout << "Enter the " << i << "th element of the first array: ";
//		cin >> array1[i];
//	}
//	
//	cout << "Enter the elemments of the Second arrary: " << endl;
//	for (int i = 0; i < size2; i++)
//	{
//		cout << "Enter the " << i << "th element of the Second array: ";
//		cin >> array2[i];
//	}
//	response = identical(array1, array2, size1, size2);
//	if (response == 1)
//	{
//		cout << "The arrays are identical." << endl;
//	}
//	else
//		cout << "The arrays are not identical." << endl;
//	cout << "The arrays are identical: " << identical(array1, array2, size1, size2) << endl;
//
//	delete[] array1;
//	delete[] array2;
//
//	return 0;
//
//}