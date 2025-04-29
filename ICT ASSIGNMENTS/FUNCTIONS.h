//#ifndef SPARSE_MATRIX_H
//#define SPARSE_MATRIX_H
//
//#include <iostream>
//
//class sparse_matrix {
//private:
//    int rows, cols;
//    int* non_zero;
//    int** sparse_rep;
//    int** matrix;
//
//public:
//    sparse_matrix();
//    sparse_matrix(int, int);
//    void set_non_zero1(int*);
//    void set_rows(int);
//    void set_cols(int);
//    int* get_non_zero();
//    int get_rows();
//    int get_cols();
//    void set_sparse_rep1(int**);
//    int** sparse_to_dense();
//    void print_matrix();
//    void print_sparse_matrix();
//    bool is_sparse() const;
//    sparse_matrix add_matrix(sparse_matrix&);
//    sparse_matrix subtract_matrix(sparse_matrix&);
//    sparse_matrix transpose();
//    sparse_matrix multiply_matrix(sparse_matrix&);
//    void check_if_sparse(const std::string& matrix_name);
//
//
//};
//
//#endif // SPARSE_MATRIX_H