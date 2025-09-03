//#include<iostream>
//#include<time.h>
//using namespace std;
//void print(int* a, int n)
//{
//	int i = 0;
//	while (i < n)
//	{
//		cout << a[i] << ",";
//		i++;
//	}
//}
//void swap(int i, int j, int* a)
//{
//	int temp = a[i];
//	a[i] = a[j];
//	a[j] = temp;
//}
//void sort(int* arr, int left, int right)
//{
//	int min = (left + right) / 2;
//	int i = left;
//	int j = right;
//	int pivot = arr[min];
//	while (left < j || i < right)
//	{
//		while (arr[i] < pivot)
//			i++;
//		while (arr[j] > pivot)
//			j--;
//
//		if (i <= j)
//		{
//			swap(i, j, arr);
//			i++;
//			j--;
//		}
//		else
//		{
//			if (left < j)
//				sort(arr, left, j);
//			if (i < right)
//				sort(arr, i, right);
//			return;
//		}
//	} // while ends
//} // sort ends
//int main()
//{
//	int n = 10000;
//	int* arrA = newint[n];
//	//generate n random numbers
//	for (int i = 0; i < n; i++)
//		arrA[i] = rand() % 100;
//	clock_t start, end;
//	double cpu_time_used;
//	start = clock();
//	sort(arrA, 0, n - 1);
//	end = clock();
//	cpu_time_used = ((double)(end - start)) /
//		CLOCKS_PER_SEC;
//	cout << cpu_time_used << " seconds";
//	if (n <= 100)
//		print(arrA, n);
//	return 0;
//}