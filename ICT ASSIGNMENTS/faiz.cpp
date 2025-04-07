//#include <iostream>
//#include "fdeclare.h"
//using namespace std;
//
//int main() {
//    int rows, cols;
//
//    cout << "Enter dimensions for matrix 1 (rows cols): ";
//    cin >> rows >> cols;
//    SparseMatrix m1(rows, cols);
//    m1.inputMatrix();
//
//    cout << "\nEnter dimensions for matrix 2 (rows cols): ";
//    cin >> rows >> cols;
//    SparseMatrix m2(rows, cols);
//    m2.inputMatrix();
//
//    cout << "\nMatrix 1:\n";
//    m1.printFullMatrix();
//    m1.printSparse();
//
//    cout << "\nMatrix 2:\n";
//    m2.printFullMatrix();
//    m2.printSparse();
//
//    cout << "\nMatrix Addition Result:\n";
//    SparseMatrix addResult = m1.add(m2);
//    addResult.printFullMatrix();
//    addResult.printSparse();
//
//    cout << "\nMatrix Subtraction Result:\n";
//    SparseMatrix subResult = m1.subtract(m2);
//    subResult.printFullMatrix();
//    subResult.printSparse();
//
//    cout << "\nMatrix Multiplication Result:\n";
//    SparseMatrix mulResult = m1.multiply(m2);
//    mulResult.printFullMatrix();
//    mulResult.printSparse();
//
//    cout << "\nTranspose of Matrix 1:\n";
//    SparseMatrix transpose1 = m1.transpose();
//    transpose1.printFullMatrix();
//    transpose1.printSparse();
//
//    cout << "\nTranspose of Matrix 2:\n";
//    SparseMatrix transpose2 = m2.transpose();
//    transpose2.printFullMatrix();
//    transpose2.printSparse();
//
//    return 0;
//}
