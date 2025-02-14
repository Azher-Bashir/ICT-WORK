#include <iostream>

using namespace std;
int multiplication(int** matrix1, int** matrix2, int rows1, int rows2, int coloumns1, int coloumns2)
{
	if (coloumns1 == rows2)
	{
		for
	}
	else
		cout << "!!! Multiplication is not possible because the number of coloumns of the first matrix is not equal to the number of rows of the second matrix !!!" << endl;
}

int main()
{
	int coloumns1, rows1, coloumns2, rows2;
	cout << "Enterh the number of rows for first matrix: ";
	cin >> rows1;
	//HERE BEGANS THE MATRIX 1_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
	cout << "Enter coloumns for first matrix: ";
	cin >> coloumns1;

	int** matrix1 = new int* [rows1];


	for (int i = 0; i < rows1; i++)
	{
		matrix1[i] = new int[coloumns1];
	}

	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < coloumns1; j++)
		{
			cout << "Enter the (" << i << ", " << j << ") element: ";
			cin >> matrix1[i][j];
		}
	}
	cout << endl;
	cout << "The first matrix that you entered is: " << endl;
	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < coloumns1; j++)
		{
			cout << matrix1[i][j] << '\t';
		}
		cout << endl;
	}
	//HERE BEGANS THE MATRIX 2_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
	cout << "Enter the rows for second matrix: ";
	cin >> rows2;
	cout << "Enter the coloumns for second matrix: ";
	cin >> coloumns2;

	int** matrix2 = new int*[rows2];

	for (int i = 0; i < rows2; i++)
	{
		matrix2[i] = new int[coloumns2];
	}

	for (int i = 0; i < rows2; i++)
	{
		for (int j = 0; j < coloumns2; j++)
		{
			cout << "Enter (" << i << ", " << j << ") element of the matrix: ";
			cin >> matrix2[i][j];
		}
	}
	cout << endl;
	cout << "The second matricx that you entered is: " << endl;
	for (int i = 0; i < rows2; i++)
	{
		for (int j = 0; j < coloumns2; j++)
		{
			cout << matrix2[i][j] << '\t';
		}
		cout << endl;
	}
	
}