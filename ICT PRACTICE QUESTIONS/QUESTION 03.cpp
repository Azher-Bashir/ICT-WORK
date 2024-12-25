//#include <iostream>
//
//using namespace std;
//
//double amount, weight, org_amount, disc_amount, disc_per, total;
//
//static void discount(double weight, double org_amount)
//{
//	cout << "Bill before any discount is: " << org_amount << endl;
//	disc_amount = org_amount * disc_per / 100;
//	total = org_amount - disc_amount;
//
//	cout << "The discount amount that you will get is: " << disc_amount<< endl;
//	cout << "Total payable amount by you is: " << total<< endl;
//}
//
//int main()
//{
//	cout << "Enter the amount of which the total purchase was made: ";
//	cin >> org_amount;
//	cout << "Enter the weight of the items purchased: ";
//	cin >> weight;
//
//	if (weight > 10 && org_amount > 200)
//	{
//		disc_per = 15;
//		discount(weight, org_amount);
//	}
//	else if (weight > 20 && org_amount > 200)
//	{
//		disc_per = 25;
//		discount(weight, org_amount);
//	}
//	else if (weight > 30 && org_amount > 200)
//	{
//		disc_per = 35;
//		discount(weight, org_amount);
//	}
//	else if (weight > 10 && org_amount < 200)
//	{
//		disc_per = 10;
//		discount(weight, org_amount);
//	}
//	else if (weight > 20 && org_amount < 200)
//	{
//		disc_per = 20;
//		discount(weight, org_amount);
//	}
//	else if (weight > 30 && org_amount < 200)
//	{
//		disc_per = 30;
//		discount(weight, org_amount);
//	}
//	else
//	{
//		disc_per = 0;
//		discount(weight, org_amount);
//	}
//	return 0;
//}