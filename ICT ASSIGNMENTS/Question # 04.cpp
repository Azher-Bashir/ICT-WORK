////#include <iostream>
////
////using namespace std;
////void getData(int list1[], int size)
////{
////	for (int i = 0; i < size; i++)
////	{
////		cin >> list1[i];
////	}
////}
////void picklarger(int list1[], int list2[], int size)
////{
////	int new_size = size * 2;
////	int *array = new int[ new_size];
////	for (int i = 0; i < size; i++)
////	{
////		
////			if (list1[i] <= list2[i])
////			{
////				array[i] = list2[i];
////			}
////			else
////			{
////				array[i] = list1[i];
////			}
////		
////	}
////	for (int i = 0; i < 5 ; i++)
////	{
////		cout << array[i] << "  ";
////	}
////}
////
////int main()
////{
////	int size;
////	cout << "Enter the size of the Array" << endl;
////	cin >> size;
////	int* list1 = new int[size];
////	cout << "Enter the Data in list1: " << endl;
////	getData(list1, size);
////
////	int* list2 = new int[size];
////	cout << "Enter the Data in list2: " << endl;
////	getData(list2, size);
////
////	picklarger(list1, list2, size);
////
////	return 0; 
////
////}
//
//#include <iostream>
//
//using namespace std;
//
//void pick_largest(int array1[], int array2[], int size)
//{
//    int new_size = 2 * size;
//    int* new_array = new int[new_size];
//    for (int i = 0; i < new_size; i++)
//    {
//        if (new_size == size)
//        {
//            new_array[i] = 101;
//        }
//        else if (array1[i] > array2[i])
//        {
//            new_array[i] = array1[i];
//        }
//        else
//        {
//            new_array[i] = array2[i];
//        }
//    }
//    cout << "The result of the new array is: ";
//    for (int i = 0; i < new_size; i++)
//    {
//        cout << new_array[i];
//    }
//}
//
//int main()
//
//{
//    int size;
//    cout << "Enter the size of the array: ";
//    cin >> size;
//    int* data1 = new int[size];
//    int* data2 = new int[size];
//    cout << "Enter hte data for array 1: ";
//    for (int i = 0; i < size; i++)
//    {
//        cin >> data1[i];
//    }
//    cout << "Enter the data for second array: ";
//    for (int i = 0; i < size; i++)
//    {
//        cin >> data2[i];
//    }
//    pick_largest(data1, data2, size);
//
//    return 0;
//}