//# include <iostream>
//
//using namespace std;
//
//struct store
//{
//	float Laptop = 799.99;
//	float Smartphone = 599.99;
//	float Headphones = 49.99;
//	float Smartwatch = 199.99;
//	float Keyboard = 39.99;
//	float  Mouse;
//};
//
//
//
//
//int main()
//{
//	store online;
//	int rows, coloms;
//	cout << "Enter the Rows: " << endl;
//	cin >> rows;
//	cout << "Enter the number coloms: " << endl;
//	cin >> coloms;
//
//
//	cout << "Display the Products: "<<endl;
//	
//	int** Array;
//	Array = new int*[rows];
//
//	for (int i = 0; i < rows; i++)
//	{
//		Array[i] = new int[coloms];
//	}
//	cout << "Enter the Elements: " << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < coloms; j++)
//		{
//			cin >> Array[i][j];
//		}
//	}
//
//
//
//
//	for (int i = 0; i < rows; i++)
//	{
//		delete[] Array[i];
//	}
//	delete[] Array;
//
//	return 0;
//
//
//
//
//
//
//
//}