//#include <iostream>
//using namespace std;
//
//// Function to perform matrix multiplication
//int** multiply_matrices(int** matrix1, int** matrix2, int row1, int col1, int row2, int col2)
//{
//    if (col1 != row2)
//    {
//        cout << "The matrices cannot be multiplied." << endl;
//        return nullptr;
//    }
//
//    int** result = new int* [row1];
//    for (int i = 0; i < row1; i++)
//    {
//        result[i] = new int[col2];
//    }
//
//    for (int i = 0; i < row1; i++)
//    {
//        for (int j = 0; j < col2; j++)
//        {
//            result[i][j] = 0;
//            for (int k = 0; k < col1; k++)
//            {
//                result[i][j] += matrix1[i][k] * matrix2[k][j];
//            }
//        }
//    }
//
//    return result;
//}
//
//int main()
//{
//    int row1, col1, row2, col2;
//    cout << "Enter the number of rows and columns of the first matrix: ";
//    cin >> row1 >> col1;
//    cout << "Enter the number of rows and columns of the second matrix: ";
//    cin >> row2 >> col2;
//
//    int** matrix1 = new int* [row1];
//    for (int i = 0; i < row1; i++)
//    {
//        matrix1[i] = new int[col1];
//    }
//
//    int** matrix2 = new int* [row2];
//    for (int i = 0; i < row2; i++)
//    {
//        matrix2[i] = new int[col2];
//    }
//
//    cout << "Enter the elements of the first matrix: " << endl;
//    for (int i = 0; i < row1; i++)
//    {
//        for (int j = 0; j < col1; j++)
//        {
//			cout << "Enter the element at position [" << i + 1 << "][" << j + 1 << "]: ";
//            cin >> matrix1[i][j];
//        }
//    }
//
//    cout << "Enter the elements of the second matrix: " << endl;
//    for (int i = 0; i < row2; i++)
//    {
//        for (int j = 0; j < col2; j++)
//        {
//            cout << "Enter the element at position [" << i + 1 << "][" << j + 1 << "]: ";
//            cin >> matrix2[i][j];
//        }
//    }
//
//    int** result = multiply_matrices(matrix1, matrix2, row1, col1, row2, col2);
//
//    if (result != nullptr)
//    {
//        cout << "The result of the matrix multiplication is: " << endl;
//        for (int i = 0; i < row1; i++)
//        {
//            for (int j = 0; j < col2; j++)
//            {
//                cout << result[i][j] << " ";
//            }
//            cout << endl;
//        }
//
//        for (int i = 0; i < row1; i++)
//        {
//            delete[] result[i];
//        }
//        delete[] result;
//    }
//
//    for (int i = 0; i < row1; i++)
//    {
//        delete[] matrix1[i];
//    }
//    delete[] matrix1;
//
//    for (int i = 0; i < row2; i++)
//    {
//        delete[] matrix2[i];
//    }
//    delete[] matrix2;
//
//    return 0;
//}
//
