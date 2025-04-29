//#include "functions.h"
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int rows1, cols1, * non_zero1, ** sparse_rep1, ** matrix1;
//    cout << "Enter total rows for first matrix: ";
//    cin >> rows1;
//    cout << "Enter cols for first matrix: ";
//    cin >> cols1;
//
//    non_zero1 = new int[rows1];
//    cout << "Enter the number of non-zero elements for each row (first matrix):\n";
//    for (int i = 0; i < rows1; i++) {
//        cout << "Row " << i << ": ";
//        cin >> non_zero1[i];
//    }
//
//    sparse_rep1 = new int* [rows1];
//    for (int i = 0; i < rows1; i++) {
//        sparse_rep1[i] = new int[3 * non_zero1[i] + 1];
//        sparse_rep1[i][0] = non_zero1[i];
//        cout << "Enter data for row " << i << " in triplets (col, value, extra):\n";
//        for (int j = 1; j < 3 * non_zero1[i] + 1; j++) {
//            cin >> sparse_rep1[i][j];
//        }
//    }
//
//    sparse_matrix m1(rows1, cols1);
//    m1.set_non_zero1(non_zero1);
//    m1.set_sparse_rep1(sparse_rep1);
//    matrix1 = m1.sparse_to_dense();
//    m1.print_matrix();
//    m1.print_sparse_matrix();
//    m1.check_if_sparse("First matrix");
//
//
//    int rows2, cols2, * non_zero2, ** sparse_rep2, ** matrix2;
//    cout << "\nEnter total rows for second matrix: ";
//    cin >> rows2;
//    cout << "Enter cols for second matrix: ";
//    cin >> cols2;
//
//    non_zero2 = new int[rows2];
//    cout << "Enter the number of non-zero elements for each row (second matrix):\n";
//    for (int i = 0; i < rows2; i++) {
//        cout << "Row " << i << ": ";
//        cin >> non_zero2[i];
//    }
//
//    sparse_rep2 = new int* [rows2];
//    for (int i = 0; i < rows2; i++) {
//        sparse_rep2[i] = new int[3 * non_zero2[i] + 1];
//        sparse_rep2[i][0] = non_zero2[i];
//        cout << "Enter data for row " << i << " in triplets (col, value, extra):\n";
//        for (int j = 1; j < 3 * non_zero2[i] + 1; j++) {
//            cin >> sparse_rep2[i][j];
//        }
//    }
//
//    sparse_matrix m2(rows2, cols2);
//    m2.set_non_zero1(non_zero2);
//    m2.set_sparse_rep1(sparse_rep2);
//    matrix2 = m2.sparse_to_dense();
//    m2.print_matrix();
//    m2.print_sparse_matrix();
//
//
//    m2.check_if_sparse("Second matrix");
//
//
//    cout << "\nADDITION RESULT:" << endl;
//    sparse_matrix add_result = m1.add_matrix(m2);
//    add_result.print_matrix();
//    add_result.print_sparse_matrix();
//    add_result.check_if_sparse("Addition result");
//
//
//    cout << "\nSUBTRACTION RESULT:" << endl;
//    sparse_matrix sub_result = m1.subtract_matrix(m2);
//    sub_result.print_matrix();
//    sub_result.print_sparse_matrix();
//    sub_result.check_if_sparse("Subtraction result");
//
//
//
//    cout << "\nMULTIPLICATION RESULT:" << endl;
//    sparse_matrix mul_result = m1.multiply_matrix(m2);
//    mul_result.print_matrix();
//    mul_result.check_if_sparse("Multiplication result");
//
//
//    cout << "\nTRANSPOSE OF FIRST MATRIX:" << endl;
//    sparse_matrix trans1 = m1.transpose();
//    trans1.print_matrix();
//    trans1.print_sparse_matrix();
//    trans1.check_if_sparse("Transpose of first matrix");
//
//    cout << "\nTRANSPOSE OF SECOND MATRIX:" << endl;
//    sparse_matrix trans2 = m2.transpose();
//    trans2.print_matrix();
//    trans2.print_sparse_matrix();
//    trans2.check_if_sparse("Transpose of SECOND matrix");
//
//    return 0;
//}
