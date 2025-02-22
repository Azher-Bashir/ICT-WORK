#include <iostream>
using namespace std;

struct car
{
	int model;
	string make, color;
	int engine_capacity;
};
int main()
{
	car my_car;

	cout << "Enter the following details about your car: ";
	cout << "Enter the make of your car: ";
	cin >> my_car.make;
	cout << "Enter the color of your car: ";
	cin >> my_car.color;
	cout << "Enter the model of your car: ";
	cin >> my_car.model;
	cout << "Enter the engine capacity of your car: ";
	cin >> my_car.engine_capacity;





}