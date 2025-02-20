//#include <iostream>
//using namespace std;
//
//int* columnSums(int** matrix, int rows, int cols) {
//    int* sums = new int[cols]();
//    for (int i = 0; i < cols; i++) {
//        for (int j = 0; j < rows; j++) {
//            sums[i] += matrix[j][i];
//        }
//    }
//    return sums;
//}
//
//int main() {
//    int rows = 4, cols = 4;
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
//    int* sums = columnSums(matrix, rows, cols);
//    cout << "Column Sums: ";
//    for (int i = 0; i < cols; i++) {
//        cout << sums[i] << " ";
//    }
//    cout << endl;
//
//    for (int i = 0; i < rows; i++) delete[] matrix[i];
//    delete[] matrix;
//    delete[] sums;
//
//    return 0;
//}
