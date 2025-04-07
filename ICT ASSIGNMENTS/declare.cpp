//#include "sparse.h"
//
//SparseMatrix::SparseMatrix(int r, int c) : rows(r), cols(c), nonZeroCount(0), data(nullptr) {}
//
//SparseMatrix::~SparseMatrix() {
//    delete[] data;
//}
//
//void SparseMatrix::input() {
//    cout << "Enter the number of non-zero elements: ";
//    cin >> nonZeroCount;
//    data = new Element[nonZeroCount];
//    cout << "Enter the elements in the format (row, col, value):\n";
//    cout << "---------------------------------\n";
//    cout << "| Row | Column | Value |\n";
//    cout << "---------------------------------\n";
//    for (int i = 0; i < nonZeroCount; ++i) {
//        cin >> data[i].row;
//        cout << "| ";
//        cout << '\t' << "|";
//        cin >> data[i].col;
//        cout << '\t' << "|";
//        cin >> data[i].value;
//        cout << endl;
//    }
//    cout << "---------------------------------\n";
//}
//
//void SparseMatrix::display() {
//    cout << "Sparse Matrix (" << rows << "x" << cols << "):\n";
//    for (int i = 0; i < nonZeroCount; ++i) {
//        cout << "Element at (" << data[i].row << ", " << data[i].col << ") = " << data[i].value << "\n";
//    }
//}
//
//void SparseMatrix::add(SparseMatrix& other) {
//    if (rows != other.rows || cols != other.cols) {
//        cout << "Error: Matrices are not compatible for addition.\n";
//        return;
//    }
//    cout << "Adding matrices...\n";
//    Element* resultData = new Element[nonZeroCount + other.nonZeroCount];
//    int k = 0;
//    for (int i = 0; i < nonZeroCount; ++i) {
//        resultData[k++] = data[i];
//    }
//    for (int i = 0; i < other.nonZeroCount; ++i) {
//        bool found = false;
//        for (int j = 0; j < nonZeroCount; ++j) {
//            if (data[j].row == other.data[i].row && data[j].col == other.data[i].col) {
//                data[j].value += other.data[i].value;
//                found = true;
//                break;
//            }
//        }
//        if (!found) {
//            resultData[k++] = other.data[i];
//        }
//    }
//    cout << "Result of Addition:\n";
//    for (int i = 0; i < k; ++i) {
//        cout << "Element at (" << resultData[i].row << ", " << resultData[i].col << ") = " << resultData[i].value << "\n";
//    }
//    delete[] resultData;
//}
//
//void SparseMatrix::subtract(SparseMatrix& other) {
//    if (rows != other.rows || cols != other.cols) {
//        cout << "Error: Matrices are not compatible for subtraction.\n";
//        return;
//    }
//    cout << "Subtracting matrices...\n";
//    Element* resultData = new Element[nonZeroCount + other.nonZeroCount];
//    int k = 0;
//    for (int i = 0; i < nonZeroCount; ++i) {
//        resultData[k++] = data[i];
//    }
//    for (int i = 0; i < other.nonZeroCount; ++i) {
//        bool found = false;
//        for (int j = 0; j < nonZeroCount; ++j) {
//            if (data[j].row == other.data[i].row && data[j].col == other.data[i].col) {
//                data[j].value -= other.data[i].value;
//                found = true;
//                break;
//            }
//        }
//        if (!found) {
//            resultData[k++] = { other.data[i].row, other.data[i].col, -other.data[i].value };
//        }
//    }
//    cout << "Result of Subtraction:\n";
//    for (int i = 0; i < k; ++i) {
//        cout << "Element at (" << resultData[i].row << ", " << resultData[i].col << ") = " << resultData[i].value << "\n";
//    }
//    delete[] resultData;
//}
//
//void SparseMatrix::multiply(SparseMatrix& other) {
//    if (cols != other.rows) {
//        cout << "Error: Matrices are not compatible for multiplication.\n";
//        return;
//    }
//    cout << "Multiplying matrices...\n";
//    Element* resultData = new Element[rows * other.cols];
//    int k = 0;
//    for (int i = 0; i < nonZeroCount; ++i) {
//        for (int j = 0; j < other.nonZeroCount; ++j) {
//            if (data[i].col == other.data[j].row) {
//                bool found = false;
//                for (int l = 0; l < k; ++l) {
//                    if (resultData[l].row == data[i].row && resultData[l].col == other.data[j].col) {
//                        resultData[l].value += data[i].value * other.data[j].value;
//                        found = true;
//                        break;
//                    }
//                }
//                if (!found) {
//                    resultData[k++] = { data[i].row, other.data[j].col, data[i].value * other.data[j].value };
//                }
//            }
//        }
//    }
//    cout << "Result of Multiplication:\n";
//    for (int i = 0; i < k; ++i) {
//        cout << "Element at (" << resultData[i].row << ", " << resultData[i].col << ") = " << resultData[i].value << "\n";
//    }
//    delete[] resultData;
//}
//
//void SparseMatrix::transpose() {
//    cout << "Transposing matrix...\n";
//    Element* resultData = new Element[nonZeroCount];
//    for (int i = 0; i < nonZeroCount; ++i) {
//        resultData[i] = { data[i].col, data[i].row, data[i].value };
//    }
//    cout << "Transpose of the Matrix:\n";
//    for (int i = 0; i < nonZeroCount; ++i) {
//        cout << "Element at (" << resultData[i].row << ", " << resultData[i].col << ") = " << resultData[i].value << "\n";
//    }
//    delete[] resultData;
//}
