#include <iostream>
#include <string>

using namespace std;

class sparse_matrix
{
private:
	int rows;
	int cols;
	int non_zero_rows;
	int** matrix;
public:
	sparse_matrix();
	sparse_matrix(int, int);
	void set_rows(int);
	void set_cols(int);
	int get_rows();
	int get_cols();
	int** creat_matrix(int, int);
	void sparse(int, int, int);
	int** sparse(int, int);
	void print_matrix();
};

sparse_matrix::sparse_matrix()
{
	rows = 0;
}
sparse_matrix::sparse_matrix(int rows, int cols)
{
	this->rows = rows;
	this->cols = cols;
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

int** sparse_matrix::sparse(int rows, int cols)
{
	matrix = new int* [this->rows];
	for (int i = 0; i < this->rows; i++)
	{
		matrix[i] = new int[cols];
	}
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


