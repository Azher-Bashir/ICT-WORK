//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class sparse_matrix
//{
//private:
//	int rows1;
//	int cols1;
//	int* non_zero1;
//	int** matrix;
//	int** sparse_rep;
//public:
//	sparse_matrix();
//	sparse_matrix(int, int);
//	~sparse_matrix();
//	void set_rows(int);
//	void set_cols(int);
//	int get_rows() const;
//	int get_cols() const;
//	int** sparse(int, int);
//	void get_nonZero(int*);
//	void set_sparse_rep(int**);
//	void sparse_to_matrix();
//	void print_matrix() const;
//};
//sparse_matrix::sparse_matrix()
//{
//	rows1 = 0;
//	cols1 = 0;
//	non_zero1 = nullptr;
//	matrix = nullptr;  
//	sparse_rep = nullptr;
//}
//sparse_matrix::sparse_matrix(int r, int c)
//{
//	cols1 = c;
//	rows1 = r;
//	non_zero1 = nullptr;
//	sparse_rep = nullptr; 
//
//	matrix = new int* [rows1];
//	for (int i = 0; i < rows1; i++)
//	{
//		matrix[i] = new int[cols1]();
//	}
//}
//void sparse_matrix::set_rows(int rows)
//{
//	this->rows1 = rows;
//}
//
//void sparse_matrix::set_cols(int cols)
//{
//	this->cols1 = cols;
//}
//
//int sparse_matrix::get_rows() const
//{
//	return rows1;
//}
//
//int sparse_matrix::get_cols() const
//{
//	return cols1;
//}
//
//void sparse_matrix::get_nonZero(int* nonZeroEntries)
//{
//	non_zero1 = nonZeroEntries;
//}
//void sparse_matrix::set_sparse_rep(int** sparseRep)
//{
//	sparse_rep = sparseRep;
//}
//
//int** sparse_matrix::sparse(int r, int c)
//{
//	rows1 = r;
//	cols1 = c;
//	non_zero1 = new int[rows1];
//	sparse_rep = new int* [rows1];
//	for (int i = 0; i < rows1; i++)
//	{
//		sparse_rep[i] = new int[3 * non_zero1[i]];
//	}
//	return sparse_rep;
//}
//
//void sparse_matrix::sparse_to_matrix()
//{
//	for (int i = 0; i < rows1; i++)
//	{
//		for (int j = 0; j < cols1; j++)
//		{
//			matrix[i][j] = 0;
//		}
//	}
//
//	for (int i = 0; i < rows1; i++)
//	{
//		for (int j = 0; j < non_zero1[i]; j++)
//		{
//			int col = sparse_rep[i][2 * j + 1];
//			int value = sparse_rep[i][2 * j + 2];
//			matrix[i][col] = value;
//		}
//	}
//}
//
//void sparse_matrix::print_matrix() const
//{
//	cout << "sparse matrix is: " << endl;
//	for (int i = 0; i < rows1; i++)
//	{
//		for (int j = 0; j < cols1; j++)
//		{
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//
//sparse_matrix::~sparse_matrix()
//{
//	delete[] non_zero1;
//	for (int i = 0; i < rows1; i++)
//	{
//		delete[] matrix[i];
//		delete[] sparse_rep[i];
//	}
//	delete[] matrix;
//	delete[] sparse_rep;
//}
//
//
//int main()
//{
//	int rows1, cols1, * non_zero1, ** sparse_rep1;
//	cout << "Enter the total number of rows for matrix 1: ";
//	cin >> rows1;
//	cout << "Enter the total number of columns matrix 1: ";
//	cin >> cols1;
//	//taking non_zero elements
//	non_zero1 = new int[rows1];
//	cout << "Enter the number of non-zero elements for each row for matrix 1: " << endl;
//	for (int i = 0; i < rows1; i++)
//	{
//		cout << "Enter for row " << i << ": ";
//		cin >> non_zero1[i];
//	}
//	//creating an object and calling a parameterized constructor
//	sparse_matrix matr(rows1, cols1);
//	matr.get_nonZero(non_zero1);
//	sparse_rep1 = new int* [rows1];
//	for (int i = 0; i < rows1; i++)
//	{
//		sparse_rep1[i] = new int[3 * non_zero1[i]];
//	}
//	//ENTERING  ELEMENTS IN SPARSE REPRESENTATION
//	cout << "Enter the sparse representation: " << endl;
//	cout << "N" << '\t' << "C" << '\t' << "V" << '\t' << "C" << '\t' << "V" << endl;
//	for (int i = 0; i < rows1; i++)
//	{
//		for (int j = 0; j < non_zero1[i]; j++)
//		{ 
//			if (j == 0)
//			{
//				sparse_rep1[i][j] = non_zero1[i];
//				cout << sparse_rep1[i][j];
//			}
//			cin >> sparse_rep1[i][2 * j + 1];
//			cin >> sparse_rep1[i][2 * j + 2];
//		}
//	}
//	matr.set_sparse_rep(sparse_rep1);
//	matr.sparse_to_matrix(); // converting sparse representation to dense matrix
//	matr.print_matrix();
//	cout << "End" << endl;
//
//
//
//	return 0;
//}
