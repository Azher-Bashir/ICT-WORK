//#include <iostream>
//
//using namespace std;
//int car_rent = 40, rent_days, no_of_cars;
//double disc, no_disc, disc_amount, total;
//static double discount(int rent_days,int no_of_cars, double disc)
//{
//	no_disc = car_rent * rent_days * no_of_cars;
//	disc_amount = no_disc * (disc / 100);
//	total = no_disc - disc_amount;
//
//	cout << "Cost before the discount is: " << no_disc << endl;
//	cout << "The total discount you will get is: " << disc_amount << endl;
//	cout << "The total amount to be payable by you is: " << total << endl;
//	return total;
//}
//int main()
//{
//	cout << "Enter the number of days the car was rented: ";
//	cin >> rent_days;
//	cout << "Enter the number of cars taken for rent: ";
//	cin >> no_of_cars;
//
//	if (rent_days > 7 && no_of_cars > 3)
//	{
//		disc = 15;
//		discount(rent_days, no_of_cars, disc);
//	}
//	else if (no_of_cars > 3)
//	{
//		disc = 5;
//		discount(rent_days, no_of_cars, disc);
//	}
//	else if(rent_days > 7)
//	{
//		disc = 10;
//		discount(rent_days, no_of_cars, disc);
//	}
//	else
//	{
//		disc = 0;
//		discount(rent_days, no_of_cars, disc);
//
//	}
//}