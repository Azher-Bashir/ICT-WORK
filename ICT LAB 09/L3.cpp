//#include <iostream>
//using namespace std;
//
//int** transposeMatrix(int** matrix, int rows, int cols) {
//    int** transposed = new int* [cols];
//    for (int i = 0; i < cols; i++) {
//        transposed[i] = new int[rows];
//        for (int j = 0; j < rows; j++) {
//            transposed[i][j] = matrix[j][i];
//        }
//    }
//    return transposed;
//}
//
//int main() {
//    int rows = 2, cols = 3;
//    int** matrix = new int* [rows];
//    int counter = 1;
//    for (int i = 0; i < rows; i++) {
//        matrix[i] = new int[cols];
//        for (int j = 0; j < cols; j++) {
//            matrix[i][j] = counter++;
//        }
//    }
//
//    cout << "Original Matrix:" << endl;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    int** transposed = transposeMatrix(matrix, rows, cols);
//    cout << "Transposed Matrix:" << endl;
//    for (int i = 0; i < cols; i++) {
//        for (int j = 0; j < rows; j++) {
//            cout << transposed[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    for (int i = 0; i < rows; i++) delete[] matrix[i];
//    delete[] matrix;
//    for (int i = 0; i < cols; i++) delete[] transposed[i];
//    delete[] transposed;
//
//    return 0;
//}
