////Write a code which creates two dynamic 2D arrays.Create a function which performs matrix multiplication and put the result in another dynamic array.Take the dimensions and elements of the matrices from the user.
//
//#include <iostream>
//using namespace std;
//
//int** multiplicationOfTwoMatrices(int** firstMatrix, int** secondMatrix, int rows1, int columns1, int rows2, int columns2) {
//	int** result = new int* [rows1];
//	for (int i = 0; i < rows1; i++) {
//		result[i] = new int[columns2];
//	}
//	for (int i = 0; i < rows1; i++) {
//		for (int j = 0; j < columns2; j++) {
//			result[i][j] = 0;
//			for (int k = 0; k < columns1; k++) {
//				result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
//			}
//		}
//	}
//	return result;
//}
//
//int main() {
//	int rows1, columns1, rows2, columns2;
//	cout << "ENTER THE NUMBER OF ROWS IN THE FIRST MATRIX: ";
//	cin >> rows1;
//	cout << "ENTER THE NUMBER OF COLUMNS IN THE FIRST MATRIX: ";
//	cin >> columns1;
//	cout << "ENTER THE NUMBER OF ROWS IN THE SECOND MATRIX: ";
//	cin >> rows2;
//	cout << "ENTER THE NUMBER OF COLUMNS IN THE SECOND MATRIX: ";
//	cin >> columns2;
//	if (columns1 != rows2) {
//		cout << "THE MATRICES CANNOT BE MULTIPLIED." << endl;
//		return 0;
//	}
//	int** firstMatrix = new int* [rows1];
//	for (int i = 0; i < rows1; i++) {
//		firstMatrix[i] = new int[columns1];
//	}
//	int** secondMatrix = new int* [rows2];
//	for (int i = 0; i < rows2; i++) {
//		secondMatrix[i] = new int[columns2];
//	}
//	cout << "ENTER THE ELEMENTS OF THE FIRST MATRIX:" << endl;
//	for (int i = 0; i < rows1; i++) {
//		for (int j = 0; j < columns1; j++) {
//			cin >> firstMatrix[i][j];
//		}
//	}
//	cout << "ENTER THE ELEMENTS OF THE SECOND MATRIX:" << endl;
//	for (int i = 0; i < rows2; i++) {
//		for (int j = 0; j < columns2; j++) {
//			cin >> secondMatrix[i][j];
//		}
//	}
//	int** result = multiplicationOfTwoMatrices(firstMatrix, secondMatrix, rows1, columns1, rows2, columns2);
//	cout << "THE RESULTANT MATRIX IS:" << endl;
//	for (int i = 0; i < rows1; i++) {
//		for (int j = 0; j < columns2; j++) {
//			cout << result[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < rows1; i++) {
//		delete[] firstMatrix[i];
//	}
//	delete[] firstMatrix;
//	for (int i = 0; i < rows2; i++) {
//		delete[] secondMatrix[i];
//	}
//	delete[] secondMatrix;
//	for (int i = 0; i
//		< rows1; i++) {
//		delete[] result[i];
//	}
//	delete[] result;
//	return 0;
//}
