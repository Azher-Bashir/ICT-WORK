//#include <iostream>
//
//using namespace std;
//
//double months;
//int org_amount = 50, disc_amount, total;
//double disc;
//char upfront;
//int disc_calculator(double months, double disc)
//{
//	disc_amount = (org_amount * months) * (disc / 100);
//	total = (org_amount * months) - disc_amount;
//	cout << "The amount wihtout discount is: " << org_amount * months << endl;
//	cout << "The total discount you wil get is: " << disc_amount << endl;
//	cout << "The total amount to mbe payable by you is: " << total << endl;
//
//	return org_amount, disc_amount, total;
//}
//
//int main()
//{
//	cout << "Enter the subscription period: ";
//	cin >> months;
//ERROR:
//	cout << "Have you paid full amount upfront: ";
//	cin >> upfront;
//	if (months <= 6 && (upfront == 'n' || upfront == 'N'))
//	{
//		disc = 0;
//		disc_calculator(months, disc);
//	}
//	else if (months > 6 && months <= 12 && (upfront == 'n' || upfront == 'N'))
//	{
//		disc = 10;
//		disc_calculator(months, disc);
//
//	}
//	else if (months > 12 && (upfront == 'n' || upfront == 'N'))
//	{
//		disc = 20;
//		disc_calculator(months, disc);
//	}
//	else if (months <= 6 && (upfront == 'y' || upfront == 'Y'))
//	{
//		disc = 5;
//		disc_calculator(months, disc);
//
//	}
//	else if (months > 6 && months <= 12 && (upfront == 'y' || upfront == 'Y'))
//	{
//		disc = 15;
//		disc_calculator(months, disc);
//
//	}
//	else if (months > 12 && (upfront == 'y' || upfront == 'Y'))
//	{
//		disc = 25;
//		disc_calculator(months, disc);
//
//
//	}
//	else
//	{
//		cout << "!!! Please enter correct values !!!" << endl;
//		goto ERROR;
//	}
//	return 0;
//}