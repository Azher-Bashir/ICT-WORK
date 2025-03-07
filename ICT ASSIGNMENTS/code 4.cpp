#include <iostream>

using namespace std;

void getData(int list[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> list[i];
    }
}

bool isPrime(int num) {
    if (num <= 1) 
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) 
            return false;
    }
    return true;
}

void fillWithPrimes(int* array, int start, int size) {
    int num = 2;
    for (int i = start; i < size; i++) {
        while (!isPrime(num)) {
            num++;
        }
        array[i] = num;
        num++;
    }
}

void pickLarger(int list1[], int list2[], int size, int* outputArray) {
    for (int i = 0; i < size; i++) {
        outputArray[i] = (list1[i] >= list2[i]) ? list1[i] : list2[i];
    }
    fillWithPrimes(outputArray, size, size * 2);
}

void resizeArray(int*& originalArray, int newSize) 
{
    int* newArray = new int[newSize];
    for (int i = 0; i < newSize; i++)
    {
        newArray[i] = originalArray[i];
    }
    delete[] originalArray;
    originalArray = newArray;
}

int main() {
    int size;
    cout << "Enter the size of the Array" << endl;
    cin >> size;
    int* list1 = new int[size];
    cout << "Enter the Data in list1: " << endl;
    getData(list1, size);

    int* list2 = new int[size];
    cout << "Enter the Data in list2: " << endl;
    getData(list2, size);

    int newSize = size * 2;
    int* outputArray = new int[newSize];
    pickLarger(list1, list2, size, outputArray);

    cout << "Output Array: ";
    for (int i = 0; i < newSize; i++) {
        cout << outputArray[i] << " ";
    }
    cout << endl;

    delete[] list1;
    delete[] list2;
    delete[] outputArray;

    return 0;
}
