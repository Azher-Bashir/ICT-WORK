//#include <iostream>
//using namespace std;
//
//void MatrixMultiplication(int** Matrix1, int** Matrix2, int coloum1, int row1, int coloum2, int row2) {
//	int** Matrix3 = new int* [row1];
//	for (int i = 0; i < row1; i++) {
//		Matrix3[i] = new int[coloum2];
//	}
//	int sum = 0;
//	for (int i = 0; i < row1; i++) {
//		for (int j = 0; j < coloum2; j++) {
//			sum = 0;
//			for (int k = 0; k < coloum1; k++) {
//				sum += Matrix1[i][k] * Matrix2[k][j];
//			}
//			Matrix3[i][j] = sum;
//		}
//	}
//	cout << "Matrix3: " << endl;
//	for (int i = 0; i < row1; i++) {
//		for (int j = 0; j < coloum2; j++) {
//			cout << Matrix3[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	// Cleanup memory
//	for (int i = 0; i < row1; i++) {
//		delete[] Matrix3[i];
//	}
//	delete[] Matrix3;
//}
//
//int main() {
//	int row1, coloum1;
//	cout << "Enter the size of Row1: " << endl;
//	cin >> row1;
//	cout << "Enter the size of coloum1: " << endl;
//	cin >> coloum1;
//	int** Matrix1 = new int* [row1];
//	for (int i = 0; i < row1; i++) {
//		Matrix1[i] = new int[coloum1];
//	}
//	cout << "Enter the Elements in Matrix1: " << endl;
//	for (int i = 0; i < row1; i++) {
//		for (int j = 0; j < coloum1; j++) {
//			cin >> Matrix1[i][j];
//		}
//	}
//
//	int row2, coloum2;
//	cout << "Enter the size of Row2: " << endl;
//	cin >> row2;
//	cout << "Enter the size of coloum2: " << endl;
//	cin >> coloum2;
//	int** Matrix2 = new int* [row2];
//	for (int i = 0; i < row2; i++) {
//		Matrix2[i] = new int[coloum2];
//	}
//	cout << "Enter the Elements in Matrix2: " << endl;
//	for (int i = 0; i < row2; i++) {
//		for (int j = 0; j < coloum2; j++) {
//			cin >> Matrix2[i][j];
//		}
//	}
//
//	// Check if matrix multiplication is possible
//	if (coloum1 != row2) {
//		cout << "Matrix multiplication not possible with given dimensions." << endl;
//		return 1;
//	}
//
//	MatrixMultiplication(Matrix1, Matrix2, coloum1, row1, coloum2, row2);
//
//	// Cleanup memory
//	for (int i = 0; i < row1; i++) {
//		delete[] Matrix1[i];
//	}
//	delete[] Matrix1;
//
//	for (int i = 0; i < row2; i++) {
//		delete[] Matrix2[i];
//	}
//	delete[] Matrix2;
//
//	return 0;
//}