//CLO No. 2: Design a program using object - oriented programming paradigm.How can you design a memory - efficient Sparse Matrix Calculator using Object - Oriented Programming(OOP)
//principles in C++.You are required to create a class of sparse matrix.The data members of the class must be number of rows, number of columns and a pointer to pointer to store the elements of the matrix.This class - based design can
//use pointers, dynamic memory allocation, and efficient data storage techniques.Your program should support matrix
//operations such as addition, subtraction, multiplication, and transpose.Implement all the operations on sparse
//matrix as member functions of the sparse matrix class.Sparse Matrix :
//A sparse matrix is a matrix in which most of the elements are zero.Storing all elements(including zeros) in memory is
//not efficient.To overcome this, we store only non - zero elements along with their positions.Operations :
//	Output matrix : Output a sparse matrix in standard form(both zero and non - zero entries)
//	Addition : Implement a function to add two sparse matrices if they are compatible for addition and
//	return the resultant.Subtraction : Implement a function to subtract one sparse matrix from another if they are compatible
//	for subtraction and return the resultant.Multiplication : Implement a function to multiply two sparse matrices if they are compatible for multiplication
//		and return the resultant.Transpose : Implement a function to transpose a sparse matrix.Details :
//		Each sparse matrix has dimensions(number of rows and columns) and its data(values).For example consider the
//		following sparse matrix of dimension 4x6
//		0 0 1 0 8 0
//		4 0 0 0 7 0
//		National University of Computer and Emerging Sciences, Lahore Campus
//		Course Name : Programming Fundamentals Course Code : CS1002
//		Program : BS Electrical Engineering Semester : Spring 2025
//		Assignment
//		Submission
//		Date : 31 - March - 2025
//
//		Total Marks : 30
//		Weight : 3.3
//		Section : BEE - 2A and BEE - 2D Page(s) : 2
//		Exam Type : Assignment - 2 (PBL)CLO # 2
//
//		Instructions: 1. Submit the soft copy to Google Classroom Folder. 2. Late submissions are not allowed. 3. Plagiarism may cause 0 mark in assignment.
//
//		Department of Electrical Engineering Page | 2 of 2
//		0 0 3 0 0 0
//		0 0 0 4 0 0
//
//		The sparse representation will be as follows :
//2 2 1 4 8
//2 0 4 4 7
//1 2 3
//1 3 4
//
//Here the first entry mentions the total number of non - zero entries followed by column number and data
//value of each non - zero entry.The first row has 2 non - zero entries.First one at column 2 and value 1. Second one at column 4 and value 8.

#include <iostream>
#include <string>
using namespace std;

class sparse_matrix {
private:
	int rows;
	int columns;
	int** matrix;
	int non_zero;
public:

	sparse_matrix(int r, int c) {
		rows = r;
		columns = c;
		matrix = new int* [r];
		for (int i = 0; i < r; i++) {
			matrix[i] = new int[c];
		}
		non_zero = 0;
	}
	void input_matrix() {
		cout << "Enter the elements of the matrix: " << endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				cin >> matrix[i][j];
				if (matrix[i][j] != 0) {
					non_zero++;
				}
			}
		}
	}
	void output_matrix() {
		cout << "The matrix is: " << endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}
	void sparse_representation() {
		cout << "The sparse representation of the matrix is: " << endl;
		cout << rows << " " << columns << " " << non_zero << endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				if (matrix[i][j] != 0) {
					cout << i << " " << j << " " << matrix[i][j] << endl;
				}
			}
		}
	}
	sparse_matrix* add(sparse_matrix* a) {
		if (rows != a->rows || columns != a->columns) {
			cout << "The matrices are not compatible for addition." << endl;
			return NULL;
		}
		sparse_matrix* result = new sparse_matrix(rows, columns);
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				result->matrix[i][j] = matrix[i][j] + a->matrix[i][j];
				if (result->matrix[i][j] != 0) {
					result->non_zero++;
				}
			}
		}
		return result;

	}
	sparse_matrix* subtract(sparse_matrix* a) {
		if (rows != a->rows || columns != a->columns) {
			cout << "The matrices are not compatible for subtraction." << endl;
			return NULL;
		}
		sparse_matrix* result = new sparse_matrix(rows, columns);
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				result->matrix[i][j] = matrix[i][j] - a->matrix[i][j];
				if (result->matrix[i][j] != 0) {
					result->non_zero++;
				}
			}
		}
		return result;
	}

	sparse_matrix* multiply(sparse_matrix* a) {
		if (columns != a->rows) {
			cout << "The matrices are not compatible for multiplication." << endl;
			return NULL;
		}
		sparse_matrix* result = new sparse_matrix(rows, a->columns);
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < a->columns; j++) {
				result->matrix[i][j] = 0;
				for (int k = 0; k < columns; k++) {
					result->matrix[i][j] += matrix[i][k] * a->matrix[k][j];
				}
				if (result->matrix[i][j] != 0) {
					result->non_zero++;
				}
			}
		}
		return result;
	}
	sparse_matrix* transpose() {
		sparse_matrix* result = new sparse_matrix(columns, rows);
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				result->matrix[j][i] = matrix[i][j];
				if (result->matrix[j][i] != 0) {
					result->non_zero++;
				}
			}
		}
		return result;
	}

	};


	int main() {
		int r, c;
		cout << "Enter the number of rows: ";
		cin >> r;
		cout << "Enter the number of columns: ";
		cin >> c;
		sparse_matrix* a = new sparse_matrix(r, c);
		a->input_matrix();
		a->output_matrix();
		a->sparse_representation();
		sparse_matrix* b = new sparse_matrix(r, c);
		b->input_matrix();
		b->output_matrix();
		b->sparse_representation();
		sparse_matrix* result = a->add(b);
		if (result != NULL) {
			result->output_matrix();
			result->sparse_representation();
		}
		result = a->subtract(b);
		if (result != NULL) {
			result->output_matrix();
			result->sparse_representation();
		}
		result = a->multiply(b);
		if (result != NULL) {
			result->output_matrix();
			result->sparse_representation();
		}
		result = a->transpose();
		result->output_matrix();
		result->sparse_representation();
		return 0;
	}
