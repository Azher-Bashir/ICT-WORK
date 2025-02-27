//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int x[4] = { 0, 3, 0, 4 };
//	int* p = x, y, z;
//	y = *++p;
//	cout << y << endl;
//	z = *p++;
//	cout << z << endl;
//	//cout << "\ny=" << y;
//	//cout << "\nz=" << z;
//	//cout << "\n*p=" << *p;
//	int* array = new int[5];
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> array[i];
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4-i; j++)
//		{
//			if (array[i] > array[i + 1]) 
//			{
//				swap(array[i], array[i + 1]);
//			}
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		cout << array[i] << "  ";
//	}
//
//}