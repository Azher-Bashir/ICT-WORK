//#include "sparse_matrix.h"
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    //DATA FOR FIRST MATRIX
//    int rows1, cols1, * non_zero1, ** sparse_rep1, ** matrix1;
//
//    cout << "Enter total rows for matrix: ";
//    cin >> rows1;
//    cout << "Enter cols for the matrix: ";
//    cin >> cols1;
//
//    non_zero1 = new int[rows1];
//    cout << "Enter the nonn_zero elements for each row: " << endl;
//    for (int i = 0; i < rows1; i++)
//    {
//        cout << "Enter the non_zero elements for " << i << " row: ";
//        cin >> non_zero1[i];
//    }
//    // initializing sparse matrix
//    sparse_rep1 = new int* [rows1];
//    for (int i = 0; i < rows1; i++)
//    {
//        sparse_rep1[i] = new int[2 * non_zero1[i] + 1];
//    }
//    // taking input in sparse matrix
//    cout << "Enter the matrix inn sparse representation: " << endl;
//    cout << "Non_zero" << '\t' << "C_no" << '\t' << "data" << '\t' << "C_no" << '\t' << "data" << endl;
//    for (int i = 0; i < rows1; i++)
//    {
//        for (int j = 0; j < (2 * non_zero1[i] + 1); j++)
//        {
//            if (j == 0)
//            {
//                sparse_rep1[i][j] = non_zero1[i];
//                cout << sparse_rep1[i][j] << '\t' << '\t';
//            }
//            else
//            {
//                cin >> sparse_rep1[i][j];
//            }
//        }
//    }
//    sparse_matrix m1(rows1, cols1);
//    m1.set_non_zero1(non_zero1);
//    m1.set_sparse_rep1(sparse_rep1);
//    matrix1 = m1.sparse_to_dense();
//    cout << "SPARSE MATRIX";
//    m1.print_matrix();
//    m1.print_sparse_matrix();
//
//    //NOW TAKING SECOND MATRIX FROM USER
//    int rows2, cols2, * non_zero2, ** sparse_rep2, ** matrix2;
//    cout << "Enter total rows for matrix: ";
//    cin >> rows2;
//    cout << "Enter cols for the matrix: ";
//    cin >> cols2;
//
//    non_zero2 = new int[rows2];
//    cout << "Enter the nonn_zero elements for each row: " << endl;
//    for (int i = 0; i < rows2; i++)
//    {
//        cout << "Enter the non_zero elements for " << i << " row: ";
//        cin >> non_zero2[i];
//    }
//    // initializing sparse matrix
//    sparse_rep2 = new int* [rows2];
//    for (int i = 0; i < rows2; i++)
//    {
//        sparse_rep2[i] = new int[2 * non_zero2[i] + 1];
//    }
//    // taking input in sparse matrix
//    cout << "Enter the matrix inn sparse representation: " << endl;
//    cout << "Non_zero" << '\t' << "C_no" << '\t' << "data" << '\t' << "C_no" << '\t' << "data" << endl;
//    for (int i = 0; i < rows2; i++)
//    {
//        for (int j = 0; j < (2 * non_zero2[i] + 1); j++)
//        {
//            if (j == 0)
//            {
//                sparse_rep2[i][j] = non_zero2[i];
//                cout << sparse_rep2[i][j] << '\t' << '\t';
//            }
//            else
//            {
//                cin >> sparse_rep2[i][j];
//            }
//        }
//    }
//    cout << endl << endl;
//    sparse_matrix m2(rows2, cols2);
//    m2.set_non_zero1(non_zero2);
//    m2.set_sparse_rep1(sparse_rep2);
//    matrix2 = m2.sparse_to_dense();
//    cout << "SPARSE MATRIX";
//    m2.print_matrix();
//    m2.print_sparse_matrix();
//
//    //NOW ADDING MATRIX
//    cout << "ADDITION RESULT IS: ";
//    sparse_matrix add_result = m1.add_matrix(m2);
//    add_result.print_matrix();
//    add_result.print_sparse_matrix();
//    //NOW SUBTRACTING MATRIX
//    cout << "SUBTRACTION RESULT IS: ";
//    sparse_matrix subtract_result = m1.subtract_matrix(m2);
//    subtract_result.print_matrix();
//    subtract_result.print_sparse_matrix();
//
//    // Now multiplying matrices
//    cout << "MULTIPLICATION RESULT IS: ";
//    sparse_matrix multiply_result = m1.multiply_matrix(m2);
//    multiply_result.print_matrix();
//    multiply_result.print_sparse_matrix();
//
//    // Transpose of the first matrix
//    cout << "TRANSPOSE OF FIRST MATRIX IS: ";
//    sparse_matrix transpose_result1 = m1.transpose();
//    transpose_result1.print_matrix();
//    transpose_result1.print_sparse_matrix();
//
//    // Transpose of the second matrix
//    cout << "TRANSPOSE OF SECOND MATRIX IS: ";
//    sparse_matrix transpose_result2 = m2.transpose();
//    transpose_result2.print_matrix();
//    transpose_result2.print_sparse_matrix();
//
//    // Deallocate memory for dynamically allocated arrays in main
//    for (int i = 0; i < rows1; i++) {
//        delete[] sparse_rep1[i];
//    }
//    delete[] sparse_rep1;
//    delete[] non_zero1;
//
//    for (int i = 0; i < rows2; i++) {
//        delete[] sparse_rep2[i];
//    }
//    delete[] sparse_rep2;
//    delete[] non_zero2;
//
//    return 0;
//}