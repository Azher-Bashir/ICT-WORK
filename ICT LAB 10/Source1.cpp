#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int year;
	cin << "Enter teh year";
	cout >> year;
	switch (year)
		case((year % 4 == 0) || (year % 100 != 0) && (year % 400 == 0)):
			cout << year << " is a leap year" << endl;
		default:
			cout << "Wrong entry..." << endl;
			system("pause");
			return 0;
}
