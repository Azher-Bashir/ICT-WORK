#include <iostream>]
using namespace std;

class vehical
{
private:
	int size_available;
	int size_not_avail;
	string* vehicals_available;
	string* vehicals_not_available;
public:
	vehical();
	vehical(string*, string*, int, int);
	void set_available(string*);
	void set_not_available(string*);
	void set_no_of_cars(int, int);
	string* get_available();
	string* get_not_available();
	string get_no_of_cars();
};
vehical::vehical()
{
	size_available = 0;
	size_not_avail = 0;
	vehicals_available = nullptr;
	vehicals_not_available = nullptr;
}
vehical::vehical(string* available, string* not_available, int size_avail, int size_not_avail)
{
	vehicals_available = available;
	vehicals_not_available = not_available;
	size_available = size_avail;
	this->size_not_avail = size_not_avail;
}
void vehical::set_available(string* available)
{
	vehicals_available = available;
}
void vehical::set_not_available(string* not_available)
{
	vehicals_not_available = not_available;
}
void vehical::set_no_of_cars(int available, int not_available)
{
	size_available = available;
	size_not_avail = not_available;
}
string* vehical::get_available()
{
	return vehicals_available;
}
string* vehical::get_not_available()
{
	return vehicals_not_available;
}
string 