//# pragma once
//# ifndef PF_ASSIGMENT_H
//# define PF_ASSIGMENT_H
//
//#include <iostream>
//using namespace std;
//
//class Sparse_Matrix
//{
//private:
//    int Rows;
//    int Columns;
//    int* non_zero;
//    int** Sparse_Rep;
//    int** Matrix;
//
//public:
//    Sparse_Matrix();
//    Sparse_Matrix(int, int);
//    void set_row(int);
//    void set_columns(int);
//    void set_Sparse_rep(int** sparse_rp);
//    void set_Non_zero(int* non_zero);
//    int* get_non_zero();
//    int get_rows();
//    int get_cols();
//    void print_Matrix();
//    void print_sparse_matrix();
//    void Sparse_converter();
//    int** sparse_to_dense() const;
//    Sparse_Matrix Addition_operation(const Sparse_Matrix& sp1, const Sparse_Matrix& sp2);
//    Sparse_Matrix Subtraction_operation(const Sparse_Matrix& sp1, const Sparse_Matrix& sp2);
//    Sparse_Matrix multiply_matrix(const Sparse_Matrix& sp1, const Sparse_Matrix& sp2);
//    Sparse_Matrix transpose();
//    ~Sparse_Matrix();
//};
//
//
//
//#endif