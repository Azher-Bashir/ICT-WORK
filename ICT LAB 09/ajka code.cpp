#include <iostream>
using namespace std;

int main() {
    int size;

    
    cout << "Enter the size of the array: ";
    cin >> size;

    
    int* arr = new int[size];

    
    int* ptr = arr;  
    for (int i = 0; i < size; ++i) {
		cin >> *(ptr + i);
    }

    
    cout << "The array elements are: ";
    for (int i = 0; i < size; ++i) {
        cout << *(ptr + i) << " ";  
    }
    cout << endl;

    
    delete[] arr;

    return 0;
}
