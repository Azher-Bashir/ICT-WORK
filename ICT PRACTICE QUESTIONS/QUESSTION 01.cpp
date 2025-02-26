//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int size = 2;
//	int** list = new int* [size];
//
//	for (int i = 0; i < size; i++)
//	{
//		list[i] = new int [size];
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		for(int j = 0; j < size ; j++)
//		{
//			cin >> list[i][j];
//			//cin >> **(list + i + j);
//		}
//	}
//	
//	//*(*(arr+i)+J)
//	
//	for (int i = 0; i < size; i++)
//	{
//		for(int j = 0; j < size ; j++)
//		{
//			cout << list[i][j];
//			//cout << **(list + i + j);
//			cout << '\t';
//		}
//		cout << endl;
//	}
//}