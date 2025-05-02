//#include <iostream>
//using namespace std;
//
//class vehical
//{
//private:
//	string modle;
//	int year;
//	double price_per_day;
//	bool availability_status;
//public:
//	vehical();
//	vehical(string , int , double , bool );
//	void set_availability(bool);
//	bool get_avaialability();
//	virtual double calculate_rent(int days) = 0;
//	string get_modle();
//};
//vehical::vehical()
//{
//	modle = "";
//	year = 0;
//	price_per_day = 0;
//	availability_status = true;
//}
//vehical::vehical(string modle, int year, double price_per_day, bool availability_status)
//{
//	this->modle = modle;
//	this->year = year;
//	this->price_per_day = price_per_day;
//	this->availability_status = availability_status;
//}
//void vehical::set_availability(bool avail)
//{
//	availability_status = avail;
//}
//bool vehical::get_avaialability()
//{
//	return availability_status;
//}
//string vehical::get_modle()
//{
//	return modle;
//}
//
//
//
//
//
//
//int main()
//{
//	return 0;
//}