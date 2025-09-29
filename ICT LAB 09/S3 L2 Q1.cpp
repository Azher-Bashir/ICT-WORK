//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows, cols;
//    cout << "Enter number of rows: ";
//    cin >> rows;
//    cout << "Enter number of columns: ";
//    cin >> cols;
//    int** arr2D = new int*[rows];
//    for (int i = 0; i < rows; ++i) {
//        arr2D[i] = new int[cols];
//    }
//    cout << "Enter elements of the matrix:\n";
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cin >> arr2D[i][j];
//        }
//    }
//    int* arr1D = new int[rows * cols];
//    int idx = 0;
//    for (int col = 0; col < cols; ++col) {
//        for (int row = 0; row < rows; ++row) {
//            arr1D[idx++] = arr2D[row][col];
//        }
//    }
//    cout << "1D array in column-major order:\n";
//    for (int i = 0; i < rows * cols; ++i) {
//        cout << arr1D[i] << " ";
//    }
//    cout << endl;
//    for (int i = 0; i < rows; ++i) {
//        delete[] arr2D[i];
//    }
//    delete[] arr2D;
//    delete[] arr1D;
//
//    return 0;
//}