#include <iostream>
using namespace std;
static int* row_major(int** arr, int rows, int cols)
{
	int* arr2 = new int[rows*cols];
	int k = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr2[k++] = arr[i][j];
			arr2[i * cols + j] = arr[i][j];
		}
	}
	return arr2;
}
void print_matrix(int**arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}
void print1D(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	int rows = 0, cols = 0;
	cout << "Enter the number of rows and cols: ";
	cin >> rows >> cols;
	int size = rows * cols;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	cout << "Enter the values in the matrix:" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> arr[i][j];
		}
		//cout << endl;
	}
	print_matrix(arr, rows, cols);
	int* result = new int[size];
	result = row_major(arr, rows, cols);
	print1D(result, size);
}