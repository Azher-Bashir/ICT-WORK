#include <iostream>
using namespace std;

class Product {
private:
    string name;
    double price;

public:
    void setDetails(string n, double p) {
        name = n;
        price = p;
    }

    void display() {
        cout << "Product Details:" << endl;
        cout << "Name: " << name << "\nPrice: $" << price << endl;
    }
};

int main() {
    Product product1, product2;
    string name;
    double price;

    cout << "Enter product name: ";
    cin >> name;
    cout << "Enter product price: ";
    cin >> price;
    product1.setDetails(name, price);
    product1.display();

    cout << "Enter another product name: ";
    cin >> name;
    cout << "Enter another product price: ";
    cin >> price;
    product2.setDetails(name, price);
    product2.display();

    return 0;
}
