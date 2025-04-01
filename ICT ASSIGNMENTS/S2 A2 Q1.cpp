#include <iostream>
#include <string>

using namespace std;

class sparse_matrix
{
private:
	int rows;
	int cols;
	int* non_zero;
	int** matrix;
	int** sparse_rep;
public:
	sparse_matrix();
	sparse_matrix(int, int);
	void set_rows(int);
	void set_cols(int);
	int get_rows();
	int get_cols();
	int** sparse(int, int);
	void get_nonZero(int*);
	void get_sparse_rep(int**);

	void print_matrix();
};

void sparse_matrix::get_nonZero(int* nonZeroEntries)
{
	non_zero = nonZeroEntries;
}
void sparse_matrix::get_sparse_rep(int** sparseRep)
{
	sparse_rep = sparseRep;
}
int** sparse_matrix::sparse(int r, int c)
{
	rows = r;
	cols = c;
	non_zero = new int [rows];
	sparse_rep = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		sparse_rep[i] = new int[3 * non_zero[i]];
	}
}
sparse_matrix::sparse_matrix()
{
	rows = 0;
	cols = 0;
	non_zero = 0;
}
sparse_matrix::sparse_matrix(int r, int c)
{
	this->rows = r;
	this->cols = c;

	matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}
}
void sparse_matrix::set_rows(int rows)
{
	this->rows = rows;
}
void sparse_matrix::set_cols(int cols)
{
	this->cols = cols;
}
int sparse_matrix :: get_rows()
{
	return rows;
}
int sparse_matrix::get_cols()
{
	return cols;
}



void sparse_matrix::print_matrix()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}



