//#include <iostream>
//#include "fdeclare.h"
//using namespace std;
//
//SparseMatrix::SparseMatrix() : rows(0), cols(0), nonZeroCount(0), sparseData(nullptr) {}
//
//SparseMatrix::SparseMatrix(int r, int c) : rows(r), cols(c), nonZeroCount(0), sparseData(nullptr) {}
//
//SparseMatrix::~SparseMatrix() {
//    for (int i = 0; i < nonZeroCount; i++) {
//        delete[] sparseData[i];
//    }
//    delete[] sparseData;
//}
//
//void SparseMatrix::inputMatrix() {
//    cout << "Enter number of non-zero elements: ";
//    cin >> nonZeroCount;
//
//    sparseData = new int* [nonZeroCount];
//    for (int i = 0; i < nonZeroCount; i++) {
//        sparseData[i] = new int[3];
//    }
//
//    cout << "Enter elements as [row col value] triplets:\n";
//    for (int i = 0; i < nonZeroCount; i++) {
//        cout << "Element " << i + 1 << ": ";
//        cin >> sparseData[i][0] >> sparseData[i][1] >> sparseData[i][2];
//
//        if (sparseData[i][0] < 0 || sparseData[i][0] >= rows ||
//            sparseData[i][1] < 0 || sparseData[i][1] >= cols) {
//            cout << "Invalid position! Please re-enter this element.\n";
//            i--;
//            continue;
//        }
//    }
//}
//
//int** SparseMatrix::toFullMatrix() const {
//    int** full = new int* [rows];
//    for (int i = 0; i < rows; i++) {
//        full[i] = new int[cols]();
//    }
//
//    for (int i = 0; i < nonZeroCount; i++) {
//        full[sparseData[i][0]][sparseData[i][1]] = sparseData[i][2];
//    }
//
//    return full;
//}
//
//void SparseMatrix::printFullMatrix() const {
//    int** full = toFullMatrix();
//    cout << "Full Matrix (" << rows << "x" << cols << "):\n";
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cout << full[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    for (int i = 0; i < rows; i++) {
//        delete[] full[i];
//    }
//    delete[] full;
//}
//
//void SparseMatrix::printSparse() const {
//    cout << "Sparse Matrix (" << rows << "x" << cols << "):\n";
//    cout << "Row\tCol\tValue\n";
//    for (int i = 0; i < nonZeroCount; i++) {
//        cout << sparseData[i][0] << "\t"
//            << sparseData[i][1] << "\t"
//            << sparseData[i][2] << endl;
//    }
//}
//
//SparseMatrix SparseMatrix::add(const SparseMatrix& other) const {
//    if (rows != other.rows || cols != other.cols) {
//        cout << "Matrix dimensions must match for addition!\n";
//        return SparseMatrix();
//    }
//
//    int** temp = new int* [rows];
//    for (int i = 0; i < rows; i++) {
//        temp[i] = new int[cols]();
//    }
//
//    for (int i = 0; i < nonZeroCount; i++) {
//        temp[sparseData[i][0]][sparseData[i][1]] += sparseData[i][2];
//    }
//
//    for (int i = 0; i < other.nonZeroCount; i++) {
//        temp[other.sparseData[i][0]][other.sparseData[i][1]] += other.sparseData[i][2];
//    }
//
//    int resultNonZero = 0;
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < cols; j++)
//            if (temp[i][j] != 0) resultNonZero++;
//
//    SparseMatrix result(rows, cols);
//    result.nonZeroCount = resultNonZero;
//    result.sparseData = new int* [resultNonZero];
//    for (int i = 0; i < resultNonZero; i++) {
//        result.sparseData[i] = new int[3];
//    }
//
//    int index = 0;
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < cols; j++)
//            if (temp[i][j] != 0) {
//                result.sparseData[index][0] = i;
//                result.sparseData[index][1] = j;
//                result.sparseData[index][2] = temp[i][j];
//                index++;
//            }
//
//    for (int i = 0; i < rows; i++) delete[] temp[i];
//    delete[] temp;
//
//    return result;
//}
//
//SparseMatrix SparseMatrix::subtract(const SparseMatrix& other) const {
//    if (rows != other.rows || cols != other.cols) {
//        cout << "Matrix dimensions must match for subtraction!\n";
//        return SparseMatrix();
//    }
//
//    int** temp = new int* [rows];
//    for (int i = 0; i < rows; i++) {
//        temp[i] = new int[cols]();
//    }
//
//    for (int i = 0; i < nonZeroCount; i++) {
//        temp[sparseData[i][0]][sparseData[i][1]] += sparseData[i][2];
//    }
//
//    for (int i = 0; i < other.nonZeroCount; i++) {
//        temp[other.sparseData[i][0]][other.sparseData[i][1]] -= other.sparseData[i][2];
//    }
//
//    int resultNonZero = 0;
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < cols; j++)
//            if (temp[i][j] != 0) resultNonZero++;
//
//    SparseMatrix result(rows, cols);
//    result.nonZeroCount = resultNonZero;
//    result.sparseData = new int* [resultNonZero];
//    for (int i = 0; i < resultNonZero; i++) {
//        result.sparseData[i] = new int[3];
//    }
//
//    int index = 0;
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < cols; j++)
//            if (temp[i][j] != 0) {
//                result.sparseData[index][0] = i;
//                result.sparseData[index][1] = j;
//                result.sparseData[index][2] = temp[i][j];
//                index++;
//            }
//
//    for (int i = 0; i < rows; i++) delete[] temp[i];
//    delete[] temp;
//
//    return result;
//}
//
//SparseMatrix SparseMatrix::multiply(const SparseMatrix& other) const {
//    if (cols != other.rows) {
//        cout << "Matrix dimensions incompatible for multiplication!\n";
//        return SparseMatrix();
//    }
//
//    int** temp = new int* [rows];
//    for (int i = 0; i < rows; i++) {
//        temp[i] = new int[other.cols]();
//    }
//
//    for (int i = 0; i < nonZeroCount; i++) {
//        for (int j = 0; j < other.nonZeroCount; j++) {
//            if (sparseData[i][1] == other.sparseData[j][0]) {
//                temp[sparseData[i][0]][other.sparseData[j][1]] +=
//                    sparseData[i][2] * other.sparseData[j][2];
//            }
//        }
//    }
//
//    int resultNonZero = 0;
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < other.cols; j++)
//            if (temp[i][j] != 0) resultNonZero++;
//
//    SparseMatrix result(rows, other.cols);
//    result.nonZeroCount = resultNonZero;
//    result.sparseData = new int* [resultNonZero];
//    for (int i = 0; i < resultNonZero; i++) {
//        result.sparseData[i] = new int[3];
//    }
//
//    int index = 0;
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < other.cols; j++)
//            if (temp[i][j] != 0) {
//                result.sparseData[index][0] = i;
//                result.sparseData[index][1] = j;
//                result.sparseData[index][2] = temp[i][j];
//                index++;
//            }
//
//    for (int i = 0; i < rows; i++) delete[] temp[i];
//    delete[] temp;
//
//    return result;
//}
//
//SparseMatrix SparseMatrix::transpose() const {
//    SparseMatrix result(cols, rows);
//    result.nonZeroCount = nonZeroCount;
//    result.sparseData = new int* [nonZeroCount];
//    for (int i = 0; i < nonZeroCount; i++) {
//        result.sparseData[i] = new int[3];
//        result.sparseData[i][0] = sparseData[i][1];
//        result.sparseData[i][1] = sparseData[i][0];
//        result.sparseData[i][2] = sparseData[i][2];
//    }
//    return result;
//}
