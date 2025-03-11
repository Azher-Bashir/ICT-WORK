#include <iostream>

using namespace std;

bool prime_or_not(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void generate_prime_number(int* primes, int count)
{
    int num = 2;
    int found = 0;
    while (found < count)
    {
        if (prime_or_not(num))
        {
            primes[found] = num;
            found++;
        }
        num++;
    }
}

void pick_larger(int* array1, int* array2, int* output_array, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array1[i] > array2[i])
        {
            output_array[i] = array1[i];
        }
        else
        {
            output_array[i] = array2[i];
        }
    }

    generate_prime_number(output_array + size, size);
}

void resize_array(int*& array, int old_size, int new_size)
{
    int* new_array = new int[new_size];
    for (int i = 0; i < old_size; i++)
    {
        new_array[i] = array[i];
    }
    delete[] array;
    array = new_array;
}

int main()
{
    int size;
    cout << "Enter the size of the arrays: ";
    cin >> size;

    int* array1 = new int[size];
    int* array2 = new int[size];

    cout << "Enter elements for array 1: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array1[i];
    }

    cout << "Enter elements for array 2: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array2[i];
    }

    int new_size = size * 2;
    int* output_array = new int[new_size];

    pick_larger(array1, array2, output_array, size);

    cout << "Output array: ";
    for (int i = 0; i < new_size; i++)
    {
        cout << output_array[i] << " ";
    }
    cout << endl;

    delete[] array1;
    delete[] array2;
    delete[] output_array;

    return 0;
}

