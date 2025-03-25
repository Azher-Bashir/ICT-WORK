//#include <iostream>
//using namespace std;
//
//class publisher {
//private:
//	string name;
//	int year;
//public:
//	publisher(string name, int year)
//	{
//		this->name = (name);
//		this->year = year;
//	}
//	int getage(int currentyear) {
//		return currentyear - year;
//	}
//	string getname() {
//		return name;
//	}
//	int getyear() {
//		return year;
//	}
//};
//
//class author {
//private:
//	string name;
//	string country;
//	int books;
//public:
//	author(string name, string country, int books = 0)
//	{
//		this->name = (name);
//		this->country = (country);
//		this->books = (books);
//	}
//	string getcountry() {
//		return country;
//	}
//	string getname() {
//		return name;
//	}
//	int getbooks() {
//		return books;
//	}
//	void setbooks(int b) {
//		books = b;
//	}
//};
//
//class book {
//private:
//	string title;
//	double price;
//	publisher pub;
//	author auth;
//public:
//	book(string title, double price, publisher pub, author auth) : title(title), price(price), pub(pub), auth(auth) {} 
//	bool publishbook(int currentyear) {
//		if (auth.getbooks() < 3) {
//			cout << " books can't be published ";
//			return false;
//		}
//		if (pub.getage(currentyear) <= 10) {
//			cout << "books cannot be published" << endl;
//			return false;
//		}
//		return true;
//	}
//	void displaydetails() {
//		cout << " title of the book: " << title << endl;
//		cout << " price of the book: " << price << endl;
//		cout << " publisher: " << pub.getname() << endl;
//		cout << " year of established: " << pub.getyear() << endl;
//		cout << " author: " << auth.getname() << endl;
//		cout << " country: " << auth.getcountry() << endl;
//		cout << " books published: " << auth.getbooks() << endl;
//	}
//	void setprice(double p) {
//		price = p;
//	}
//};
//
//int main() {
//	int currentyear = 2025;
//	publisher publisher("someone", 2005);
//	author author("someone2", "lahore", 7);
//	book book("DS malik", 500, publisher, author);
//	book.displaydetails();
//	if (book.publishbook(currentyear)) {
//		cout << " your book can be published " << endl;
//	}
//	else {
//		cout << " book can't be published" << endl;
//	}
//	book.setprice(44.99);
//	author.setbooks(2);
//	book.displaydetails();
//
//	if (book.publishbook(currentyear)) {
//		cout << "Book is ready for publication." << endl;
//	}
//	else {
//		cout << "Book cannot be published." << endl;
//	}
//	return 0;
//}