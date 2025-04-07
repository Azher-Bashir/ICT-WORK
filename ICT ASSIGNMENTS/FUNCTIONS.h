//#pragma once 
//// DenseMatrix.h
//
//#ifndef DENSEMATRIX_H
//#define DENSEMATRIX_H
//
//class DenseMatrix {
//private:
//    int numRows, numCols;
//    int* nonZeroCount;
//    int** sparseRep;
//    int** denseMatrix;
//
//public:
//    DenseMatrix();
//    DenseMatrix(int, int);
//    void setNonZeroCount(int*);
//    void setNumRows(int);
//    void setNumCols(int);
//    int* getNonZeroCount();
//    int getNumRows();
//    int getNumCols();
//    void setSparseRep(int**);
//    int** sparseToDense();
//    void printDenseMatrix();
//    void printSparseMatrix();
//    void denseToSparse(int** resultMatrix);
//    DenseMatrix addMatrix(DenseMatrix&);
//    DenseMatrix subtractMatrix(DenseMatrix&);
//    DenseMatrix multiplyMatrix(DenseMatrix&);
//    DenseMatrix transpose();
//};
//
//#endif
