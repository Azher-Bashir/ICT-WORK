//#include<iostream>
//
//using namespace std;
//
//bool similarity(int arr1[], int arr2[], bool result)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		if (arr1[i] == arr2[i])
//		{
//			result = true;
//		}
//		else {
//
//			result = false;
//		}
//	}
//	return result;
//}
//int main()
//{
//	int arr1[5], arr2[5];
//	bool result = true;
//	cout << "Enter the elements of first array: " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "Enter " << i << "th Element: ";
//		cin >> arr1[i];
//	}
//	cout << "Enter the elements of second array: " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "Enter " << i << "th Element: ";
//		cin >> arr2[i];
//	}
//
//
//	result = similarity(arr1, arr2, result);
//
//
//	if (result == true)
//	{
//		cout << "The entered arrays are equal to each other in size and entries." << endl;
//	}
//	else
//		cout << "The entered arrays are not equal to eachother." << endl;
//
//	return 0;
//
//}