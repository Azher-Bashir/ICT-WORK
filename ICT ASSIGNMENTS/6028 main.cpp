//# include "PF_Assigment.h"
//
//int main()
//{
//    // Test code
//    int R, C;
//    cout << "Enter the Number of Rows of Matrix 1: ";
//    cin >> R;
//    cout << "Enter the Number of Columns of Matrix 1: ";
//    cin >> C;
//
//    int* non_zero1 = new int[R];
//    cout << "Enter the Non-Zero element count for each Row: " << endl;
//    for (int i = 0; i < R; i++)
//    {
//        cout << "Row " << i << ": ";
//        cin >> non_zero1[i];
//    }
//
//    int** Sparse_Rep1 = new int* [R];
//    for (int i = 0; i < R; i++)
//    {
//        Sparse_Rep1[i] = new int[(2 * non_zero1[i]) + 1];
//    }
//
//    cout << "Enter the Matrix in Sparse Representation form:" << endl;
//    cout << "--------------------------------------------" << endl;
//    cout << "Number" << "\t" << "Column" << "\t" << "Value" << "\t" << "Column" << "\t" << "Value" << endl;
//
//    for (int i = 0; i < R; i++)
//    {
//        for (int j = 0; j < ((2 * non_zero1[i]) + 1); j++)
//        {
//            if (j == 0)
//            {
//                Sparse_Rep1[i][j] = non_zero1[i];
//                cout << Sparse_Rep1[i][j] << "\t";
//            }
//            else
//            {
//                cin >> Sparse_Rep1[i][j];
//            }
//        }
//    }
//
//    Sparse_Matrix sp1(R, C);
//    sp1.set_Non_zero(non_zero1);
//    sp1.set_Sparse_rep(Sparse_Rep1);
//    sp1.Sparse_converter();
//    sp1.sparse_to_dense();
//
//    cout << "\nMatrix 1:\n";
//    sp1.print_Matrix();
//    sp1.print_sparse_matrix();
//
//    int row, colom;
//    cout << "Enter the Number of Rows of Matrix 2: " << endl;
//    cin >> row;
//    cout << "Enter the Number of Columns of Matrix 2: " << endl;
//    cin >> colom;
//
//    int* non_zero2 = new int[row];
//    cout << "Enter the Non-Zero element count for each Row: " << endl;
//    for (int i = 0; i < row; i++)
//    {
//        cout << "Enter the Non-Zero element count for Row " << i << ": ";
//        cin >> non_zero2[i];
//    }
//
//    // taking input in sparse matrix
//
//    int** Sparse_Rep2 = new int* [row];
//    for (int i = 0; i < row; i++)
//    {
//        Sparse_Rep2[i] = new int[(2 * non_zero2[i]) + 1];
//    }
//
//    cout << "Enter the Matrix in Sparse Representation form:" << endl;
//    cout << "--------------------------------------------" << endl;
//    cout << "Number" << "\t" << "Column" << "\t" << "Value" << "\t" << "Column" << "\t" << "Value" << endl;
//
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < ((2 * non_zero2[i]) + 1); j++)
//        {
//            if (j == 0)
//            {
//                Sparse_Rep2[i][j] = non_zero2[i];
//                cout << Sparse_Rep2[i][j] << "\t";
//            }
//            else
//            {
//                cin >> Sparse_Rep2[i][j];
//            }
//        }
//    }
//
//    Sparse_Matrix sp2;
//    sp2.set_columns(colom);
//    sp2.set_row(row);
//    sp2.set_Non_zero(non_zero2);
//    sp2.set_Sparse_rep(Sparse_Rep2);
//    sp2.Sparse_converter();
//
//    cout << "\nFinal Matrix Representation:\n";
//    sp2.print_Matrix();
//    sp2.print_sparse_matrix();
//
//    cout << "Applying Addition Operation on Sparse Matrix: " << endl;
//    Sparse_Matrix add_result = sp1.Addition_operation(sp1, sp2);
//
//    add_result.print_Matrix();
//    add_result.print_sparse_matrix();
//    cout << endl;
//    cout << "SUBTRACTION RESULT IS: " << endl;
//    Sparse_Matrix subtract_result = sp1.Subtraction_operation(sp1, sp2);
//    subtract_result.print_Matrix();
//    subtract_result.print_sparse_matrix();
//
//    // Now multiplying matrices
//    cout << "MULTIPLICATION RESULT IS: " << endl;
//    Sparse_Matrix multiply_result = sp1.multiply_matrix(sp1, sp2);
//    multiply_result.print_Matrix();
//    multiply_result.print_sparse_matrix();
//
//    // Transpose of the first matrix
//    cout << "TRANSPOSE OF FIRST MATRIX IS: " << endl;
//    Sparse_Matrix transpose_result1 = sp1.transpose();
//    transpose_result1.print_Matrix();
//    transpose_result1.print_sparse_matrix();
//
//    // Transpose of the second matrix
//    cout << "TRANSPOSE OF SECOND MATRIX IS: " << endl;
//    Sparse_Matrix transpose_result2 = sp2.transpose();
//    transpose_result2.print_Matrix();
//    transpose_result2.print_sparse_matrix();
//
//    // Deallocate memory for dynamically allocated arrays in main
//
//    for (int i = 0; i < row; i++)
//    {
//        delete[] Sparse_Rep2[i];
//    }
//    delete[] Sparse_Rep2;
//    delete[] non_zero2;
//
//    delete[] non_zero1;
//    for (int i = 0; i < R; i++)
//        delete[] Sparse_Rep1[i];
//    delete[] Sparse_Rep1;
//
//    return 0;
//}