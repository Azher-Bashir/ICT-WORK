#include <iostream>
#include <cmath>

using namespace std;

static double calculate_retail(double cost_price, double markup_rate)
{
	double markup, total = 0;
	if (markup_rate == 50)
	{
		cout << "Your cost price without markup is: " << cost_price << endl;
		markup = cost_price / 2;
		cout << "Markup price to be added is: " << markup << endl;
		total = cost_price + markup;
		cout << "Your  total price is : " << total << endl;
	}
	else if (markup_rate == 100)
	{
		cout << "Your cost price without markup is: " << cost_price << endl;
		markup = cost_price;
		cout << "Markup price to be added is: " << markup << endl;
		total = cost_price + markup;
		cout << "Your  total price is : " << total << endl;
	}
	else if (markup_rate != 50 && markup_rate != 100)
		cout << "!!! INVALIDE INPUT !!!" << endl;
	return total;
}
int main()
{
	double cost_price, markup_rate;
	cout << "Enter the cost price of the item: ";
	cin >> cost_price;
	cout << "Enter the markup rate: ";
	cin >> markup_rate;
	if (cost_price > 0)
		calculate_retail(cost_price, markup_rate);
	else
		cout << "!!! INVALIDE INPUT !!!" << endl;
	return 0;
}
