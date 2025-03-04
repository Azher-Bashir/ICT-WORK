//#include<iostream>
//using namespace std;
//
//int* reverse(int* ptr, int size) {
//	int* pointer = new int[size];
//	int j = 0;
//	for (int i = size - 1; i >= 0; i--)
//	{
//		pointer[j] = ptr[i];
//		j++;
//	}
//	return pointer;
//
//
//}
//
//int main() {
//	int size;
//	cout << "ENTER YOUR SIZE " << endl;
//	cin >> size;
//	cout << " ENTER THE ELEMENTS" << endl;
//	int* ptr;
//	ptr = new int[size];
//	for (int i = 0; i < size; i++) {
//		cin >> ptr[i];
//	}
//	int* ptrr;
//
//	ptrr = reverse(ptr, size);
//	cout << "YOUR REVERSED ARRAY IS " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << ptrr[i] << "  ";
//	}
//	delete[] ptr;
//
//
//	return 0;
//}