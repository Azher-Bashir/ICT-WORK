#ifndef SPARSEMATRIX_H
#define SPARSEMATRIX_H

#include <iostream>
#include <iomanip>

class SparseMatrix {
private:
    int rows;         // Number of rows in the matrix
    int cols;         // Number of columns in the matrix
    int nonZeroCount; // Count of non-zero elements in the matrix
    int** elements;   // Array to store non-zero elements [row][col][value]

    void allocateElements(int count); // Helper to allocate memory for elements

public:
    // Constructors & Destructor
    SparseMatrix(int r = 0, int c = 0);
    SparseMatrix(const SparseMatrix& other);
    ~SparseMatrix();

    // Memory management
    void clear();

    // Matrix creation methods
    static SparseMatrix createFromInput();

    // Display methods
    void display() const;
    void displaySparse() const;

    // Matrix operations
    SparseMatrix add(const SparseMatrix& other) const;
    SparseMatrix subtract(const SparseMatrix& other) const; // New subtraction function
    SparseMatrix multiply(const SparseMatrix& other) const; // New multiplication function
    SparseMatrix transpose() const;

    // Utility functions
    int getRowCount() const { return rows; }
    int getColCount() const { return cols; }
    int getNonZeroCount() const { return nonZeroCount; }
};

#endif
