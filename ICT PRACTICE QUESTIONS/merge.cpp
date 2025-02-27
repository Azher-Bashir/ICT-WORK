////// function to merge to arrays the seperate even and odd away from each other uisng for loop only
////
////
////
////
////#include <iostream>
////
////using namespace std;
////
////void merge(int* array1, int* array2, int size1, int size2)
////{
////	int* array3 = new int[size1 + size2];
////	int i = 0, j = 0, k = 0;
////	while (i < size1 && j < size2)
////	{
////		if (array1[i] % 2 == 0)
////		{
////			array3[k] = array1[i];
////			i++;
////			k++;
////		}
////		else
////		{
////			array3[k] = array2[j];
////			j++;
////			k++;
////		}
////	}
////	while (i < size1)
////	{
////		if (array1[i] % 2 == 0)
////		{
////			array3[k] = array1[i];
////			i++;
////			k++;
////		}
////	}
////	while (j < size2)
////	{
////		if (array2[j] % 2 != 0)
////		{
////			array3[k] = array2[j];
////			j++;
////			k++;
////		}
////	}
////	for (int i = 0; i < size1 + size2; i++)
////	{
////		cout << array3[i] << " ";
////	}
////}
//// 
////
//////// now creat the same function using for loops and merge the array too make it more easier to understand
//////
//////void merge(int* array1, int* array2, int size1, int size2)
//////{
//////	int* array3 = new int[size1 + size2];
//////	int i = 0, j = 0, k = 0;
//////	for (int i = 0; i < size1; i++)
//////	{
//////		if (array1[i] % 2 == 0)
//////		{
//////			array3[k] = array1[i];
//////			k++;
//////		}
//////	}
//////	for (int i = 0; i < size2; i++)
//////	{
//////		if (array2[i] % 2 != 0)
//////		{
//////			array3[k] = array2[i];
//////			k++;
//////		}
//////	}
//////	for (int i = 0; i < size1 + size2; i++)
//////	{
//////		cout << array3[i] << " ";
//////	}
//////}
////int main()
////{
////	int size1, size2;
////	cout << "Size 1: ";
////	cin >> size1;
////	cout << "Size 2: ";
////	cin >> size2;
////	int* array1 = new int[size1];
////	int* array2 = new int[size2];
////
////	cout << "ENter the array 1: ";
////	for (int i = 0; i < size1; i++)
////	{
////		cin >> array1[i];
////	}
////	cout << "array 2: ";
////	for (int i = 0; i < size1; i++)
////	{
////		cin >> array1[i];
////	}
////}
//
//
//#include <iostream>
//
//using namespace std;
//
//void mergeAndSeparate(int* array1, int* array2, int size1, int size2, int*& evenArray, int& evenSize, int*& oddArray, int& oddSize)
//{
//    int totalSize = size1 + size2;
//    int* mergedArray = new int[totalSize];
//
//    // Merge the two arrays
//    for (int i = 0; i < size1; i++)
//    {
//        mergedArray[i] = array1[i];
//    }
//    for (int i = 0; i < size2; i++)
//    {
//        mergedArray[size1 + i] = array2[i];
//    }
//
//    // Count the number of even and odd elements
//    evenSize = 0;
//    oddSize = 0;
//    for (int i = 0; i < totalSize; i++)
//    {
//        if (mergedArray[i] % 2 == 0)
//        {
//            evenSize++;
//        }
//        else
//        {
//            oddSize++;
//        }
//    }
//
//    // Allocate memory for even and odd arrays
//    evenArray = new int[evenSize];
//    oddArray = new int[oddSize];
//
//    // Separate even and odd elements
//    int evenIndex = 0;
//    int oddIndex = 0;
//    for (int i = 0; i < totalSize; i++)
//    {
//        if (mergedArray[i] % 2 == 0)
//        {
//            evenArray[evenIndex++] = mergedArray[i];
//        }
//        else
//        {
//            oddArray[oddIndex++] = mergedArray[i];
//        }
//    }
//
//    delete[] mergedArray;
//}
//
//int main()
//{
//    int size1, size2;
//    cout << "Size 1: ";
//    cin >> size1;
//    cout << "Size 2: ";
//    cin >> size2;
//
//    int* array1 = new int[size1];
//    int* array2 = new int[size2];
//
//    cout << "Enter the elements of array 1: ";
//    for (int i = 0; i < size1; i++)
//    {
//        cin >> array1[i];
//    }
//
//    cout << "Enter the elements of array 2: ";
//    for (int i = 0; i < size2; i++)
//    {
//        cin >> array2[i];
//    }
//
//    int* evenArray;
//    int evenSize;
//    int* oddArray;
//    int oddSize;
//
//    mergeAndSeparate(array1, array2, size1, size2, evenArray, evenSize, oddArray, oddSize);
//
//    cout << "Even elements: ";
//    for (int i = 0; i < evenSize; i++)
//    {
//        cout << evenArray[i] << " ";
//    }
//    cout << endl;
//
//    cout << "Odd elements: ";
//    for (int i = 0; i < oddSize; i++)
//    {
//        cout << oddArray[i] << " ";
//    }
//    cout << endl;
//
//    delete[] array1;
//    delete[] array2;
//    delete[] evenArray;
//    delete[] oddArray;
//
//    return 0;
//}
