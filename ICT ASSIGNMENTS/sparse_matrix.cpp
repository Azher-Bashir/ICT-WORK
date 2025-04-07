////#include<iostream>
////using namespace std;
////
////class sparse_matrix
////{
////private:
////    int rows, cols;
////    int* non_zero;
////    int** sparse_rep;
////    int** matrix;
////public:
////    sparse_matrix();
////    sparse_matrix(int, int);
////    //~sparse_matrix(); // Destructor
////    void set_non_zero1(int*);
////    void set_rows(int);
////    void set_cols(int);
////    int* get_non_zero();
////    int get_rows();
////    int get_cols();
////    void set_sparse_rep1(int**);
////    int** sparse_to_dense();
////    void print_matrix();
////    void print_sparse_matrix();
////    void dense_to_sparse(int** result_matrix);
////    sparse_matrix add_matrix(sparse_matrix&);
////    sparse_matrix subtract_matrix(sparse_matrix&);
////    sparse_matrix multiply_matrix(sparse_matrix&);
////    sparse_matrix transpose();
////};
////
////
////
////
////
////sparse_matrix::sparse_matrix()
////{
////    rows = 0;
////    cols = 0;
////    non_zero = nullptr;
////    sparse_rep = nullptr;
////    matrix = nullptr;
////}
////
////sparse_matrix::sparse_matrix(int rows, int cols)
////{
////    this->rows = rows;
////    this->cols = cols;
////    non_zero = nullptr;
////    sparse_rep = nullptr;
////    matrix = nullptr;
////
////    matrix = new int* [this->rows];
////    for (int i = 0; i < this->rows; i++)
////    {
////        matrix[i] = new int[this->cols];
////    }
////}
////
////void sparse_matrix::set_non_zero1(int* non_zero)
////{
////    this->non_zero = non_zero;
////}
////
////void sparse_matrix::set_rows(int rows)
////{
////    this->rows = rows;
////}
////
////void sparse_matrix::set_cols(int cols)
////{
////    this->cols = cols;
////}
////
////int* sparse_matrix::get_non_zero()
////{
////    return non_zero;
////}
////
////int sparse_matrix::get_rows()
////{
////    return rows;
////}
////
////int sparse_matrix::get_cols()
////{
////    return cols;
////}
////
////void sparse_matrix::set_sparse_rep1(int** sparse)
////{
////    sparse_rep = sparse;
////}
////
////int** sparse_matrix::sparse_to_dense()
////{
////    for (int i = 0; i < rows; i++)
////    {
////        for (int j = 0; j < cols; j++)
////        {
////            matrix[i][j] = 0;
////        }
////    }
////
////    for (int i = 0; i < rows; i++)
////    {
////        for (int j = 0; j < non_zero[i]; j++)
////        {
////            if (sparse_rep[i][0] != 0)
////            {
////                int col_no = sparse_rep[i][(2 * j) + 1];
////                int value = sparse_rep[i][2 * j + 2];
////                matrix[i][col_no] = value;
////            }
////        }
////    }
////    return matrix;
////}
////
////void sparse_matrix::print_matrix()
////{
////    cout << endl;
////    for (int i = 0; i < rows; i++)
////    {
////        for (int j = 0; j < cols; j++)
////        {
////            cout << matrix[i][j] << " ";
////        }
////        cout << endl;
////    }
////}
////
////void sparse_matrix::print_sparse_matrix()
////{
////    cout << "Sparse Matrix Representation:" << endl;
////    for (int i = 0; i < rows; i++)
////    {
////        cout << "Row " << i << ": ";
////        for (int j = 0; j < 2 * non_zero[i] + 1; j++)
////        {
////            cout << sparse_rep[i][j] << " ";
////        }
////        cout << endl;
////    }
////}
////
////sparse_matrix sparse_matrix::add_matrix(sparse_matrix& other)
////{
////    if (rows != other.get_rows() || cols != other.get_cols())
////    {
////        cout << "!!! MATRIX ADDITION IS NOT POSSIBLE !!!";
////        return sparse_matrix();
////    }
////    else
////    {
////        int** add_result = new int* [rows];
////        int* add_non_zero = new int[rows];
////        bool all_zero = true; // Flag to check if all entries are zero
////
////        for (int i = 0; i < rows; i++)
////        {
////            int max_non_zero = non_zero[i] + other.get_non_zero()[i];
////            add_result[i] = new int[2 * max_non_zero + 1];
////            add_result[i][0] = 0; // Initialize the count of non-zero elements  
////            int k = 1; // Index for add_result  
////            int j1 = 1, j2 = 1; // Indices for sparse_rep and other.sparse_rep  
////
////            // Traverse through both sparse representations and add the values  
////            while (j1 < 2 * non_zero[i] + 1 && j2 < 2 * other.get_non_zero()[i] + 1)
////            {
////                if (sparse_rep[i][j1] < other.sparse_rep[i][j2]) // First matrix index smaller  
////                {
////                    add_result[i][k++] = sparse_rep[i][j1++];  // Add column index from the first matrix  
////                    add_result[i][k++] = sparse_rep[i][j1++];  // Add value from the first matrix  
////                    all_zero = false; // Found a non-zero element
////                }
////                else if (sparse_rep[i][j1] > other.sparse_rep[i][j2]) // Second matrix index smaller  
////                {
////                    add_result[i][k++] = other.sparse_rep[i][j2++];  // Add column index from the second matrix  
////                    add_result[i][k++] = other.sparse_rep[i][j2++];  // Add value from the second matrix  
////                    all_zero = false; // Found a non-zero element
////                }
////                else // Both matrices have non-zero elements at the same position  
////                {
////                    add_result[i][k++] = sparse_rep[i][j1++];  // Column index is the same for both  
////                    int sum = sparse_rep[i][j1++] + other.sparse_rep[i][++j2]; // Sum the values  
////                    j2++;
////                    if (sum != 0) {
////                        add_result[i][k++] = sum; // Add the sum if it's non-zero
////                        all_zero = false; // Found a non-zero element
////                    }
////                }
////            }
////
////            // Add remaining elements from the first matrix, if any  
////            while (j1 < 2 * non_zero[i] + 1)
////            {
////                add_result[i][k++] = sparse_rep[i][j1++];
////                add_result[i][k++] = sparse_rep[i][j1++];
////                all_zero = false; // Found a non-zero element
////            }
////
////            // Add remaining elements from the second matrix, if any  
////            while (j2 < 2 * other.get_non_zero()[i] + 1)
////            {
////                add_result[i][k++] = other.sparse_rep[i][j2++];
////                add_result[i][k++] = other.sparse_rep[i][j2++];
////                all_zero = false; // Found a non-zero element
////            }
////
////            add_result[i][0] = (k - 1) / 2; // Update the count of non-zero elements  
////            add_non_zero[i] = add_result[i][0]; // Store the count of non-zero elements in this row  
////        }
////
////        if (all_zero) {
////            // If all entries are zero, update the sparse representation accordingly
////            for (int i = 0; i < rows; i++) {
////                delete[] add_result[i];
////                add_result[i] = new int[1];
////                add_result[i][0] = 0;
////                add_non_zero[i] = 0;
////            }
////        }
////
////        sparse_matrix result(rows, cols);
////        result.set_non_zero1(add_non_zero);  // Set non-zero element counts for the result  
////        result.set_sparse_rep1(add_result);  // Set sparse representation for the result  
////        result.sparse_to_dense();            // Convert sparse representation to dense format  
////        return result;
////    }
////}
////
////sparse_matrix sparse_matrix::subtract_matrix(sparse_matrix& other)
////{
////    if (rows != other.get_rows() || cols != other.get_cols())
////    {
////        cout << "!!! MATRIX SUBTRACTION IS NOT POSSIBLE !!!";
////        return sparse_matrix();
////    }
////    else
////    {
////        int** subtract_result = new int* [rows];
////        int* subtract_non_zero = new int[rows];
////        bool all_zero = true; // Flag to check if all entries are zero
////
////        for (int i = 0; i < rows; i++)
////        {
////            int max_non_zero = non_zero[i] + other.get_non_zero()[i];
////            subtract_result[i] = new int[2 * max_non_zero + 1];
////            subtract_result[i][0] = 0; // Initialize the count of non-zero elements  
////            int k = 1; // Index for subtract_result  
////            int j1 = 1, j2 = 1; // Indices for sparse_rep and other.sparse_rep  
////
////            // Traverse through both sparse representations and subtract the values  
////            while (j1 < 2 * non_zero[i] + 1 && j2 < 2 * other.get_non_zero()[i] + 1)
////            {
////                if (sparse_rep[i][j1] < other.sparse_rep[i][j2]) // First matrix index smaller  
////                {
////                    subtract_result[i][k++] = sparse_rep[i][j1++];  // Add column index from the first matrix  
////                    subtract_result[i][k++] = sparse_rep[i][j1++];  // Add value from the first matrix  
////                    all_zero = false; // Found a non-zero element
////                }
////                else if (sparse_rep[i][j1] > other.sparse_rep[i][j2]) // Second matrix index smaller  
////                {
////                    subtract_result[i][k++] = other.sparse_rep[i][j2++];  // Add column index from the second matrix  
////                    subtract_result[i][k++] = -other.sparse_rep[i][j2++];  // Subtract value from the second matrix  
////                    all_zero = false; // Found a non-zero element
////                }
////                else // Both matrices have non-zero elements at the same position  
////                {
////                    subtract_result[i][k++] = sparse_rep[i][j1++];  // Column index is the same for both  
////                    int diff = sparse_rep[i][j1++] - other.sparse_rep[i][++j2]; // Subtract the values  
////                    j2++;
////                    if (diff != 0) {
////                        subtract_result[i][k++] = diff; // Add the difference if it's non-zero
////                        all_zero = false; // Found a non-zero element
////                    }
////                }
////            }
////
////            // Add remaining elements from the first matrix, if any  
////            while (j1 < 2 * non_zero[i] + 1)
////            {
////                subtract_result[i][k++] = sparse_rep[i][j1++];
////                subtract_result[i][k++] = sparse_rep[i][j1++];
////                all_zero = false; // Found a non-zero element
////            }
////
////            // Add remaining elements from the second matrix, if any  
////            while (j2 < 2 * other.get_non_zero()[i] + 1)
////            {
////                subtract_result[i][k++] = other.sparse_rep[i][j2++];
////                subtract_result[i][k++] = -other.sparse_rep[i][j2++];
////                all_zero = false; // Found a non-zero element
////            }
////
////            subtract_result[i][0] = (k - 1) / 2; // Update the count of non-zero elements  
////            subtract_non_zero[i] = subtract_result[i][0]; // Store the count of non-zero elements in this row  
////        }
////
////        if (all_zero) {
////            // If all entries are zero, update the sparse representation accordingly
////            for (int i = 0; i < rows; i++) {
////                delete[] subtract_result[i];
////                subtract_result[i] = new int[1];
////                subtract_result[i][0] = 0;
////                subtract_non_zero[i] = 0;
////            }
////        }
////
////        sparse_matrix result(rows, cols);
////        result.set_non_zero1(subtract_non_zero);  // Set non-zero element counts for the result  
////        result.set_sparse_rep1(subtract_result);  // Set sparse representation for the result  
////        result.sparse_to_dense();            // Convert sparse representation to dense format  
////        return result;
////    }
////}
////
////void sparse_matrix::dense_to_sparse(int** dense_matrix)
////{
////    int* result_non_zero = new int[rows]();
////    int** result_sparse_rep = new int* [rows];
////
////    for (int i = 0; i < rows; i++)
////    {
////        int count = 0;
////        for (int j = 0; j < cols; j++)
////        {
////            if (dense_matrix[i][j] != 0)
////            {
////                count++;
////            }
////        }
////        result_non_zero[i] = count;
////        result_sparse_rep[i] = new int[2 * count + 1];
////        result_sparse_rep[i][0] = count;
////        int index = 1;
////        for (int j = 0; j < cols; j++)
////        {
////            if (dense_matrix[i][j] != 0)
////            {
////                result_sparse_rep[i][index++] = j;
////                result_sparse_rep[i][index++] = dense_matrix[i][j];
////            }
////        }
////    }
////
////    set_non_zero1(result_non_zero);
////    set_sparse_rep1(result_sparse_rep);
////}
////void convert_dense_to_sparse(int** dense_matrix, int rows, int cols, int*& result_non_zero, int**& result_sparse_rep)
////{
////    result_non_zero = new int[rows]();
////    result_sparse_rep = new int* [rows];
////
////    for (int i = 0; i < rows; i++)
////    {
////        int count = 0;
////        for (int j = 0; j < cols; j++)
////        {
////            if (dense_matrix[i][j] != 0)
////            {
////                count++;
////            }
////        }
////        result_non_zero[i] = count;
////        result_sparse_rep[i] = new int[2 * count + 1];
////        result_sparse_rep[i][0] = count;
////        int index = 1;
////        for (int j = 0; j < cols; j++)
////        {
////            if (dense_matrix[i][j] != 0)
////            {
////                result_sparse_rep[i][index++] = j;
////                result_sparse_rep[i][index++] = dense_matrix[i][j];
////            }
////        }
////    }
////}
////sparse_matrix sparse_matrix::multiply_matrix(sparse_matrix& other)
////{
////    if (cols != other.get_rows())
////    {
////        cout << "!!! MATRIX MULTIPLICATION IS NOT POSSIBLE !!!";
////        return sparse_matrix();
////    }
////
////    // Convert both matrices to dense format
////    int** dense_matrix1 = this->sparse_to_dense();
////    int** dense_matrix2 = other.sparse_to_dense();
////
////    // Initialize the result matrix
////    int** result_matrix = new int* [rows];
////    for (int i = 0; i < rows; i++)
////    {
////        result_matrix[i] = new int[other.get_cols()]();
////    }
////
////    // Perform matrix multiplication
////    for (int i = 0; i < rows; i++)
////    {
////        for (int j = 0; j < other.get_cols(); j++)
////        {
////            for (int k = 0; k < cols; k++)
////            {
////                result_matrix[i][j] += dense_matrix1[i][k] * dense_matrix2[k][j];
////            }
////        }
////    }
////
////    // Convert the result matrix back to sparse format
////    int* result_non_zero;
////    int** result_sparse_rep;
////    convert_dense_to_sparse(result_matrix, rows, other.get_cols(), result_non_zero, result_sparse_rep);
////
////    sparse_matrix result(rows, other.get_cols());
////    result.set_non_zero1(result_non_zero);
////    result.set_sparse_rep1(result_sparse_rep);
////    result.sparse_to_dense();
////
////    // Free allocated memory for result_matrix
////    for (int i = 0; i < rows; i++)
////    {
////        delete[] result_matrix[i];
////    }
////    delete[] result_matrix;
////
////    return result;
////}
////
////sparse_matrix sparse_matrix::transpose() {
////    int** transposed_sparse_rep = new int* [cols];
////    int* transposed_non_zero = new int[cols]();
////
////    // Count the number of non-zero elements in each column
////    for (int i = 0; i < rows; i++) {
////        for (int j = 1; j < 2 * non_zero[i] + 1; j += 2) {
////            int col = sparse_rep[i][j];
////            transposed_non_zero[col]++;
////        }
////    }
////
////    // Allocate memory for the transposed sparse representation
////    for (int i = 0; i < cols; i++) {
////        transposed_sparse_rep[i] = new int[2 * transposed_non_zero[i] + 1];
////        transposed_sparse_rep[i][0] = transposed_non_zero[i];
////    }
////
////    // Fill the transposed sparse representation
////    int* current_index = new int[cols]();
////    for (int i = 0; i < rows; i++) {
////        for (int j = 1; j < 2 * non_zero[i] + 1; j += 2) {
////            int col = sparse_rep[i][j];
////            int value = sparse_rep[i][j + 1];
////            int index = current_index[col] * 2 + 1;
////            transposed_sparse_rep[col][index] = i;
////            transposed_sparse_rep[col][index + 1] = value;
////            current_index[col]++;
////        }
////    }
////
////    delete[] current_index;
////
////    sparse_matrix transposed_matrix(cols, rows);
////    transposed_matrix.set_non_zero1(transposed_non_zero);
////    transposed_matrix.set_sparse_rep1(transposed_sparse_rep);
////    transposed_matrix.sparse_to_dense();
////
////    return transposed_matrix;
////}
////
////
////int main()
////{
////    //DATA FOR FIRST MATRIX -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
////    int rows1, cols1, * non_zero1, ** sparse_rep1, ** matrix1;
////
////    cout << "Enter total rows for matrix: ";
////    cin >> rows1;
////    cout << "Enter cols for the matrix: ";
////    cin >> cols1;
////
////    non_zero1 = new int[rows1];
////    cout << "Enter the nonn_zero elements for each row: " << endl;
////    for (int i = 0; i < rows1; i++)
////    {
////        cout << "Enter the non_zero elements for " << i << " row: ";
////        cin >> non_zero1[i];
////    }
////    // initializing sparse matrix
////    sparse_rep1 = new int* [rows1];
////    for (int i = 0; i < rows1; i++)
////    {
////        sparse_rep1[i] = new int[2 * non_zero1[i] + 1];
////    }
////    // taking input in sparse matrix
////    cout << "Enter the matrix inn sparse representation: " << endl;
////    cout << "Non_zero" << '\t' << "C_no" << '\t' << "data" << '\t' << "C_no" << '\t' << "data" << endl;
////    for (int i = 0; i < rows1; i++)
////    {
////        for (int j = 0; j < (2 * non_zero1[i] + 1); j++)
////        {
////            if (j == 0)
////            {
////                sparse_rep1[i][j] = non_zero1[i];
////                cout << sparse_rep1[i][j] << '\t' << '\t';
////            }
////            else
////            {
////                cin >> sparse_rep1[i][j];
////            }
////        }
////    }
////    sparse_matrix m1(rows1, cols1);
////    m1.set_non_zero1(non_zero1);
////    m1.set_sparse_rep1(sparse_rep1);
////    matrix1 = m1.sparse_to_dense();
////    cout << "SPARSE MATRIX";
////    m1.print_matrix();
////    m1.print_sparse_matrix();
////
////    //NOW TAKING SECOND MATRIX FROM USER-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
////    int rows2, cols2, * non_zero2, ** sparse_rep2, ** matrix2;
////    cout << "Enter total rows for matrix: ";
////    cin >> rows2;
////    cout << "Enter cols for the matrix: ";
////    cin >> cols2;
////
////    non_zero2 = new int[rows2];
////    cout << "Enter the nonn_zero elements for each row: " << endl;
////    for (int i = 0; i < rows2; i++)
////    {
////        cout << "Enter the non_zero elements for " << i << " row: ";
////        cin >> non_zero2[i];
////    }
////    // initializing sparse matrix
////    sparse_rep2 = new int* [rows2];
////    for (int i = 0; i < rows2; i++)
////    {
////        sparse_rep2[i] = new int[2 * non_zero2[i] + 1];
////    }
////    // taking input in sparse matrix
////    cout << "Enter the matrix inn sparse representation: " << endl;
////    cout << "Non_zero" << '\t' << "C_no" << '\t' << "data" << '\t' << "C_no" << '\t' << "data" << endl;
////    for (int i = 0; i < rows2; i++)
////    {
////        for (int j = 0; j < (2 * non_zero2[i] + 1); j++)
////        {
////            if (j == 0)
////            {
////                sparse_rep2[i][j] = non_zero2[i];
////                cout << sparse_rep2[i][j] << '\t' << '\t';
////            }
////            else
////            {
////                cin >> sparse_rep2[i][j];
////            }
////        }
////    }
////    cout << endl << endl;
////    sparse_matrix m2(rows2, cols2);
////    m2.set_non_zero1(non_zero2);
////    m2.set_sparse_rep1(sparse_rep2);
////    matrix2 = m2.sparse_to_dense();
////    cout << "SPARSE MATRIX";
////    m2.print_matrix();
////    m2.print_sparse_matrix();
////
////    //NOW ADDING MATRIX-_-
////    cout << "ADDITION RESULT IS: ";
////    sparse_matrix add_result = m1.add_matrix(m2);
////    add_result.print_matrix();
////    add_result.print_sparse_matrix();
////    //NOW SUBTRACTING MATRIX-_-
////    cout << "SUBTRACTION RESULT IS: ";
////    sparse_matrix subtract_result = m1.subtract_matrix(m2);
////    subtract_result.print_matrix();
////    subtract_result.print_sparse_matrix();
////
////    // Now multiplying matrices
////    cout << "MULTIPLICATION RESULT IS: ";
////    sparse_matrix multiply_result = m1.multiply_matrix(m2);
////    multiply_result.print_matrix();
////    multiply_result.print_sparse_matrix();
////
////
////    // Transpose of the first matrix
////    cout << "TRANSPOSE OF FIRST MATRIX IS: ";
////    sparse_matrix transpose_result1 = m1.transpose();
////    transpose_result1.print_matrix();
////    transpose_result1.print_sparse_matrix();
////
////    // Transpose of the second matrix
////    cout << "TRANSPOSE OF SECOND MATRIX IS: ";
////    sparse_matrix transpose_result2 = m2.transpose();
////    transpose_result2.print_matrix();
////    transpose_result2.print_sparse_matrix();
////
////    // Deallocate memory for dynamically allocated arrays in main
////    for (int i = 0; i < rows1; i++) {
////        delete[] sparse_rep1[i];
////    }
////    delete[] sparse_rep1;
////    delete[] non_zero1;
////
////    for (int i = 0; i < rows2; i++) {
////        delete[] sparse_rep2[i];
////    }
////    delete[] sparse_rep2;
////    delete[] non_zero2;
////
////
////    return 0;
////}
//
//
//
//
//
//
//
//
//
//
//
//
//#include "sparse_matrix.h"
//#include <iostream>
//
//using namespace std;
//
//sparse_matrix::sparse_matrix()
//{
//    rows = 0;
//    cols = 0;
//    non_zero = nullptr;
//    sparse_rep = nullptr;
//    matrix = nullptr;
//}
//
//sparse_matrix::sparse_matrix(int rows, int cols)
//{
//    this->rows = rows;
//    this->cols = cols;
//    non_zero = nullptr;
//    sparse_rep = nullptr;
//    matrix = nullptr;
//
//    matrix = new int* [this->rows];
//    for (int i = 0; i < this->rows; i++)
//    {
//        matrix[i] = new int[this->cols];
//    }
//}
//
//void sparse_matrix::set_non_zero1(int* non_zero)
//{
//    this->non_zero = non_zero;
//}
//
//void sparse_matrix::set_rows(int rows)
//{
//    this->rows = rows;
//}
//
//void sparse_matrix::set_cols(int cols)
//{
//    this->cols = cols;
//}
//
//int* sparse_matrix::get_non_zero()
//{
//    return non_zero;
//}
//
//int sparse_matrix::get_rows()
//{
//    return rows;
//}
//
//int sparse_matrix::get_cols()
//{
//    return cols;
//}
//
//void sparse_matrix::set_sparse_rep1(int** sparse)
//{
//    sparse_rep = sparse;
//}
//
//int** sparse_matrix::sparse_to_dense()
//{
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            matrix[i][j] = 0;
//        }
//    }
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < non_zero[i]; j++)
//        {
//            if (sparse_rep[i][0] != 0)
//            {
//                int col_no = sparse_rep[i][(2 * j) + 1];
//                int value = sparse_rep[i][2 * j + 2];
//                matrix[i][col_no] = value;
//            }
//        }
//    }
//    return matrix;
//}
//
//void sparse_matrix::print_matrix()
//{
//    cout << endl;
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void sparse_matrix::print_sparse_matrix()
//{
//    cout << "Sparse Matrix Representation:" << endl;
//    for (int i = 0; i < rows; i++)
//    {
//        cout << "Row " << i << ": ";
//        for (int j = 0; j < 2 * non_zero[i] + 1; j++)
//        {
//            cout << sparse_rep[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//sparse_matrix sparse_matrix::add_matrix(sparse_matrix& other)
//{
//    if (rows != other.get_rows() || cols != other.get_cols())
//    {
//        cout << "!!! MATRIX ADDITION IS NOT POSSIBLE !!!";
//        return sparse_matrix();
//    }
//    else
//    {
//        int** add_result = new int* [rows];
//        int* add_non_zero = new int[rows];
//        bool all_zero = true;
//
//        for (int i = 0; i < rows; i++)
//        {
//            int max_non_zero = non_zero[i] + other.get_non_zero()[i];
//            add_result[i] = new int[2 * max_non_zero + 1];
//            add_result[i][0] = 0;
//            int k = 1;
//            int j1 = 1, j2 = 1;
//
//            while (j1 < 2 * non_zero[i] + 1 && j2 < 2 * other.get_non_zero()[i] + 1)
//            {
//                if (sparse_rep[i][j1] < other.sparse_rep[i][j2])
//                {
//                    add_result[i][k++] = sparse_rep[i][j1++];
//                    add_result[i][k++] = sparse_rep[i][j1++];
//                    all_zero = false;
//                }
//                else if (sparse_rep[i][j1] > other.sparse_rep[i][j2])
//                {
//                    add_result[i][k++] = other.sparse_rep[i][j2++];
//                    add_result[i][k++] = other.sparse_rep[i][j2++];
//                    all_zero = false;
//                }
//                else
//                {
//                    add_result[i][k++] = sparse_rep[i][j1++];
//                    int sum = sparse_rep[i][j1++] + other.sparse_rep[i][++j2];
//                    j2++;
//                    if (sum != 0) {
//                        add_result[i][k++] = sum;
//                        all_zero = false;
//                    }
//                }
//            }
//
//            while (j1 < 2 * non_zero[i] + 1)
//            {
//                add_result[i][k++] = sparse_rep[i][j1++];
//                add_result[i][k++] = sparse_rep[i][j1++];
//                all_zero = false;
//            }
//
//            while (j2 < 2 * other.get_non_zero()[i] + 1)
//            {
//                add_result[i][k++] = other.sparse_rep[i][j2++];
//                add_result[i][k++] = other.sparse_rep[i][j2++];
//                all_zero = false;
//            }
//
//            add_result[i][0] = (k - 1) / 2;
//            add_non_zero[i] = add_result[i][0];
//        }
//
//        if (all_zero) {
//            for (int i = 0; i < rows; i++) {
//                delete[] add_result[i];
//                add_result[i] = new int[1];
//                add_result[i][0] = 0;
//                add_non_zero[i] = 0;
//            }
//        }
//
//        sparse_matrix result(rows, cols);
//        result.set_non_zero1(add_non_zero);
//        result.set_sparse_rep1(add_result);
//        result.sparse_to_dense();
//        return result;
//    }
//}
//
//sparse_matrix sparse_matrix::subtract_matrix(sparse_matrix& other)
//{
//    if (rows != other.get_rows() || cols != other.get_cols())
//    {
//        cout << "!!! MATRIX SUBTRACTION IS NOT POSSIBLE !!!";
//        return sparse_matrix();
//    }
//    else
//    {
//        int** subtract_result = new int* [rows];
//        int* subtract_non_zero = new int[rows];
//        bool all_zero = true;
//
//        for (int i = 0; i < rows; i++)
//        {
//            int max_non_zero = non_zero[i] + other.get_non_zero()[i];
//            subtract_result[i] = new int[2 * max_non_zero + 1];
//            subtract_result[i][0] = 0;
//            int k = 1;
//            int j1 = 1, j2 = 1;
//
//            while (j1 < 2 * non_zero[i] + 1 && j2 < 2 * other.get_non_zero()[i] + 1)
//            {
//                if (sparse_rep[i][j1] < other.sparse_rep[i][j2])
//                {
//                    subtract_result[i][k++] = sparse_rep[i][j1++];
//                    subtract_result[i][k++] = sparse_rep[i][j1++];
//                    all_zero = false;
//                }
//                else if (sparse_rep[i][j1] > other.sparse_rep[i][j2])
//                {
//                    subtract_result[i][k++] = other.sparse_rep[i][j2++];
//                    subtract_result[i][k++] = -other.sparse_rep[i][j2++];
//                    all_zero = false;
//                }
//                else
//                {
//                    subtract_result[i][k++] = sparse_rep[i][j1++];
//                    int diff = sparse_rep[i][j1++] - other.sparse_rep[i][++j2];
//                    j2++;
//                    if (diff != 0) {
//                        subtract_result[i][k++] = diff;
//                        all_zero = false;
//                    }
//                }
//            }
//
//            while (j1 < 2 * non_zero[i] + 1)
//            {
//                subtract_result[i][k++] = sparse_rep[i][j1++];
//                subtract_result[i][k++] = sparse_rep[i][j1++];
//                all_zero = false;
//            }
//
//            while (j2 < 2 * other.get_non_zero()[i] + 1)
//            {
//                subtract_result[i][k++] = other.sparse_rep[i][j2++];
//                subtract_result[i][k++] = -other.sparse_rep[i][j2++];
//                all_zero = false;
//            }
//
//            subtract_result[i][0] = (k - 1) / 2;
//            subtract_non_zero[i] = subtract_result[i][0];
//        }
//
//        if (all_zero) {
//            for (int i = 0; i < rows; i++) {
//                delete[] subtract_result[i];
//                subtract_result[i] = new int[1];
//                subtract_result[i][0] = 0;
//                subtract_non_zero[i] = 0;
//            }
//        }
//
//        sparse_matrix result(rows, cols);
//        result.set_non_zero1(subtract_non_zero);
//        result.set_sparse_rep1(subtract_result);
//        result.sparse_to_dense();
//        return result;
//    }
//}
//
//void sparse_matrix::dense_to_sparse(int** dense_matrix)
//{
//    int* result_non_zero = new int[rows]();
//    int** result_sparse_rep = new int* [rows];
//
//    for (int i = 0; i < rows; i++)
//    {
//        int count = 0;
//        for (int j = 0; j < cols; j++)
//        {
//            if (dense_matrix[i][j] != 0)
//            {
//                count++;
//            }
//        }
//        result_non_zero[i] = count;
//        result_sparse_rep[i] = new int[2 * count + 1];
//        result_sparse_rep[i][0] = count;
//        int index = 1;
//        for (int j = 0; j < cols; j++)
//        {
//            if (dense_matrix[i][j] != 0)
//            {
//                result_sparse_rep[i][index++] = j;
//                result_sparse_rep[i][index++] = dense_matrix[i][j];
//            }
//        }
//    }
//
//    set_non_zero1(result_non_zero);
//    set_sparse_rep1(result_sparse_rep);
//}
//
//void convert_dense_to_sparse(int** dense_matrix, int rows, int cols, int*& result_non_zero, int**& result_sparse_rep)
//{
//    result_non_zero = new int[rows]();
//    result_sparse_rep = new int* [rows];
//
//    for (int i = 0; i < rows; i++)
//    {
//        int count = 0;
//        for (int j = 0; j < cols; j++)
//        {
//            if (dense_matrix[i][j] != 0)
//            {
//                count++;
//            }
//        }
//        result_non_zero[i] = count;
//        result_sparse_rep[i] = new int[2 * count + 1];
//        result_sparse_rep[i][0] = count;
//        int index = 1;
//        for (int j = 0; j < cols; j++)
//        {
//            if (dense_matrix[i][j] != 0)
//            {
//                result_sparse_rep[i][index++] = j;
//                result_sparse_rep[i][index++] = dense_matrix[i][j];
//            }
//        }
//    }
//}
//
//sparse_matrix sparse_matrix::multiply_matrix(sparse_matrix& other)
//{
//    if (cols != other.get_rows())
//    {
//        cout << "!!! MATRIX MULTIPLICATION IS NOT POSSIBLE !!!";
//        return sparse_matrix();
//    }
//
//    int** dense_matrix1 = this->sparse_to_dense();
//    int** dense_matrix2 = other.sparse_to_dense();
//
//    int** result_matrix = new int* [rows];
//    for (int i = 0; i < rows; i++)
//    {
//        result_matrix[i] = new int[other.get_cols()]();
//    }
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < other.get_cols(); j++)
//        {
//            for (int k = 0; k < cols; k++)
//            {
//                result_matrix[i][j] += dense_matrix1[i][k] * dense_matrix2[k][j];
//            }
//        }
//    }
//
//    int* result_non_zero;
//    int** result_sparse_rep;
//    convert_dense_to_sparse(result_matrix, rows, other.get_cols(), result_non_zero, result_sparse_rep);
//
//    sparse_matrix result(rows, other.get_cols());
//    result.set_non_zero1(result_non_zero);
//    result.set_sparse_rep1(result_sparse_rep);
//    result.sparse_to_dense();
//
//    for (int i = 0; i < rows; i++)
//    {
//        delete[] result_matrix[i];
//    }
//    delete[] result_matrix;
//
//    return result;
//}
//
//sparse_matrix sparse_matrix::transpose() {
//    int** transposed_sparse_rep = new int* [cols];
//    int* transposed_non_zero = new int[cols]();
//
//    for (int i = 0; i < rows; i++) {
//        for (int j = 1; j < 2 * non_zero[i] + 1; j += 2) {
//            int col = sparse_rep[i][j];
//            transposed_non_zero[col]++;
//        }
//    }
//
//    for (int i = 0; i < cols; i++) {
//        transposed_sparse_rep[i] = new int[2 * transposed_non_zero[i] + 1];
//        transposed_sparse_rep[i][0] = transposed_non_zero[i];
//    }
//
//    int* current_index = new int[cols]();
//    for (int i = 0; i < rows; i++) {
//        for (int j = 1; j < 2 * non_zero[i] + 1; j += 2) {
//            int col = sparse_rep[i][j];
//            int value = sparse_rep[i][j + 1];
//            int index = current_index[col] * 2 + 1;
//            transposed_sparse_rep[col][index] = i;
//            transposed_sparse_rep[col][index + 1] = value;
//            current_index[col]++;
//        }
//    }
//
//    delete[] current_index;
//
//    sparse_matrix transposed_matrix(cols, rows);
//    transposed_matrix.set_non_zero1(transposed_non_zero);
//    transposed_matrix.set_sparse_rep1(transposed_sparse_rep);
//    transposed_matrix.sparse_to_dense();
//
//    return transposed_matrix;
//}