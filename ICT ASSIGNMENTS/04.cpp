//#include <iostream>
//	
//using namespace std;
//
//bool isPrime(int n) {
//	if (n <= 1) {
//		return false;
//	}
//	for (int i = 2; i < n; i++) {
//		if (n % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int* PickLarger(int* array1, int* array2, int size) {
//	int* output = new int[size * 2];
//	for (int i = 0; i < size; i++) {
//		if (array1[i] > array2[i]) {
//			output[i] = array1[i];
//		}
//		else {
//			output[i] = array2[i];
//		}
//	}
//	int j = 0;
//	for (int i = size; i < size * 2; i++) {
//		while (true) {
//			if (isPrime(j)) {
//				output[i] = j;
//				j++;
//				break;
//			}
//			j++;
//		}
//	}
//	return output;
//}
//
//int* resize(int* array, int size) {
//	int* resizedArray = new int[size / 2];
//	for (int i = 0; i < size / 2; i++) {
//		resizedArray[i] = array[i];
//	}
//	return resizedArray;
//}
//
//int main() {
//	int size;
//	cout << "Enter the size of the arrays: ";
//	cin >> size;
//	int* array1 = new int[size];
//	int* array2 = new int[size];
//	cout << "Enter the elements of the first array:" << endl;
//	for (int i = 0; i < size; i++) {
//		cin >> array1[i];
//	}
//	cout << "Enter the elements of the second array:" << endl;
//	for (int i = 0; i < size; i++) {
//		cin >> array2[i];
//	}
//	int* output = PickLarger(array1, array2, size);
//	cout << "The output array is:" << endl;
//	for (int i = 0; i < size * 2; i++) {
//		cout << output[i] << " ";
//	}
//	cout << endl;
//	int* resizedArray1 = resize(array1, size);
//	int* resizedArray2 = resize(array2, size);
//	cout << "The resized first array is:" << endl;
//	for (int i = 0; i < size / 2; i++) {
//		cout << resizedArray1[i] << " ";
//	}
//	cout << endl;
//	cout << "The resized second array is:" << endl;
//	for (int i = 0; i < size / 2; i++) {
//		cout << resizedArray2[i] << " ";
//	}
//	cout << endl;
//	delete[] array1;
//	delete[] array2;
//	delete[] output;
//	delete[] resizedArray1;
//	delete[] resizedArray2;
//	return 0;
//}
