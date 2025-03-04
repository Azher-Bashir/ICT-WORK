//You are required to write a program which will take input from user in two integer arrays.The
//program should compare both arrays for checking if both arrays are totally identical(Exactly same in size
//	and elements).
//	Write a boolean function which return true if arrays are totally identical otherwise return false

#include <iostream>
using namespace std;

bool identical(int* array1, int* array2, int size) {
	for (int i = 0; i < size; i++) {
		if (array1[i] != array2[i]) {
			return false;
		}
	}
	return true;
}

int main() {
	int size1, size2;
	cout << "Enter the size of the first array: ";
	cin >> size1;
	cout << "Enter the size of the second array: ";
	cin >> size2;
	if (size1 != size2) {
		cout << "The arrays are not equal in size." << endl;
		return 0;
	}
	int* array1 = new int[size1];
	int* array2 = new int[size2];
	cout << "Enter the elements of the first array:" << endl;
	for (int i = 0; i < size1; i++) {
		cin >> array1[i];
	}
	cout << "Enter the elements of the second array:" << endl;
	for (int i = 0; i < size2; i++) {
		cin >> array2[i];
	}
	bool result = identical(array1, array2, size1);
	if (result) {
		cout << "The entered arrays are equal to each other in size and entries." << endl;
	}
	else {
		cout << "The entered arrays are not equal to each other in size and entries." << endl;
	}
	delete[] array1;
	delete[] array2;
	return 0;
}
