#pragma once
#ifndef swimming_pool.h
#define swimming_pool.h
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
	friend void no_one(swimming_pool& obj);
	void print();

};
void swimming_pool::print()
{
	cout << length << endl;
	cout << width << endl;
    void no_one(swimming_pool& obj);
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
#endif