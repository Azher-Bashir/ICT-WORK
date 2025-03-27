#include<iostream>
#include<string>
using namespace std;
class product {
private:
    double discount;
    double price;
public:
    product(int b, int a) {
        discount = a;
        price = b;
    }
    void set_price(double a) {
        price = a;
    }
    void set_discount(double b) {
        discount = b;
    }

    double getprice() {
        return price;
    }

    double getdiscount() {
        return discount;
    }
    double sale_price() {
        double saleprice;
        saleprice = price - (discount / 100);

    }

};
class electronics : public product {
private:
    string mfname;

public:
    electronics(double d, double p, string b) : product(d, p)
    {
        mfname = b;
    }
    void set_mnf(double a) {
        mfname = a;
    }


    string getmnf() {
        return mfname;
    }

};
class book : public product {
private:
    string name;
    string author;

public:
    book(double d, double p, string f, string e) : product(d, p)
    {
        name = e;
        author = f;
    }
    void set_name(string a) {
        name = a;
    }
    void set_author(string b) {
        author = b;
    }

    string getname() {
        return name;
    }

    string getauthor() {
        return author;
    }

};
class tv : public electronics {
private:
    double size;
public:
    tv(double d, double p, string b, double a) : electronics(d, p, b)
    {
        size = a;
    }


    double getsize() {
        return size;
    }

};
class mp3 : public electronics {
private:
    int capacity;
    int color;
    mp3(double  d, double p, string b, int j, int k) : electronics(d, p, b) {
        capacity = j;
        color = k;

    }
    void set_capacity(double a) {
        capacity = a;
    }
    void set_color(double b) {
        color = b;
    }


    int getcapacity() {
        return capacity;
    }

    int getcolor() {
        return color;
    }


};