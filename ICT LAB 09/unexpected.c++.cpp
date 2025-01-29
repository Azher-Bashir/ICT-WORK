//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int arr[3][4], largest;
//	cout << "Enter the entries";
//	for (int r = 0; r < 3; r++)
//	{
//		for (int c = 0; c < 4; c++)
//		{
//			cin >> arr[r][c];
//		}
//	}
//	for (int r = 0; r < 3; r++)
//	{
//		for (int c = 0; c < 4; c++)
//		{
//			//if(r == c)
//			cout << arr[r][c] << '\t';
//		}
//		cout << endl;
//	}
//	for (int r = 0; r < 3; r++)
//	{
//		for (int c = 0; c < 4; c++)
//		{
//			if(r == c)
//			cout << arr[r][c] << '\t';
//		}
//		cout << endl;
//	}
//	for (int r = 0; r < 3; r++)
//	{
//		largest = arr[r][0];
//		for (int c = 1; c < 4; c++)
//		{
//			if (arr[r][c] > largest)
//			{
//				largest = arr[r][c];
//			}
//			else
//				largest = largest;
//		}
//		cout << "The largest entry of the array is: " << largest << endl;
//
//	}
//	return 0;
//
//}