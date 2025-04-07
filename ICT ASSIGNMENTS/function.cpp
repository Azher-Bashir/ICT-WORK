//// DenseMatrix.cpp
//
//#include <iostream>
//#include "FUNCTIONS.h"
//using namespace std;
//
//// Constructor implementations
//DenseMatrix::DenseMatrix() {
//    numRows = 0;
//    numCols = 0;
//    nonZeroCount = nullptr;
//    sparseRep = nullptr;
//    denseMatrix = nullptr;
//}
//
//DenseMatrix::DenseMatrix(int rows, int cols) {
//    this->numRows = rows;
//    this->numCols = cols;
//    nonZeroCount = nullptr;
//    sparseRep = nullptr;
//    denseMatrix = new int* [numRows];
//    for (int i = 0; i < numRows; i++) {
//        denseMatrix[i] = new int[numCols]();
//    }
//}
//
//// Setters and Getters
//void DenseMatrix::setNonZeroCount(int* nonZero) { this->nonZeroCount = nonZero; }
//void DenseMatrix::setNumRows(int rows) { this->numRows = rows; }
//void DenseMatrix::setNumCols(int cols) { this->numCols = cols; }
//int* DenseMatrix::getNonZeroCount() { return nonZeroCount; }
//int DenseMatrix::getNumRows() { return numRows; }
//int DenseMatrix::getNumCols() { return numCols; }
//void DenseMatrix::setSparseRep(int** sparse) { sparseRep = sparse; }
//
//int** DenseMatrix::sparseToDense() {
//    if (!denseMatrix) {
//        denseMatrix = new int* [numRows];
//        for (int i = 0; i < numRows; i++)
//            denseMatrix[i] = new int[numCols]();
//    }
//
//    for (int i = 0; i < numRows; i++)
//        for (int j = 0; j < numCols; j++)
//            denseMatrix[i][j] = 0;
//
//    for (int i = 0; i < numRows; i++) {
//        for (int j = 0; j < 3 * nonZeroCount[i]; j += 3) {
//            int row = sparseRep[i][j];
//            int col = sparseRep[i][j + 1];
//            int val = sparseRep[i][j + 2];
//            denseMatrix[row][col] = val;
//        }
//    }
//
//    return denseMatrix;
//}
//
//void DenseMatrix::printDenseMatrix() {
//    cout << "\nDense Matrix:\n";
//    for (int i = 0; i < numRows; i++) {
//        for (int j = 0; j < numCols; j++)
//            cout << denseMatrix[i][j] << " ";
//        cout << endl;
//    }
//}
//
//void DenseMatrix::printSparseMatrix() {
//    cout << "\nSparse Matrix Representation:\n";
//    for (int i = 0; i < numRows; i++) {
//        cout << "Row " << i << ": ";
//        for (int j = 0; j < 3 * nonZeroCount[i]; j++)
//            cout << sparseRep[i][j] << " ";
//        cout << endl;
//    }
//}
//
//void DenseMatrix::denseToSparse(int** denseMatrix) {
//    int* resultNonZero = new int[numRows]();
//    int** resultSparseRep = new int* [numRows];
//
//    for (int i = 0; i < numRows; i++) {
//        int count = 0;
//        for (int j = 0; j < numCols; j++)
//            if (denseMatrix[i][j] != 0)
//                count++;
//
//        resultNonZero[i] = count;
//        resultSparseRep[i] = new int[3 * count];
//
//        int index = 0;
//        for (int j = 0; j < numCols; j++) {
//            if (denseMatrix[i][j] != 0) {
//                resultSparseRep[i][index++] = i;
//                resultSparseRep[i][index++] = j;
//                resultSparseRep[i][index++] = denseMatrix[i][j];
//            }
//        }
//    }
//
//    setNonZeroCount(resultNonZero);
//    setSparseRep(resultSparseRep);
//}
//
//DenseMatrix DenseMatrix::addMatrix(DenseMatrix& other) {
//    if (numRows != other.getNumRows() || numCols != other.getNumCols()) {
//        cout << "Matrix addition not possible.\n";
//        return DenseMatrix();
//    }
//
//    sparseToDense();
//    other.sparseToDense();
//
//    int** resultMatrix = new int* [numRows];
//    for (int i = 0; i < numRows; i++) {
//        resultMatrix[i] = new int[numCols]();
//        for (int j = 0; j < numCols; j++)
//            resultMatrix[i][j] = denseMatrix[i][j] + other.denseMatrix[i][j];
//    }
//
//    DenseMatrix result(numRows, numCols);
//    result.denseToSparse(resultMatrix);
//
//    for (int i = 0; i < numRows; i++)
//        delete[] resultMatrix[i];
//    delete[] resultMatrix;
//
//    return result;
//}
//
//DenseMatrix DenseMatrix::subtractMatrix(DenseMatrix& other) {
//    if (numRows != other.getNumRows() || numCols != other.getNumCols()) {
//        cout << "Matrix subtraction not possible.\n";
//        return DenseMatrix();
//    }
//
//    sparseToDense();
//    other.sparseToDense();
//
//    int** resultMatrix = new int* [numRows];
//    for (int i = 0; i < numRows; i++) {
//        resultMatrix[i] = new int[numCols]();
//        for (int j = 0; j < numCols; j++)
//            resultMatrix[i][j] = denseMatrix[i][j] - other.denseMatrix[i][j];
//    }
//
//    DenseMatrix result(numRows, numCols);
//    result.denseToSparse(resultMatrix);
//
//    for (int i = 0; i < numRows; i++)
//        delete[] resultMatrix[i];
//    delete[] resultMatrix;
//
//    return result;
//}
//
//DenseMatrix DenseMatrix::multiplyMatrix(DenseMatrix& other) {
//    if (numCols != other.getNumRows()) {
//        cout << "Matrix multiplication not possible.\n";
//        return DenseMatrix();
//    }
//
//    sparseToDense();
//    other.sparseToDense();
//
//    int** resultMatrix = new int* [numRows];
//    for (int i = 0; i < numRows; i++)
//        resultMatrix[i] = new int[other.getNumCols()]();
//
//    for (int i = 0; i < numRows; i++)
//        for (int j = 0; j < other.getNumCols(); j++)
//            for (int k = 0; k < numCols; k++)
//                resultMatrix[i][j] += denseMatrix[i][k] * other.denseMatrix[k][j];
//
//    DenseMatrix result(numRows, other.getNumCols());
//    result.denseToSparse(resultMatrix);
//
//    for (int i = 0; i < numRows; i++)
//        delete[] resultMatrix[i];
//    delete[] resultMatrix;
//
//    return result;
//}
//
//DenseMatrix DenseMatrix::transpose() {
//    int** transposedSparseRep = new int* [numCols];
//    int* transposedNonZero = new int[numCols]();
//
//    for (int i = 0; i < numRows; i++)
//        for (int j = 1; j < 3 * nonZeroCount[i]; j += 3)
//            transposedNonZero[sparseRep[i][j]]++;
//
//    for (int i = 0; i < numCols; i++)
//        transposedSparseRep[i] = new int[3 * transposedNonZero[i]];
//
//    int* currentIndex = new int[numCols]();
//    for (int i = 0; i < numRows; i++) {
//        for (int j = 0; j < 3 * nonZeroCount[i]; j += 3) {
//            int col = sparseRep[i][j + 1];
//            int idx = currentIndex[col] * 3;
//            transposedSparseRep[col][idx] = col;
//            transposedSparseRep[col][idx + 1] = i;
//            transposedSparseRep[col][idx + 2] = sparseRep[i][j + 2];
//            currentIndex[col]++;
//        }
//    }
//
//    delete[] currentIndex;
//
//    DenseMatrix result(numCols, numRows);
//    result.setNonZeroCount(transposedNonZero);
//    result.setSparseRep(transposedSparseRep);
//    result.sparseToDense();
//
//    return result;
//}
