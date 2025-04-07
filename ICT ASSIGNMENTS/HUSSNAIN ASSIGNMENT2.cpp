//
//#include <iostream>
//using namespace std;
//
//// Structure for each non-zero element
//struct Element {
//    int col;
//    int value;
//};
//
//// Structure for each row
//struct Row {
//    int count;
//    Element* elements;
//
//    Row() {
//        count = 0;
//        elements = nullptr;
//    }
//
//    ~Row() {
//        delete[] elements;
//    }
//};
//
//// Sparse Matrix Class
//class SparseMatrix {
//private:
//    int rows, cols;
//    Row* matrixRows;
//
//public:
//    SparseMatrix(int r, int c) {
//        rows = r;
//        cols = c;
//        matrixRows = new Row[rows];
//    }
//
//    ~SparseMatrix() {
//        delete[] matrixRows;
//    }
//
//    void input() {
//        cout << "Enter non-zero elements:\n";
//        for (int i = 0; i < rows; i++) {
//            cout << "Row " << i << " - Number of non-zero values: ";
//            cin >> matrixRows[i].count;
//
//            matrixRows[i].elements = new Element[matrixRows[i].count];
//
//            for (int j = 0; j < matrixRows[i].count; j++) {
//                cout << "  Enter column index and value: ";
//                cin >> matrixRows[i].elements[j].col >> matrixRows[i].elements[j].value;
//            }
//        }
//    }
//
//    void display() {
//        cout << "\nMatrix (" << rows << "x" << cols << "):\n";
//        for (int i = 0; i < rows; i++) {
//            int k = 0;
//            for (int j = 0; j < cols; j++) {
//                if (k < matrixRows[i].count && matrixRows[i].elements[k].col == j) {
//                    cout << matrixRows[i].elements[k].value << " ";
//                    k++;
//                }
//                else {
//                    cout << "0 ";
//                }
//            }
//            cout << endl;
//        }
//    }
//
//    SparseMatrix add(SparseMatrix& other) {
//        if (rows != other.rows || cols != other.cols) {
//            cout << "Addition failed: dimensions don't match.\n";
//            exit(1);
//        }
//
//        SparseMatrix result(rows, cols);
//
//        for (int i = 0; i < rows; i++) {
//            int size = matrixRows[i].count + other.matrixRows[i].count;
//            Element* temp = new Element[size];
//            int k = 0;
//
//            for (int a = 0; a < matrixRows[i].count; a++)
//                temp[k++] = matrixRows[i].elements[a];
//
//            for (int b = 0; b < other.matrixRows[i].count; b++) {
//                bool found = false;
//                for (int a = 0; a < matrixRows[i].count; a++) {
//                    if (other.matrixRows[i].elements[b].col == matrixRows[i].elements[a].col) {
//                        for (int t = 0; t < k; t++) {
//                            if (temp[t].col == matrixRows[i].elements[a].col) {
//                                temp[t].value += other.matrixRows[i].elements[b].value;
//                                found = true;
//                                break;
//                            }
//                        }
//                        break;
//                    }
//                }
//                if (!found)
//                    temp[k++] = other.matrixRows[i].elements[b];
//            }
//
//            result.matrixRows[i].count = k;
//            result.matrixRows[i].elements = new Element[k];
//            for (int j = 0; j < k; j++)
//                result.matrixRows[i].elements[j] = temp[j];
//
//            delete[] temp;
//        }
//
//        return result;
//    }
//
//    SparseMatrix subtract(SparseMatrix& other) {
//        if (rows != other.rows || cols != other.cols) {
//            cout << "Subtraction failed: dimensions don't match.\n";
//            exit(1);
//        }
//
//        SparseMatrix result(rows, cols);
//
//        for (int i = 0; i < rows; i++) {
//            int size = matrixRows[i].count + other.matrixRows[i].count;
//            Element* temp = new Element[size];
//            int k = 0;
//
//            for (int a = 0; a < matrixRows[i].count; a++)
//                temp[k++] = matrixRows[i].elements[a];
//
//            for (int b = 0; b < other.matrixRows[i].count; b++) {
//                bool found = false;
//                for (int a = 0; a < matrixRows[i].count; a++) {
//                    if (other.matrixRows[i].elements[b].col == matrixRows[i].elements[a].col) {
//                        for (int t = 0; t < k; t++) {
//                            if (temp[t].col == matrixRows[i].elements[a].col) {
//                                temp[t].value -= other.matrixRows[i].elements[b].value;
//                                found = true;
//                                break;
//                            }
//                        }
//                        break;
//                    }
//                }
//                if (!found) {
//                    temp[k].col = other.matrixRows[i].elements[b].col;
//                    temp[k].value = -other.matrixRows[i].elements[b].value;
//                    k++;
//                }
//            }
//
//            result.matrixRows[i].count = k;
//            result.matrixRows[i].elements = new Element[k];
//            for (int j = 0; j < k; j++)
//                result.matrixRows[i].elements[j] = temp[j];
//
//            delete[] temp;
//        }
//
//        return result;
//    }
//
//    SparseMatrix transpose() {
//        SparseMatrix result(cols, rows);
//
//        int* countPerCol = new int[cols]();
//        for (int i = 0; i < rows; i++)
//            for (int j = 0; j < matrixRows[i].count; j++)
//                countPerCol[matrixRows[i].elements[j].col]++;
//
//        for (int i = 0; i < cols; i++) {
//            result.matrixRows[i].count = countPerCol[i];
//            result.matrixRows[i].elements = new Element[countPerCol[i]];
//        }
//
//        int* currentIndex = new int[cols]();
//        for (int i = 0; i < rows; i++) {
//            for (int j = 0; j < matrixRows[i].count; j++) {
//                int col = matrixRows[i].elements[j].col;
//                int pos = currentIndex[col]++;
//                result.matrixRows[col].elements[pos].col = i;
//                result.matrixRows[col].elements[pos].value = matrixRows[i].elements[j].value;
//            }
//        }
//
//        delete[] countPerCol;
//        delete[] currentIndex;
//        return result;
//    }
//
//    SparseMatrix multiply(SparseMatrix& other) {
//        if (cols != other.rows) {
//            cout << "Multiplication failed: incompatible dimensions.\n";
//            exit(1);
//        }
//
//        SparseMatrix result(rows, other.cols);
//
//        for (int i = 0; i < rows; i++) {
//            int* temp = new int[other.cols]();
//            for (int a = 0; a < matrixRows[i].count; a++) {
//                int aCol = matrixRows[i].elements[a].col;
//                int aVal = matrixRows[i].elements[a].value;
//
//                for (int b = 0; b < other.matrixRows[aCol].count; b++) {
//                    int bCol = other.matrixRows[aCol].elements[b].col;
//                    int bVal = other.matrixRows[aCol].elements[b].value;
//
//                    temp[bCol] += aVal * bVal;
//                }
//            }
//
//            int count = 0;
//            for (int j = 0; j < other.cols; j++) {
//                if (temp[j] != 0)
//                    count++;
//            }
//
//            result.matrixRows[i].count = count;
//            result.matrixRows[i].elements = new Element[count];
//            int k = 0;
//            for (int j = 0; j < other.cols; j++) {
//                if (temp[j] != 0) {
//                    result.matrixRows[i].elements[k].col = j;
//                    result.matrixRows[i].elements[k].value = temp[j];
//                    k++;
//                }
//            }
//
//            delete[] temp;
//        }
//
//        return result;
//    }
//};
//
//// Main function
//int main() {
//    SparseMatrix mat1(3, 3);
//    SparseMatrix mat2(3, 3);
//
//    cout << "Enter Matrix 1:\n";
//    mat1.input();
//
//    cout << "\nEnter Matrix 2:\n";
//    mat2.input();
//
//    cout << "\nMatrix 1:";
//    mat1.display();
//
//    cout << "\nMatrix 2:";
//    mat2.display();
//
//    SparseMatrix sum = mat1.add(mat2);
//    cout << "\nMatrix 1 + Matrix 2:";
//    sum.display();
//
//    SparseMatrix diff = mat1.subtract(mat2);
//    cout << "\nMatrix 1 - Matrix 2:";
//    diff.display();
//
//    SparseMatrix trans1 = mat1.transpose();
//    cout << "\nTranspose of Matrix 1:";
//    trans1.display();
//
//    SparseMatrix product = mat1.multiply(mat2);
//    cout << "\nMatrix 1 * Matrix 2:";
//    product.display();
//
//    return 0;
//}