//#include <iostream>
//#include "FUNCTIONS.h"
//using namespace std;
//
//// ... rest of your main function as written
//
//int main() {
//    int rows1, cols1, * nonZero1, ** sparseRep1, ** matrix1;
//
//    cout << "Enter total rows for matrix: ";
//    cin >> rows1;
//    cout << "Enter cols for the matrix: ";
//    cin >> cols1;
//
//    nonZero1 = new int[rows1];
//    cout << "Enter the non-zero elements for each row:\n";
//    for (int i = 0; i < rows1; i++) {
//        cout << "Row " << i << ": ";
//        cin >> nonZero1[i];
//    }
//
//    sparseRep1 = new int* [rows1];
//    for (int i = 0; i < rows1; i++) {
//        sparseRep1[i] = new int[3 * nonZero1[i]];
//    }
//
//    cout << "Enter the matrix in sparse format (row col value):\n";
//    for (int i = 0; i < rows1; i++) {
//        for (int j = 0; j < 3 * nonZero1[i]; j++) {
//            cin >> sparseRep1[i][j];
//        }
//    }
//
//    DenseMatrix m1(rows1, cols1);
//    m1.setNonZeroCount(nonZero1);
//    m1.setSparseRep(sparseRep1);
//    matrix1 = m1.sparseToDense();
//
//    cout << "\nFirst Matrix:";
//    m1.printDenseMatrix();
//    m1.printSparseMatrix();
//
//    int rows2, cols2, * nonZero2, ** sparseRep2, ** matrix2;
//
//    cout << "\nEnter total rows for second matrix: ";
//    cin >> rows2;
//    cout << "Enter cols for second matrix: ";
//    cin >> cols2;
//
//    nonZero2 = new int[rows2];
//    cout << "Enter the non-zero elements for each row:\n";
//    for (int i = 0; i < rows2; i++) {
//        cout << "Row " << i << ": ";
//        cin >> nonZero2[i];
//    }
//
//    sparseRep2 = new int* [rows2];
//    for (int i = 0; i < rows2; i++) {
//        sparseRep2[i] = new int[3 * nonZero2[i]];
//    }
//
//    cout << "Enter the matrix in sparse format (row col value):\n";
//    for (int i = 0; i < rows2; i++) {
//        for (int j = 0; j < 3 * nonZero2[i]; j++) {
//            cin >> sparseRep2[i][j];
//        }
//    }
//
//    DenseMatrix m2(rows2, cols2);
//    m2.setNonZeroCount(nonZero2);
//    m2.setSparseRep(sparseRep2);
//    matrix2 = m2.sparseToDense();
//
//    cout << "\nSecond Matrix:";
//    m2.printDenseMatrix();
//    m2.printSparseMatrix();
//
//    cout << "\nSubtraction Result:";
//    DenseMatrix subtractResult = m1.subtractMatrix(m2);
//    subtractResult.printDenseMatrix();
//    subtractResult.printSparseMatrix();
//    cout << "\n\nAddition Result:";
//    DenseMatrix addResult = m1.addMatrix(m2);
//    addResult.printDenseMatrix();
//    addResult.printSparseMatrix();
//
//
//    cout << "\nMultiplication Result:";
//    DenseMatrix multiplyResult = m1.multiplyMatrix(m2);
//    multiplyResult.printDenseMatrix();
//    multiplyResult.printSparseMatrix();
//
//    cout << "\nTranspose of First Matrix:";
//    DenseMatrix transposeResult1 = m1.transpose();
//    transposeResult1.printDenseMatrix();
//    transposeResult1.printSparseMatrix();
//
//    cout << "\nTranspose of Second Matrix:";
//    DenseMatrix transposeResult2 = m2.transpose();
//    transposeResult2.printDenseMatrix();
//    transposeResult2.printSparseMatrix();
//
//    // Cleanup
//    for (int i = 0; i < rows1; i++) {
//        delete[] sparseRep1[i];
//    }
//    delete[] sparseRep1;
//    delete[] nonZero1;
//
//    for (int i = 0; i < rows2; i++) {
//        delete[] sparseRep2[i];
//    }
//    delete[] sparseRep2;
//    delete[] nonZero2;
//
//    return 0;
//}
//
