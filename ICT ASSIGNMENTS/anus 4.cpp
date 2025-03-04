//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int* PickLarger(int* arr1, int* arr2, int size);
//bool isPrime(int n);
//void generate_primes(int* primes, int count);
//int* Resize(int* arr, int size);
//
//int main()
//{
//    int size;
//    cout << "Enter the size of the arrays: ";
//    cin >> size;
//    int* arr1 = new int[size];
//    int* arr2 = new int[size];
//    cout << "Enter the elements of the first array: ";
//    for (int i = 0; i < size; i++)
//    {
//        cin >> arr1[i];
//    }
//    cout << "Enter the elements of the second array: ";
//    for (int i = 0; i < size; i++)
//    {
//        cin >> arr2[i];
//    }
//    int* output = PickLarger(arr1, arr2, size);
//    cout << "Output Array: ";
//    for (int i = 0; i < size * 2; i++)
//    {
//        cout << output[i] << " ";
//    }
//    cout << endl;
//    int* resized = Resize(output, size);
//    cout << "Resized Array: ";
//    for (int i = 0; i < size * 2; i++)
//    {
//        cout << resized[i] << " ";
//    }
//    cout << endl;
//    delete[] arr1;
//    delete[] arr2;
//    delete[] output;
//    delete[] resized;
//    return 0;
//}
//
//int* PickLarger(int* arr1, int* arr2, int size)
//{
//    int* output = new int[size * 2];
//    for (int i = 0; i < size; i++)
//    {
//        if (arr1[i] > arr2[i])
//        {
//            output[i] = arr1[i];
//        }
//        else
//        {
//            output[i] = arr2[i];
//        }
//    }
//    for (int i = size; i < size * 2; i++)
//    {
//        output[i] = 0;
//    }
//    return output;
//}
//
//bool isPrime(int n)
//{
//    if (n <= 1)
//    {
//        return false;
//    }
//    for (int i = 2; i <= sqrt(n); i++)
//    {
//        if (n % i == 0)
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//void generate_primes(int* prime_array, int prime_count)
//{
//    int current_num = 2;
//    int primes_found = 0;
//    while (primes_found < prime_count)
//    {
//        if (isPrime(current_num))
//        {
//            prime_array[primes_found] = current_num;
//            primes_found++;
//        }
//        current_num++;
//    }
//}
//
//int* Resize(int* arr, int size)
//{
//    int* output = new int[size * 2];
//    for (int i = 0; i < size; i++)
//    {
//        output[i] = arr[i];
//    }
//    for (int i = size; i < size * 2; i++)
//    {
//        int j = 0;
//        while (true)
//        {
//            if (isPrime(j))
//            {
//                output[i] = j;
//                break;
//            }
//            j++;
//        }
//    }
//    return output;
//}
//
