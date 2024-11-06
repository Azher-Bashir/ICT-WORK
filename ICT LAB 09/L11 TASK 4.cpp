#include <iostream>

using namespace std;

int main()
{
	int i, a = 0, b = 1, sum = 0, n = 1;
	cout << "Enter the last number: ";
	cin >> i;
	cout << "No." << '\t' << "Pattern" << endl;
	while (n <= i)
		//for (n; n <= i; n++) // for using this instead of while first comment the condition of n++ at last of while loop
	{
		sum = (a + b);
		cout << n << '\t' << sum << endl;
		b = sum;
		a = sum - a;
		n++;
	}
	return 0;
}