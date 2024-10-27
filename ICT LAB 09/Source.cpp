#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int year;
	cout << "Enter teh year";
	cin >> year;
	switch (year)
		default:
			if (((year % 4 == 0) || (year % 100 != 0) && (year % 400 == 0)))
				cout << year << " is a leap year" << endl;
			else
			{
				cout << "Wrong entry..." << endl;
			}
			system("pause");
			return 0;
}