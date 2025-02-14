#include <iostream>

using namespace std;

void* New_size(int*& arr, int& size, int new_size)
{
	int* newarr = new int[new_size];
	for (int i = 0; i < size && i < new_size; i++)
	{
		*(newarr + i) = *(arr + i);
	}
	for (int i = size; i < new_size; i++)
	{
		*(newarr + i) = 0;
	}

	arr = newarr;
	size = new_size;
}

int* merge_arrays(int* arr1, int size1, int* arr2, int size2, int& new_size)
{
	new_size = size1 + size2;
	int* mergedArr = new int[new_size];
	for (int i = 0; i < size1; i++)
	{
		mergedArr[i] = arr1[i];
	}
	for (int i = 0; i < size2; i++)
	{
		mergedArr[size1 + i] = arr2[i];
	}
	return mergedArr;
}


int main()
{
	int size1, size2;
	cout << "Enter the size of the first array: ";
	cin >> size1;
	int* arr1 = new int[size1];
	cout << "Enter the entries of the first array: " << endl;
	for (int i = 0; i < size1; i++)
	{
		cout << "Enter the " << i << "th term: ";
		cin >> *(arr1 + i);
	}

	cout << "Enter the size of the second array: ";
	cin >> size2;
	int* arr2 = new int[size2];
	cout << "Enter the entries of the second array: " << endl;
	for (int i = 0; i < size2; i++)
	{
		cout << "Enter the " << i << "th term: ";
		cin >> *(arr2 + i);
	}

	int mergedSize;
	int* mergedArr = merge_arrays(arr1, size1, arr2, size2, mergedSize);

	int uniqueSize = mergedSize;
	//int* uniqueArr = removeDuplicates(mergedArr, uniqueSize);

	cout << "Array after removing duplicates: ";
	for (int i = 0; i < uniqueSize; i++)
	{
		cout << uniqueArr[i] << " ";
	}
	cout << endl;

	delete[] arr1;
	delete[] arr2;
	delete[] mergedArr;
	delete[] uniqueArr;

	return 0;
}






























//int* removeDuplicates(int* arr, int& size)
//{
//    int* temp = new int[size];
//    int newSize = 0;
//    for (int i = 0; i < size; i++)
//    {
//        bool isDuplicate = false;
//        for (int j = 0; j < newSize; j++)
//        {
//            if (arr[i] == temp[j])
//            {
//                isDuplicate = true;
//                break;
//            }
//        }
//        if (!isDuplicate)
//        {
//            temp[newSize++] = arr[i];
//        }
//    }
//    int* uniqueArr = New_size(temp, newSize, newSize);
//    size = newSize;
//    return uniqueArr;
//}