//#include <iostream>
//
//using namespace std;
//void getData(int list1[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cin >> list1[i];
//	}
//}
//void picklarger(int list1[], int list2[], int size)
//{
//	int new_size = size * 2;
//	int *array = new int[ new_size];
//	for (int i = 0; i < size; i++)
//	{
//		
//			if (list1[i] <= list2[i])
//			{
//				array[i] = list2[i];
//			}
//			else
//			{
//				array[i] = list1[i];
//			}
//		
//	}
//	for (int i = 0; i < 5 ; i++)
//	{
//		cout << array[i] << "  ";
//	}
//}
//
//int main()
//{
//	int size;
//	cout << "Enter the size of the Array" << endl;
//	cin >> size;
//	int* list1 = new int[size];
//	cout << "Enter the Data in list1: " << endl;
//	getData(list1, size);
//
//	int* list2 = new int[size];
//	cout << "Enter the Data in list2: " << endl;
//	getData(list2, size);
//
//	picklarger(list1, list2, size);
//
//	return 0; 
//
//}