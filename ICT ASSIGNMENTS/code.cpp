//#include "sparse.h"
//
//int main() {
//    int rows1, cols1, rows2, cols2;
//
//    cout << "Enter the number of rows for the first sparse matrix: ";
//    cin >> rows1;
//    cout << "Enter the number of columns for the first sparse matrix: ";
//    cin >> cols1;
//    SparseMatrix matrix1(rows1, cols1);
//    cout << "\nInput for Matrix 1:\n";
//    matrix1.input();
//    cout << "\nMatrix 1:\n";
//    matrix1.display();
//
//    cout << "Enter the number of rows for the second sparse matrix: ";
//    cin >> rows2;
//    cout << "Enter the number of columns for the second sparse matrix: ";
//    cin >> cols2;
//    SparseMatrix matrix2(rows2, cols2);
//    cout << "\nInput for Matrix 2:\n";
//    matrix2.input();
//    cout << "\nMatrix 2:\n";
//    matrix2.display();
//
//    cout << "\nPerforming Addition:\n";
//    matrix1.add(matrix2);
//    cout << "\nPerforming Subtraction:\n";
//    matrix1.subtract(matrix2);
//    cout << "\nPerforming Multiplication:\n";
//    matrix1.multiply(matrix2);
//    cout << "\nTranspose of Matrix 1:\n";
//    matrix1.transpose();
//
//    return 0;
//}
