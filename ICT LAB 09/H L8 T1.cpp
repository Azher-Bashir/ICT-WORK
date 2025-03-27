//#include <iostream>
//#include <string>
//using namespace std;
//
//class product {
//private:
//    double discount;
//    double price;
//public:
//    product(double b, double a) {
//        discount = a;
//        price = b;
//    }
//    void set_price(double a) {
//        price = a;
//    }
//    void set_discount(double b) {
//        discount = b;
//    }
//
//    double get_price() {
//        return price;
//    }
//
//    double get_discount() {
//        return discount;
//    }
//    double sale_price() {
//        return price - ((discount * price) / 100);
//    }
//};
//
//class electronics : public product {
//private:
//    string manufacturer;
//
//public:
//    electronics(double d, double p, string b) : product(d, p) {
//        manufacturer = b;
//    }
//    void set_manufacturer(string a) {
//        manufacturer = a;
//    }
//
//    string get_manufacturer() {
//        return manufacturer;
//    }
//};
//
//class book : public product {
//private:
//    string name;
//    string author;
//
//public:
//    book(double d, double p, string f, string e) : product(d, p) {
//        name = e;
//        author = f;
//    }
//    void set_name(string a) {
//        name = a;
//    }
//    void set_author(string b) {
//        author = b;
//    }
//
//    string get_name() {
//        return name;
//    }
//
//    string get_author() {
//        return author;
//    }
//};
//
//class tv : public electronics {
//private:
//    double size;
//public:
//    tv(double d, double p, string b, double a) : electronics(d, p, b) {
//        size = a;
//    }
//
//    double get_size() {
//        return size;
//    }
//};
//
//class mp3 : public electronics {
//private:
//    int capacity;
//    string color;
//public:
//    mp3(double d, double p, string b, int j, string k) : electronics(d, p, b) {
//        capacity = j;
//        color = k;
//    }
//    void set_capacity(int a) {
//        capacity = a;
//    }
//    void set_color(string b) {
//        color = b;
//    }
//
//    int get_capacity() {
//        return capacity;
//    }
//
//    string get_color() {
//        return color;
//    }
//};
//
//int main() {
//    int choice1 = 0, choice2 = 0, capacity, size;
//    double price, discount;
//    string manufacturer, color, author, name;
//    cout << "\n************* WELCOME TO ONLINE SHOP****************** \n";
//    cout << "\nPress 1 for Electronics." << "\nPress 2 for Books\n";
//
//    cin >> choice1;
//    if (choice1 == 1) {
//        cout << "\nPress 1 for MP3Players." << "\nPress 2 for TV\n";
//        cin >> choice2;
//        if (choice2 == 1) {
//            cout << "\nSet Attributes\n";
//            cout << "Price: ";
//            cin >> price;
//            cout << "\nDiscount in% : ";
//            cin >> discount;
//            cout << "\nManufacturer: ";
//            cin >> manufacturer;
//            cout << "\nColor: ";
//            cin >> color;
//            cout << "\nCapacity in GB : ";
//            cin >> capacity;
//            mp3 m1(price, discount, manufacturer, capacity, color);
//            if (m1.get_capacity() == 1)
//                m1.set_discount(10);
//            else
//                m1.set_discount(50);
//            cout << "Sale Price: " << m1.sale_price() << endl;
//        }
//        else if (choice2 == 2) {
//            cout << "\nSet Attributes\n";
//            cout << "Price: ";
//            cin >> price;
//            cout << "\nDiscount in% : ";
//            cin >> discount;
//            cout << "\nManufacturer: ";
//            cin >> manufacturer;
//            cout << "\nSize: ";
//            cin >> size;
//            tv t1(price, discount, manufacturer, size);
//            cout << "Sale Price: " << t1.sale_price() << endl;
//        }
//        else
//            cout << "\nInvalid value... try again later";
//    }
//    else if (choice1 == 2) {
//        cout << "\nSet Attributes\n";
//        cout << "Price: ";
//        cin >> price;
//        cout << "\nDiscount in% : ";
//        cin >> discount;
//        cout << "\nAuthor: ";
//        cin >> author;
//        cout << "\nName: ";
//        cin >> name;
//        book b1(price, discount, author, name);
//        cout << "Sale Price: " << b1.sale_price() << endl;
//    }
//    else
//        cout << "\nInvalid value... try again later";
//
//    return 0;
//}
