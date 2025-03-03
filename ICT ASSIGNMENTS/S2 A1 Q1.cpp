#include <iostream>

using namespace std;
int** multiplication(int** matrix1, int** matrix2, int rows1, int rows2, int coloumns1, int coloumns2)
{
	int sum = 0;
	int** new_matrix = new int* [rows1];
	for (int i = 0; i < rows1; i++)
	{
		new_matrix[i] = new int[coloumns2];
	}
	if (coloumns1 == rows2)
	{
		int k = 0;
		for (int i = 0; i < rows1; i++)
		{
			for (int j = 0; j < coloumns1; j++)
			{
				for (int k = 0; k < coloumns2; k++)
				{
					sum = 0;
					for(int l = 0; l < rows2; l++)
					{

						sum += matrix1[i][j] * matrix2[l][k];
						new_matrix[i][k] = sum;
					}
				}
			}
		}

		for (int i = 0; i < rows1; i++)
		{
			for (int j = 0; j < coloumns2; j++)
			{
				cout << new_matrix[i][j] << '\t';
			}
			cout << endl;
		}
	}
	else
		cout << "!!! multiplication is not possible because the number of coloumns of the first matrix is not equal to the number of rows of the second matrix !!!" << endl;

	return new_matrix;
}

int main()
{
	int coloumns1, rows1, coloumns2, rows2;
	cout << "enterh the number of rows for first matrix: ";
	cin >> rows1;
	//here begans the matrix 1_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
	cout << "enter coloumns for first matrix: ";
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
			cout << "enter the (" << i << ", " << j << ") element: ";
			cin >> matrix1[i][j];
		}
	}
	cout << endl;
	cout << "the first matrix that you entered is: " << endl;
	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < coloumns1; j++)
		{
			cout << matrix1[i][j] << '\t';
		}
		cout << endl;
	}
	//here begans the matrix 2_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
	cout << "enter the rows for second matrix: ";
	cin >> rows2;
	cout << "enter the coloumns for second matrix: ";
	cin >> coloumns2;

	int** matrix2 = new int* [rows2];

	for (int i = 0; i < rows2; i++)
	{
		matrix2[i] = new int[coloumns2];
	}

	for (int i = 0; i < rows2; i++)
	{
		for (int j = 0; j < coloumns2; j++)
		{
			cout << "enter (" << i << ", " << j << ") element of the matrix: ";
			cin >> matrix2[i][j];
		}
	}
	cout << endl;
	cout << "the second matricx that you entered is: " << endl;
	for (int i = 0; i < rows2; i++)
	{
		for (int j = 0; j < coloumns2; j++)
		{
			cout << matrix2[i][j] << '\t';
		}
		cout << endl;
	}
	cout << endl << endl;

	multiplication(matrix1, matrix2, rows1, rows2, coloumns1, coloumns2);

	return 0;

}