//
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cout << "Enter the number of strings ";
//	cin >> n;
//	char** arr = new char* [n];
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = new char[100];
//		cout << "Enter string " << i + 1 << ": ";
//		cin >> arr[i];
//	}
//	int max = 0;
//	int index = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int count = 0;
//		for (int j = 0; arr[i][j] != '\0'; j++)
//		{
//			count++;
//		}
//		if (count > max)
//		{
//			max = count;
//			index = i;
//		}
//	}
//	cout << "The longest string is: " << arr[index] << endl;
//	for (int i = 0; i < n; i++)
//	{
//		delete[] arr[i];
//	}
//	delete[] arr;
//	return 0;
//}