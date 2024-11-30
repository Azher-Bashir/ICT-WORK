#include <iostream>
#include <cmath>

using namespace std;

double radius(double circle_area);
double circumference();
double surface_area(double height, double circle_area);
double volume(double height, double circle_area);
//double surface_area(double height, double circle_area);

double rad, cir, surf_area, vol, circle_area, height;
double pi = 3.1416;

int main()
{
	cout << "Enter the value of area of the base circle: ";
	cin >> circle_area;
	cout << "Enter the height of the cylinder: ";
	cin >> height;

	radius(circle_area);
	circumference();
	surface_area(height, circle_area);
	volume(height, circle_area);
	//system("pause");
	return 0;
}
static double radius(double circle_area)
{
	// now we knoe that area = pi * r^2
	rad = 0;
	rad = sqrt(circle_area / pi);
	cout << "Radius of the circle is: " << rad;
	return rad;
}

static double circumference()
{
	cir = 2 * pi * rad;
	cout << "circumference of the circle is: " << cir;
	return cir;
}

static double surface_area(double height, double circle_area)
{
	surf_area = (cir * height) + (2 * circle_area);
	cout << "Surface area of the circle is: ";
	return surf_area;
}

static double volume(double height, double circle_area)
{
	vol = circle_area * height;
	cout << "Volume of cylinder is: ";
	return vol;
}
