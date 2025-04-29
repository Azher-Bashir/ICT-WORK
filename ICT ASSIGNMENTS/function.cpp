//#include "functions.h"
//#include <iostream>
//
//using namespace std;
//
//sparse_matrix::sparse_matrix() {
//    rows = 0;
//    cols = 0;
//    non_zero = nullptr;
//    sparse_rep = nullptr;
//    matrix = nullptr;
//}
//
//sparse_matrix::sparse_matrix(int rows, int cols) {
//    this->rows = rows;
//    this->cols = cols;
//    non_zero = nullptr;
//    sparse_rep = nullptr;
//    matrix = nullptr;
//
//    matrix = new int* [this->rows];
//    for (int i = 0; i < this->rows; i++) {
//        matrix[i] = new int[this->cols];
//    }
//}
//
//void sparse_matrix::set_non_zero1(int* non_zero) {
//    this->non_zero = non_zero;
//}
//
//void sparse_matrix::set_rows(int rows) {
//    this->rows = rows;
//}
//
//void sparse_matrix::set_cols(int cols) {
//    this->cols = cols;
//}
//
//int* sparse_matrix::get_non_zero() {
//    return non_zero;
//}
//
//int sparse_matrix::get_rows() {
//    return rows;
//}
//
//int sparse_matrix::get_cols() {
//    return cols;
//}
//
//void sparse_matrix::set_sparse_rep1(int** sparse) {
//    sparse_rep = sparse;
//}
//
//int** sparse_matrix::sparse_to_dense() {
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            matrix[i][j] = 0;
//        }
//    }
//
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < non_zero[i]; j++) {
//            int col_no = sparse_rep[i][(3 * j) + 1];
//            int value = sparse_rep[i][(3 * j) + 2];
//            matrix[i][col_no] = value;
//        }
//    }
//    return matrix;
//}
//
//void sparse_matrix::print_matrix() {
//    cout << endl;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void sparse_matrix::print_sparse_matrix() {
//    cout << "Sparse Matrix Representation:" << endl;
//    for (int i = 0; i < rows; i++) {
//        cout << "Row " << i << ": ";
//        for (int j = 0; j < 3 * non_zero[i] + 1; j++) {
//            cout << sparse_rep[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//bool sparse_matrix::is_sparse() const {
//    int total_elements = rows * cols;
//    int total_non_zero = 0;
//    for (int i = 0; i < rows; i++) {
//        total_non_zero += non_zero[i];
//    }
//    return total_non_zero < (total_elements / 2);
//}
//
//sparse_matrix sparse_matrix::transpose() {
//    int** transposed_sparse_rep = new int* [cols];
//    int* transposed_non_zero = new int[cols]();
//
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < non_zero[i]; j++) {
//            int col = sparse_rep[i][(3 * j) + 1];
//            transposed_non_zero[col]++;
//        }
//    }
//
//    for (int i = 0; i < cols; i++) {
//        transposed_sparse_rep[i] = new int[3 * transposed_non_zero[i] + 1];
//        transposed_sparse_rep[i][0] = transposed_non_zero[i];
//    }
//
//    int* current_index = new int[cols]();
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < non_zero[i]; j++) {
//            int col = sparse_rep[i][(3 * j) + 1];
//            int val = sparse_rep[i][(3 * j) + 2];
//            int idx = current_index[col];
//            transposed_sparse_rep[col][3 * idx + 1] = i;
//            transposed_sparse_rep[col][3 * idx + 2] = val;
//            transposed_sparse_rep[col][3 * idx + 3] = 0;
//            current_index[col]++;
//        }
//    }
//    delete[] current_index;
//
//    sparse_matrix transposed(cols, rows);
//    transposed.set_non_zero1(transposed_non_zero);
//    transposed.set_sparse_rep1(transposed_sparse_rep);
//    transposed.sparse_to_dense();
//    return transposed;
//}
//sparse_matrix sparse_matrix::add_matrix(sparse_matrix& other) {
//    if (rows != other.get_rows() || cols != other.get_cols()) {
//        cout << "!!! MATRIX ADDITION IS NOT POSSIBLE !!!";
//        return sparse_matrix();
//    }
//
//    int** result_rep = new int* [rows];
//    int* result_non_zero = new int[rows];
//
//    for (int i = 0; i < rows; i++) {
//        int max_nz = non_zero[i] + other.get_non_zero()[i];
//        result_rep[i] = new int[3 * max_nz + 1];
//        int index1 = 1, index2 = 1, k = 1;
//
//        while (index1 < 3 * non_zero[i] + 1 && index2 < 3 * other.get_non_zero()[i] + 1) {
//            int col1 = sparse_rep[i][index1];
//            int col2 = other.sparse_rep[i][index2];
//
//            if (col1 < col2) {
//                result_rep[i][k++] = col1;
//                result_rep[i][k++] = sparse_rep[i][index1 + 1];
//                result_rep[i][k++] = 0;
//                index1 += 3;
//            }
//            else if (col1 > col2) {
//                result_rep[i][k++] = col2;
//                result_rep[i][k++] = other.sparse_rep[i][index2 + 1];
//                result_rep[i][k++] = 0;
//                index2 += 3;
//            }
//            else {
//                int sum = sparse_rep[i][index1 + 1] + other.sparse_rep[i][index2 + 1];
//                if (sum != 0) {
//                    result_rep[i][k++] = col1;
//                    result_rep[i][k++] = sum;
//                    result_rep[i][k++] = 0;
//                }
//                index1 += 3;
//                index2 += 3;
//            }
//        }
//
//        while (index1 < 3 * non_zero[i] + 1) {
//            result_rep[i][k++] = sparse_rep[i][index1];
//            result_rep[i][k++] = sparse_rep[i][index1 + 1];
//            result_rep[i][k++] = 0;
//            index1 += 3;
//        }
//
//        while (index2 < 3 * other.get_non_zero()[i] + 1) {
//            result_rep[i][k++] = other.sparse_rep[i][index2];
//            result_rep[i][k++] = other.sparse_rep[i][index2 + 1];
//            result_rep[i][k++] = 0;
//            index2 += 3;
//        }
//
//        result_non_zero[i] = (k - 1) / 3;
//        result_rep[i][0] = result_non_zero[i];
//    }
//
//    sparse_matrix result(rows, cols);
//    result.set_non_zero1(result_non_zero);
//    result.set_sparse_rep1(result_rep);
//    result.sparse_to_dense();
//    return result;
//}
//
//sparse_matrix sparse_matrix::subtract_matrix(sparse_matrix& other) {
//    if (rows != other.get_rows() || cols != other.get_cols()) {
//        cout << "!!! MATRIX SUBTRACTION IS NOT POSSIBLE !!!";
//        return sparse_matrix();
//    }
//
//    int** result_rep = new int* [rows];
//    int* result_non_zero = new int[rows];
//
//    for (int i = 0; i < rows; i++) {
//        int max_nz = non_zero[i] + other.get_non_zero()[i];
//        result_rep[i] = new int[3 * max_nz + 1];
//        int index1 = 1, index2 = 1, k = 1;
//
//        while (index1 < 3 * non_zero[i] + 1 && index2 < 3 * other.get_non_zero()[i] + 1) {
//            int col1 = sparse_rep[i][index1];
//            int col2 = other.sparse_rep[i][index2];
//
//            if (col1 < col2) {
//                result_rep[i][k++] = col1;
//                result_rep[i][k++] = sparse_rep[i][index1 + 1];
//                result_rep[i][k++] = 0;
//                index1 += 3;
//            }
//            else if (col1 > col2) {
//                result_rep[i][k++] = col2;
//                result_rep[i][k++] = -other.sparse_rep[i][index2 + 1];
//                result_rep[i][k++] = 0;
//                index2 += 3;
//            }
//            else {
//                int diff = sparse_rep[i][index1 + 1] - other.sparse_rep[i][index2 + 1];
//                if (diff != 0) {
//                    result_rep[i][k++] = col1;
//                    result_rep[i][k++] = diff;
//                    result_rep[i][k++] = 0;
//                }
//                index1 += 3;
//                index2 += 3;
//            }
//        }
//
//        while (index1 < 3 * non_zero[i] + 1) {
//            result_rep[i][k++] = sparse_rep[i][index1];
//            result_rep[i][k++] = sparse_rep[i][index1 + 1];
//            result_rep[i][k++] = 0;
//            index1 += 3;
//        }
//
//        while (index2 < 3 * other.get_non_zero()[i] + 1) {
//            result_rep[i][k++] = other.sparse_rep[i][index2];
//            result_rep[i][k++] = -other.sparse_rep[i][index2 + 1];
//            result_rep[i][k++] = 0;
//            index2 += 3;
//        }
//
//        result_non_zero[i] = (k - 1) / 3;
//        result_rep[i][0] = result_non_zero[i];
//    }
//
//    sparse_matrix result(rows, cols);
//    result.set_non_zero1(result_non_zero);
//    result.set_sparse_rep1(result_rep);
//    result.sparse_to_dense();
//    return result;
//}
//sparse_matrix sparse_matrix::multiply_matrix(sparse_matrix& other) {
//    if (cols != other.rows) {
//        std::cerr << "Multiplication not possible: incompatible dimensions." << std::endl;
//        return sparse_matrix(0, 0);
//    }
//
//    int** result = new int* [rows];
//    for (int i = 0; i < rows; i++) {
//        result[i] = new int[other.cols];
//        for (int j = 0; j < other.cols; j++) {
//            result[i][j] = 0;
//            for (int k = 0; k < cols; k++) {
//                result[i][j] += matrix[i][k] * other.matrix[k][j];
//            }
//        }
//    }
//
//    sparse_matrix result_matrix(rows, other.cols);
//    result_matrix.matrix = result;
//    return result_matrix;
//}
//
//void sparse_matrix::check_if_sparse(const std:: string& matrix_name) {
//    int non_zero_count = 0;
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < cols; j++)
//            if (matrix[i][j] != 0)
//                non_zero_count++;
//
//    int total_elements = rows * cols;
//    if (non_zero_count <= total_elements / 2) {
//        std::cout << matrix_name << " is a SPARSE matrix." << std::endl;
//    }
//    else {
//        std::cout << matrix_name << " is NOT a sparse matrix." << std::endl;
//    }
//}
