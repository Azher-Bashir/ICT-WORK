#include "sparsematrix.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Constructor
SparseMatrix::SparseMatrix(int r, int c) : rows(r), cols(c), nonZeroCount(0), elements(nullptr) {
    cout << "SparseMatrix created with dimensions " << rows << "x" << cols << endl;
}

// Copy Constructor
SparseMatrix::SparseMatrix(const SparseMatrix& other) : rows(other.rows), cols(other.cols), nonZeroCount(other.nonZeroCount) {
    if (nonZeroCount > 0) {
        allocateElements(nonZeroCount);
        for (int i = 0; i < nonZeroCount; i++) {
            for (int j = 0; j < 3; j++) {
                elements[i][j] = other.elements[i][j];
            }
        }
    }
    else {
        elements = nullptr;
    }
}

// Destructor
SparseMatrix::~SparseMatrix() {
    clear();
}

// Clear memory
void SparseMatrix::clear() {
    if (elements) {
        for (int i = 0; i < nonZeroCount; i++) {
            delete[] elements[i];
        }
        delete[] elements;
        elements = nullptr;
    }
    nonZeroCount = 0;
}

// Allocate memory for elements
void SparseMatrix::allocateElements(int count) {
    elements = new int* [count];
    for (int i = 0; i < count; i++) {
        elements[i] = new int[3];
    }
}

// Subtract two matrices
SparseMatrix SparseMatrix::subtract(const SparseMatrix& other) const {
    if (rows != other.rows || cols != other.cols) {
        throw invalid_argument("Matrix dimensions must match for subtraction.");
    }

    SparseMatrix result(rows, cols);
    int maxCount = nonZeroCount + other.nonZeroCount;
    result.allocateElements(maxCount);

    int i = 0, j = 0, k = 0;
    while (i < nonZeroCount && j < other.nonZeroCount) {
        if (elements[i][0] < other.elements[j][0] ||
            (elements[i][0] == other.elements[j][0] && elements[i][1] < other.elements[j][1])) {
            result.elements[k++] = elements[i++];
        }
        else if (elements[i][0] > other.elements[j][0] ||
            (elements[i][0] == other.elements[j][0] && elements[i][1] > other.elements[j][1])) {
            result.elements[k] = new int[3];
            result.elements[k][0] = other.elements[j][0];
            result.elements[k][1] = other.elements[j][1];
            result.elements[k++][2] = -other.elements[j++][2];
        }
        else {
            int diff = elements[i][2] - other.elements[j][2];
            if (diff != 0) {
                result.elements[k] = new int[3];
                result.elements[k][0] = elements[i][0];
                result.elements[k][1] = elements[i][1];
                result.elements[k++][2] = diff;
            }
            i++;
            j++;
        }
    }

    while (i < nonZeroCount) result.elements[k++] = elements[i++];
    while (j < other.nonZeroCount) {
        result.elements[k] = new int[3];
        result.elements[k][0] = other.elements[j][0];
        result.elements[k][1] = other.elements[j][1];
        result.elements[k++][2] = -other.elements[j++][2];
    }

    result.nonZeroCount = k;
    return result;
}

// Multiply two matrices
SparseMatrix SparseMatrix::multiply(const SparseMatrix& other) const {
    if (cols != other.rows) {
        throw invalid_argument("Matrix dimensions must be compatible for multiplication.");
    }

    SparseMatrix result(rows, other.cols);
    result.allocateElements(rows * other.cols); // Over-allocate, we'll resize later

    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < other.cols; j++) {
            int sum = 0;
            for (int x = 0; x < nonZeroCount; x++) {
                if (elements[x][0] == i) {
                    for (int y = 0; y < other.nonZeroCount; y++) {
                        if (other.elements[y][0] == elements[x][1] && other.elements[y][1] == j) {
                            sum += elements[x][2] * other.elements[y][2];
                        }
                    }
                }
            }
            if (sum != 0) {
                result.elements[k] = new int[3];
                result.elements[k][0] = i;
                result.elements[k][1] = j;
                result.elements[k++][2] = sum;
            }
        }
    }

    result.nonZeroCount = k;
    return result;
}

// Transpose matrix
SparseMatrix SparseMatrix::transpose() const {
    SparseMatrix result(cols, rows);
    result.allocateElements(nonZeroCount);
    result.nonZeroCount = nonZeroCount;

    for (int i = 0; i < nonZeroCount; i++) {
        result.elements[i][0] = elements[i][1];
        result.elements[i][1] = elements[i][0];
        result.elements[i][2] = elements[i][2];
    }
    return result;
}
