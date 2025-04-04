#include<iostream>
using namespace std;

class sparse_matrix
{
private:
	int rows, cols;
	int* non_zero;
	int** sparse_rep;
	int** matrix;
public:
	sparse_matrix();
	sparse_matrix(int, int);
	void set_non_zero1(int*);
	void set_rows(int);
	void set_cols(int);
	int* get_non_zero();
	int get_rows();
	int get_cols();
	void set_sparse_rep1(int**);
	int** sparse_to_dense();
	void print_matrix(int, int);
};
sparse_matrix::sparse_matrix()
{
	rows = 0;
	cols = 0;
	non_zero = nullptr;
	sparse_rep = nullptr;
	matrix = nullptr;
}
sparse_matrix::sparse_matrix(int rows, int cols)
{
	this->rows = rows;
	this->cols = cols;
	non_zero = nullptr;
	sparse_rep = nullptr;
	matrix = nullptr;

	matrix = new int*[this->rows];
	for (int i = 0; i < this->rows; i++)
	{
		matrix[i] = new int[this->cols];
	}
}
void sparse_matrix::set_non_zero1(int* non_zero)
{
	this->non_zero = non_zero;
}
void sparse_matrix::set_rows(int rows)
{
	this->rows = rows;
}
void sparse_matrix::set_cols(int cols)
{
	this->cols = cols;
}
int* sparse_matrix::get_non_zero()
{
	return non_zero;
}
int sparse_matrix::get_rows()
{
	return rows;
}
int sparse_matrix::get_cols()
{
	return cols;
}
void sparse_matrix::set_sparse_rep1(int** sparse)
{
	sparse_rep = sparse;
}
int** sparse_matrix::sparse_to_dense()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = 0;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < non_zero[i]; j++)
		{
			if (sparse_rep[i][0] != 0)
			{
				int col_no = sparse_rep[i][(2 * j) + 1];
				int value = sparse_rep[i][2 * j + 2];
				matrix[i][col_no] = value;
			}
		}
	}
	return matrix;
}
void sparse_matrix::print_matrix(int rows, int cols)
{
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int rows, cols, * non_zero, ** sparse_rep, **matrix;

	cout << "Enter total rows for matrix: ";
	cin >> rows;
	cout << "Enter cols for the matrix: ";
	cin >> cols;

	non_zero = new int[rows];
	cout << "Enter the nonn_zero elements for each row: " << endl;
	for (int i = 0; i < rows; i++)
	{
		cout << "Enter the non_zero elements for " << i << " row: ";
		cin >> non_zero[i];
	}
	// initializing sparse matrix
	sparse_rep = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		sparse_rep[i] = new int[2 * non_zero[i] + 1];
	}
	// taking input in sparse matrix
	cout << "Enter the matrix inn sparse representation: " << endl;
	cout << "N" << '\t' << "C" << '\t' << "V" << '\t' << "C" << '\t' << "V" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < (2 * non_zero[i] + 1); j++)
		{
			if (j == 0)
			{
				sparse_rep[i][j] = non_zero[i];
				cout << sparse_rep[i][j] << '\t';
			}
			else
			{
				cin >> sparse_rep[i][j];
			}
		}
	}
	sparse_matrix m1(rows, cols);
	m1.set_non_zero1(non_zero);
	m1.set_sparse_rep1(sparse_rep);
	matrix = m1.sparse_to_dense();
	cout << "SPARSE MATRIX";
	m1.print_matrix(rows, cols);

	return 0;
}