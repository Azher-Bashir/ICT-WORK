//#include<iostream>
//using namespace std;
//
//int main() {
//	int** matrix1;
//	int** matrix2;
//	int** matrix3;
//	int rows1, columns1, columns2, rows2 , rows3 , columns3;
//	cout << " enter the number of rows" << endl;
//	cin >> rows1;
//	cout << " Enter the number of columns ";
//	cin >> columns1;
//
//
//
//	matrix1 = new int *[rows1];
//	for (int i = 0; i < rows1; i++) {
//		matrix1[i] = new int[columns1];
//	}
//
//			cout << " enter the elemnts";
//	for (int i = 0; i < rows1; i++) {
//		for (int j = 0; j < columns1; j++) {
//			cin >> matrix1[i][j];
//
//		}
//	}
//	//mstrix2
//	cout << " enter number of row" << endl;
//	cin >> rows2;
//	cout << " enter number of column  " << endl;
//	cin >> columns2;
//	matrix2 = new int* [rows2];
//	for (int i = 0; i < rows2; i++) {
//		matrix2[i] = new int[columns2];
//	}
//
//			cout << " enter the elemnts of second matrix";
//	for (int i = 0; i < rows2; i++) {
//		for (int j = 0; j < columns2; j++) {
//			cin >> matrix2[i][j];
//			//cout << matrix2[i][j];
//		}
//	}
//	for (int i = 0; i < rows2; i++) {
//		for (int j = 0; j < columns2; j++) {
//			cout << matrix2[i][j] << '\t';
//		}
//		cout << endl;
//	}
//
//	rows3 = rows1;
//	columns3 = columns1;
//	//matrix3
//	matrix3 = new int* [rows3];
//	for (int i = 0; i < rows2; i++) {
//		matrix3[i] = new int[columns3];
//	}
//	cout << " the new addition matrix will be ";
//	if (rows1==rows2 && columns1==columns2)
//	{
//		for (int i = 0; i < rows3; i++) {
//			for (int j = 0; j < columns3; j++) {
//				matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
//			}
//		}			cout << endl;
//		for (int i = 0; i < rows3; i++) {
//			for (int j = 0; j < columns3; j++) {
//				cout << matrix3[i][j] << '\t';
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}