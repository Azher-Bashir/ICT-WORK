//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//	double initial_amount = 10, inc_per = 5, days, org = 1, sum = 0;
//	cout << "Enter the period of accumulation: ";
//	cin >> days;
//	cout << "DAY" << '\t' << "INCRIMENT" << '\t' << "FINAL VALUE" << endl;
//	for (int i = 1; i <= days; i++)
//	{
//		org = initial_amount;
//		org *= (inc_per / 100);
//		initial_amount += org;
//
//		cout << i << '\t' << org << setprecision(3) << '\t' << '\t' << initial_amount << endl;
//		sum += initial_amount;
//	}
//
//	cout << "SUM OF THE ALL PREVIOUS BALANCES IS: " << sum;
//}