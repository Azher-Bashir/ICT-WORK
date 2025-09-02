#include<iostream>
#include<time.h>
using namespace std;
void main()
{
	clock_t start, end;
	double cpu_time_used;
	start = clock();
	{
		end = clock();

		int sum, i;
		sum = 0;
		for (i = 0; i < 10000; ++i)
			sum++;
		
	}
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	cout << cpu_time_used << " seconds";
}