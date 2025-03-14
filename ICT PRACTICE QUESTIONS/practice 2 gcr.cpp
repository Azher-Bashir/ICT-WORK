#include <iostream>
using namespace std;

class swimming_pool
{
private:
	double length;
	double width, height;
	double filling_rate, draining_rate;

public:
	//swimming_pool();
	swimming_pool(double, double, double, double, double);
	swimming_pool(const swimming_pool& depth);
	swimming_pool(double = 1.3, double = 32.23);
	friend void no_one(swimming_pool &obj);
	void print();

};
void swimming_pool::print()
{
	cout << length << endl;
	cout << width << endl;
	cout << height << endl;
	cout << filling_rate << endl;
}


swimming_pool::swimming_pool(double len, double wid)
{
	length = len;
	width = wid;
}


swimming_pool::swimming_pool(double length, double width, double height, double filling_rate, double draining_rate)
{
	this->length = length;
	this->width = width;
	this->height = height;
	this->filling_rate = filling_rate;
	this->draining_rate = draining_rate;

}
void no_one(swimming_pool& a)
{
	a = a.length;
}


int main()
{
	swimming_pool azher;
	//azher.print();
	double length = 9.6, width = 3.5, height = 42.32, filling_rate = 7.0, draining_rate = 8.4;
	cout << "Enter the lenght of the swimmign pool: ";
	cin >> length;
	cout << "Enter the width of the swimming pool: ";
	cin >> width;
	cout << "Enter the height of the pool: ";
	cin >> height;
	cout << "Enter the filling_rate: ";
	cin >> filling_rate;
	cout << "Enter the draining rate of the pool: ";
	cin >> draining_rate;

	swimming_pool my_home(length, width, height, filling_rate, draining_rate);
	my_home.print();
	return 0;
}