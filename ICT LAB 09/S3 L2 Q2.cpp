//Exercise 2:
//Using the abstract data Type of a Matrix given below, write a program that
//1. Input a 4 * 3 matrix from user in 2D array
//2. Map this array in 1D array using Row major order
//3. Input second matrix of 3 * 4 in 2D array
//4. Map this array in 1D array using Row major order.
//5. Now perform matrix multiplication on these 1D arrays
//6. Save the result back in a 2D array.
//Implement this question for any number of rows and columns using class
//#include<iostream>
//using namespace std;
//class matrix
//{
//	int** p;
//	int r;
//	int c;
//	int* rowmajor;
//	int* multiply1D;
//public:
//	matrix(int row, int col);
//	// Constructor
//	void disp2D();
//	// displays the elements of **p
//	void dispRowMajor();
//	// converts 2D into 1D using row major
//	//and displays the elements Row Major Order Matrix
//	void Multiply_rowMajor(matrix& x);
//	// Multiplies Matrices in row major order and
//	save the result in a 1D dynamic array
//		void rowMajor_2D();
//	// Maps the elements stored in row major order to
//	// the 2D array and print the results
//	~matrix();
//	// Destructor
//}
//void main()
//{
//	matrix a(4, 3);
//	matrix b(3, 4);
//	a.disp2D();
//	a.dispRowMajor();
//	b.disp2D();
//	b.dispRowMajor();
//	a.Multiply_rowMajor(b);
//	a.rowMajor_2D();
//}
//matrix::matrix(int row, int col)
//{
//	r = row;
//	c = col;
//	p = new int* [r];
//	for (int i = 0; i < r; i++)
//	{
//		p[i] = new int[c];
//		for (int j = 0; j < c; j++)
//			p[i][j] = (i + j);
//	}
//	// CODE FOR STORING DATA FROM
//	// **P
//	strt writing code in c++ below without using any vectors.


