#include <iostream>
#include <cmath>
using namespace std;
static int squareSum(int square)
{
	int square_sum = 0;
	for (int i = 0; i <= 10; i++)
	{
		square_sum += pow(i, 2);
	}
	cout << "First square and then their sum is: " << square_sum << endl;
	return square_sum;
}
static int sumSquare(int su)
{
	int sum_square = 0;
	for (int j = 0; j <= 10; j++)
	{
		sum_square += j;
	}
	cout << "First sum and then there square is: " << pow(sum_square, 2) << endl;
	return sum_square;
}
int main()
{
	int square = 0, su = 0;
	cout << "Difference of them is: " << pow(sumSquare(su), 2) - squareSum(square) << endl;
	return 0;
}