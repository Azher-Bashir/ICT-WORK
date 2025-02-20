#include <iostream>

using namespace std;


void printMatrix(int** matrix, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}


void transposeMatrix(int** matrix, int** transpose, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            transpose[j][i] = matrix[i][j];  
        }
    }
}

int main() {
    int n;

    
    cout << "Enter the size of the matrix ";
    cin >> n;

    
    int** matrix = new int* [n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n];
    }

    
    int** transpose = new int* [n];
    for (int i = 0; i < n; ++i) {
        transpose[i] = new int[n];
    }

    
    cout << "Enter the elements of the matrix" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    
    cout << "Original Matrix" << endl;
    printMatrix(matrix, n);

    
    transposeMatrix(matrix, transpose, n);

    
    cout << "Transposed Matrix" << endl;
    printMatrix(transpose, n);

    
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
        delete[] transpose[i];
    }
    delete[] matrix;
    delete[] transpose;

    return 0;
}
