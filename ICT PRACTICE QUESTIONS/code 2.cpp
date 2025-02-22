#include <iostream>

using  namespace std;

int main()
{
	int n = 0;
	cout << "Enter the length of the array: ";
	cin >> n;

	int* arr = new int[n];

	cout << "Enter the elements of the array: ";

	for (int i = 0; i < n; i++)
	{
		cout << "Enter " << i << "th element of the array ";
		cin >> arr[i];
	}
	return 0;
}