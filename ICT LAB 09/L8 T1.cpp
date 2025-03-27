//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class product
//{
//protected:
//    double original_price;
//    double discount;
//public:
//    product();
//    product(double, double);
//    double get_price();
//    void set_price(double);
//    void set_disc(double);
//    double sale_price();
//
//};
//void product::set_price(double price)
//{
//    original_price = price;
//}
//double product::get_price()
//{
//    return original_price;
//}
//void product::set_disc(double discount)
//{
//    this->discount = discount;
//}
//
//double product::sale_price()
//{
//    return original_price - ((discount * original_price) / 100);
//}
//product::product()
//{
//    original_price = 0;
//}
//product::product(double price, double discount)
//{
//    original_price = price;
//    this->discount = discount;
//}
//
//class book : public product
//{
//protected:
//    string author;
//    string name;
//public:
//    void set_author_name(string, string);
//    string get_author();
//    string get_name();
//    book(double, double, string, string);
//};
//void book::set_author_name(string name, string author)
//{
//    this->name = name;
//    this->author = author;
//}
//string book::get_author()
//{
//    return author;
//}
//string book::get_name()
//{
//    return name;
//}
//
//book::book(double price, double disc, string author, string name) : product(price, disc)
//{
//    this->author = author;
//    this->name = name;
//}
//
//class electronics : public product
//{
//protected:
//    string manufacturer;
//public:
//    electronics(double, double, string);
//    string get_manufacturer();
//    void set_manufacturer(string);
//};
//
//electronics::electronics(double price, double disc, string manufacturer) : product(price, disc)
//{
//    this->manufacturer = manufacturer;
//}
//
//string electronics::get_manufacturer()
//{
//    return manufacturer;
//}
//
//void electronics::set_manufacturer(string manufacturer)
//{
//    this->manufacturer = manufacturer;
//}
//
//class MP3player : public electronics
//{
//private:
//    string color;
//    int capacity;
//public:
//    MP3player(double, double, string, string, int);
//    string get_color();
//    int get_capacity();
//    void set_color(string);
//    void set_capacity(int);
//};
//
//MP3player::MP3player(double price, double disc, string manufacturer, string color, int capacity) : electronics(price, disc, manufacturer)
//{
//    this->color = color;
//    this->capacity = capacity;
//}
//
//string MP3player::get_color()
//{
//    return color;
//}
//
//int MP3player::get_capacity()
//{
//    return capacity;
//}
//
//void MP3player::set_color(string color)
//{
//    this->color = color;
//}
//
//void MP3player::set_capacity(int capacity)
//{
//    this->capacity = capacity;
//}
//
//class TV : public electronics
//{
//private:
//    int size;
//public:
//    TV(double, double, string, int);
//    int get_size();
//    void set_size(int);
//};
//
//TV::TV(double price, double disc, string manufacturer, int size) : electronics(price, disc, manufacturer)
//{
//    this->size = size;
//}
//
//int TV::get_size()
//{
//    return size;
//}
//
//void TV::set_size(int size)
//{
//    this->size = size;
//}
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
//            MP3player m1(price, discount, manufacturer, color, capacity);
//            if (m1.get_capacity() == 1)
//                m1.set_disc(10);
//            else
//                m1.set_disc(50);
//            cout << m1.sale_price();
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
//            TV t1(price, discount, manufacturer, size);
//            cout << t1.sale_price();
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
//        cout << b1.sale_price();
//    }
//    else
//        cout << "\nInvalid value... try again later";
//
//    return 0;
//}
