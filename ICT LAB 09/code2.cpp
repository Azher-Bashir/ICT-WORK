//#include <iostream>
//
//using namespace std;
//
//void allocateAndInitialize(int**& matrix, int rows, int cols) {
//    matrix = new int* [rows];
//    for (int i = 0; i < rows; ++i) {
//        matrix[i] = new int[cols];
//    }
//
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            matrix[i][j] = i * j;
//        }
//    }
//}
//
//void printMatrix(int** matrix, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int rows;
//    int cols;
//    cout << " enter the rows" << endl;
//    cin >> rows;
//    cout << " enter the columns" << endl;
//    cin >> cols;
//
//    int** matrix = 0;
//
//    allocateAndInitialize(matrix, rows, cols);
//
//    cout << "The matrix is:" << endl;
//    printMatrix(matrix, rows, cols);
//
//    for (int i = 0; i < rows; ++i) {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//
//    return 0;
//}
