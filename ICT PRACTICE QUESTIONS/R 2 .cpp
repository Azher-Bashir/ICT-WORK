//#include <iostream>
//using namespace std;
//
//void GetData(int arr[3][4])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << "Enter the element of row " << i + 1 << " and column " << j + 1 << ": ";
//			cin >> arr[i][j];
//		}
//	}
//}
//
//void PrintMaximumValueInRow(int arr[3][4])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		int max = arr[i][0];
//		for (int j = 1; j < 4; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//			}
//		}
//		cout << "The maximum value in row " << i + 1 << " is: " << max << endl;
//	}
//}
//
//int main()
//{
//	int arr[3][4];
//	GetData(arr);
//	PrintMaximumValueInRow(arr);
//}