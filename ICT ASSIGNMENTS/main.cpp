//#include "sparse_matrix.h"
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    // DATA FOR FIRST MATRIX
//    int rows1, cols1, * non_zero1, ** sparse_rep1, ** matrix1;
//
//    cout << "Enter total rows for matrix: ";
//    cin >> rows1;
//    cout << "Enter cols for the matrix: ";
//    cin >> cols1;
//
//    non_zero1 = new int[rows1];
//    cout << "Enter the non-zero elements for each row: " << endl;
//    for (int i = 0; i < rows1; i++)
//    {
//        cout << "Enter the non-zero elements for row " << i << ": ";
//        cin >> non_zero1[i];
//    }
//
//    // Initializing sparse matrix
//    sparse_rep1 = new int* [rows1];
//    for (int i = 0; i < rows1; i++)
//    {
//        sparse_rep1[i] = new int[2 * non_zero1[i] + 1];
//    }
//
//    // Taking input in sparse matrix
//    cout << "Enter the matrix in sparse representation: " << endl;
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
//
//    sparse_matrix m1(rows1, cols1);
//    m1.set_non_zero1(non_zero1);
//    m1.set_sparse_rep1(sparse_rep1);
//    matrix1 = m1.sparse_to_dense();
//
//    // Check if the first matrix is sparse
//    if (m1.is_sparse())
//    {
//        cout << "The first matrix is sparse." << endl;
//    }
//    else
//    {
//        cout << "The first matrix is not sparse." << endl;
//    }
//
//    cout << "SPARSE MATRIX";
//    m1.print_matrix();
//    m1.print_sparse_matrix();
//
//    // NOW TAKING SECOND MATRIX FROM USER
//    int rows2, cols2, * non_zero2, ** sparse_rep2, ** matrix2;
//    cout << "Enter total rows for matrix: ";
//    cin >> rows2;
//    cout << "Enter cols for the matrix: ";
//    cin >> cols2;
//
//    non_zero2 = new int[rows2];
//    cout << "Enter the non-zero elements for each row: " << endl;
//    for (int i = 0; i < rows2; i++)
//    {
//        cout << "Enter the non-zero elements for row " << i << ": ";
//        cin >> non_zero2[i];
//    }
//
//    // Initializing sparse matrix
//    sparse_rep2 = new int* [rows2];
//    for (int i = 0; i < rows2; i++)
//    {
//        sparse_rep2[i] = new int[2 * non_zero2[i] + 1];
//    }
//
//    // Taking input in sparse matrix
//    cout << "Enter the matrix in sparse representation: " << endl;
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
//
//    sparse_matrix m2(rows2, cols2);
//    m2.set_non_zero1(non_zero2);
//    m2.set_sparse_rep1(sparse_rep2);
//    matrix2 = m2.sparse_to_dense();
//
//    // Check if the second matrix is sparse
//    if (m2.is_sparse())
//    {
//        cout << "The second matrix is sparse." << endl;
//    }
//    else
//    {
//        cout << "The second matrix is not sparse." << endl;
//    }
//
//    cout << "SPARSE MATRIX";
//    m2.print_matrix();
//    m2.print_sparse_matrix();
//
//    // ADDING MATRICES
//    cout << "ADDITION RESULT IS: ";
//    sparse_matrix add_result = m1.add_matrix(m2);
//    add_result.print_matrix();
//    add_result.print_sparse_matrix();
//
//    // Check if the addition result is sparse
//    if (add_result.is_sparse())
//    {
//        cout << "The addition result is sparse." << endl;
//    }
//    else
//    {
//        cout << "The addition result is not sparse." << endl;
//    }
//
//    // SUBTRACTING MATRICES
//    cout << "SUBTRACTION RESULT IS: ";
//    sparse_matrix subtract_result = m1.subtract_matrix(m2);
//    subtract_result.print_matrix();
//    subtract_result.print_sparse_matrix();
//
//    // Check if the subtraction result is sparse
//    if (subtract_result.is_sparse())
//    {
//        cout << "The subtraction result is sparse." << endl;
//    }
//    else
//    {
//        cout << "The subtraction result is not sparse." << endl;
//    }
//
//    // MULTIPLYING MATRICES
//    cout << "MULTIPLICATION RESULT IS: ";
//    sparse_matrix multiply_result = m1.multiply_matrix(m2);
//    multiply_result.print_matrix();
//    multiply_result.print_sparse_matrix();
//
//    // Check if the multiplication result is sparse
//    if (multiply_result.is_sparse())
//    {
//        cout << "The multiplication result is sparse." << endl;
//    }
//    else
//    {
//        cout << "The multiplication result is not sparse." << endl;
//    }
//
//    // TRANSPOSE OF FIRST MATRIX
//    cout << "TRANSPOSE OF FIRST MATRIX IS: ";
//    sparse_matrix transpose_result1 = m1.transpose();
//    transpose_result1.print_matrix();
//    transpose_result1.print_sparse_matrix();
//
//    // Check if the transpose of the first matrix is sparse
//    if (transpose_result1.is_sparse())
//    {
//        cout << "The transpose of the first matrix is sparse." << endl;
//    }
//    else
//    {
//        cout << "The transpose of the first matrix is not sparse." << endl;
//    }
//
//    // TRANSPOSE OF SECOND MATRIX
//    cout << "TRANSPOSE OF SECOND MATRIX IS: ";
//    sparse_matrix transpose_result2 = m2.transpose();
//    transpose_result2.print_matrix();
//    transpose_result2.print_sparse_matrix();
//
//    // Check if the transpose of the second matrix is sparse
//    if (transpose_result2.is_sparse())
//    {
//        cout << "The transpose of the second matrix is sparse." << endl;
//    }
//    else
//    {
//        cout << "The transpose of the second matrix is not sparse." << endl;
//    }
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
