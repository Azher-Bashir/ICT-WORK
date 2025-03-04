////#include <iostream>
////using namespace std;
////void createarray(int** &array, int rows, int coloumns)
////{
////	array = new int* [rows];
////	for (int x = 0; x < rows; x++)
////	{
////		array[x] = new int[coloumns];
////	}
////}
////void getdata(int** array, int rows, int coloumns)
////{
////	for (int x = 0; x < rows; x++)
////	{
////		for (int i = 0; i < coloumns; i++)
////		{
////			cout << "Enter the element for [" << x << "][" << i << "]: ";
////			cin >> array[x][i];
////		}
////	}
////}
////int** multiplication(int** array1, int** array2, int row1, int col1, int row2, int col2)
////{
////	int** result;
////	if (col1 != row2)
////	{
////		cout << "multiplication not possible";
////		return NULL;
////	}
////	else
////	{
////		result = new int* [row1];
////		for (int x = 0; x < row1; x++)
////		{
////			result[x] = new int[col2];
////		}
////		for (int x = 0; x < row1; x++)
////		{
////			for (int i = 0; i < col2; i++)
////			{
////				result[x][i] += array1[x][i] * array2[x][i];
////			}
////		}
////		return result;
////	}
////}
////int main()
////{
////	int** array1 = NULL, ** array2 = NULL, ** result, row1, row2, col1, col2;
////	cout << "Enter the rows for the first matrix: "; cin >> row1;
////	cout << "Enter the coloumns for the first matrix: "; cin >> col1;
////	cout << "Enter the rows for the second matrix: "; cin >> row2;
////	cout << "Enter the coloumns for the second matrix: "; cin >> col2;
////	//for matrix multiplicaion to be possible rows of first matrix should be equal to coloumns of the second matix
////	createarray(array1, row1, col1);
////	createarray(array2, row2, col2);
////	getdata(array1, row1, col1);
////	getdata(array2, row2, col2);
////	result = multiplication(array1, array2, row1, col1, row2, col2);
////	for (int x = 0; x < row1; x++)
////	{
////		for (int i = 0; i < col2; i++)
////		{
////			cout << result[x][i];
////		}
////		cout << endl;
////	}
////	system("Pause");
////}
//
//
//
//
//
//#include <iostream>
//using namespace std;
//
//void createarray(int**& array, int rows, int coloumns)
//{
//    array = new int* [rows];
//    for (int x = 0; x < rows; x++)
//    {
//        array[x] = new int[coloumns];
//    }
//}
//
//void getdata(int** array, int rows, int coloumns)
//{
//    for (int x = 0; x < rows; x++)
//    {
//        for (int i = 0; i < coloumns; i++)
//        {
//            cout << "Enter the element for [" << x << "][" << i << "]: ";
//            cin >> array[x][i];
//        }
//    }
//}
//
//int** multiplication(int** array1, int** array2, int row1, int col1, int row2, int col2)
//{
//    int** result;
//    if (col1 != row2)
//    {
//        cout << "Multiplication not possible";
//        return NULL;
//    }
//    else
//    {
//        result = new int* [row1];
//        for (int x = 0; x < row1; x++)
//        {
//            result[x] = new int[col2];
//        }
//
//         
//        for (int x = 0; x < row1; x++)
//        {
//            for (int i = 0; i < col2; i++)
//            {
//                result[x][i] = 0;
//                for (int k = 0; k < col1; k++)
//                {
//                    result[x][i] += array1[x][k] * array2[k][i];
//                }
//            }
//        }
//        return result;
//    }
//}
//
//int main()
//{
//    int** array1 = NULL, ** array2 = NULL, ** result, row1, row2, col1, col2;
//    cout << "Enter the rows for the first matrix: "; cin >> row1;
//    cout << "Enter the coloumns for the first matrix: "; cin >> col1;
//    cout << "Enter the rows for the second matrix: "; cin >> row2;
//    cout << "Enter the coloumns for the second matrix: "; cin >> col2;
//    // For matrix multiplication to be possible, columns of the first matrix should be equal to rows of the second matrix
//    createarray(array1, row1, col1);
//    createarray(array2, row2, col2);
//    getdata(array1, row1, col1);
//    getdata(array2, row2, col2);
//    result = multiplication(array1, array2, row1, col1, row2, col2);
//    if (result != NULL)
//    {
//        for (int x = 0; x < row1; x++)
//        {
//            for (int i = 0; i < col2; i++)
//            {
//                cout << result[x][i] << " ";
//            }
//            cout << endl;
//        }
//    }
//    // Free allocated memory
//    for (int x = 0; x < row1; x++)
//    {
//        delete[] array1[x];
//    }
//    delete[] array1;
//
//    for (int x = 0; x < row2; x++)
//    {
//        delete[] array2[x];
//    }
//    delete[] array2;
//
//    if (result != NULL)
//    {
//        for (int x = 0; x < row1; x++)
//        {
//            delete[] result[x];
//        }
//        delete[] result;
//    }
//
//    system("Pause");
//    return 0;
//}