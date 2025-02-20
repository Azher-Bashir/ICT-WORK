//#include <iostream>
//using namespace std;
//
//// Task 5: Swap rows in a dynamically allocated matrix
//void swapRows(int** matrix, int first_row, int second_row, int cols) {
//    for (int i = 0; i < cols; i++) {
//        swap(matrix[first_row][i], matrix[second_row][i]);
//    }
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
//    swapRows(matrix, 0, 2, cols);
//
//    cout << "Matrix after swapping rows 0 and 2:" << endl;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    for (int i = 0; i < rows; i++) delete[] matrix[i];
//    delete[] matrix;
//
//    return 0;
//}