// Final Complete Code for Vehicle Rental System (CS1002 OOP Assignment)
#include <iostream>
#include <string>
using namespace std;

// ---------------------- Template List Class ----------------------
template <typename Dt>
class list {
private:
    Dt* Data;
    int Capacity;
    int size;

public:
    list() : Data(nullptr), Capacity(100), size(0) { Data = new Dt[100]; }
    void Add_item(Dt item) {
        if (size < Capacity) Data[size++] = item;
        else cout << "List is full.\n";
    }
    Dt get_Data(int position) {
        if (position >= 0 && position < size) return Data[position];
        else return nullptr;
    }
    int get_size() { return size; }
    ~list() { delete[] Data; }
};

// ---------------------- Abstract Base Class ----------------------
class Vehicles {
protected:
    string Model;
    int Year;
    double Price_perday;
    bool Available;

public:
    Vehicles() : Model(" "), Year(0), Price_perday(0.0), Available(true) {}
    virtual double calculateRent(int days) const = 0;
    virtual void displayDetails() const = 0;
    virtual string getType() const = 0;
    void set_model(string model) { this->Model = model; }
    void set_year(int year) { this->Year = year; }
    void set_rent(double rent) { this->Price_perday = rent; }
    void set_status(bool ava) { this->Available = ava; }
    string get_model() const { return Model; }
    int get_year() const { return Year; }
    double get_rent() const { return Price_perday; }
    bool get_status() const { return Available; }
    virtual ~Vehicles() {}
};

class Car : public Vehicles {
public:
    Car() : Vehicles() {}
    double calculateRent(int days) const override {
        return Price_perday * days;
    }
    void displayDetails() const override {
        cout << "Car: " << Model << " | Year: " << Year << " | Rent/day: " << Price_perday << " | Available: " << (Available ? "Yes" : "No") << endl;
    }
    string getType() const override { return "Car"; }
};

class Truck : public Vehicles {
public:
    Truck() : Vehicles() {}
    double calculateRent(int days) const override {
        double tax = (Price_perday * 0.05);
        return (Price_perday + tax) * days;
    }
    void displayDetails() const override {
        cout << "Truck: " << Model << " | Year: " << Year << " | Rent/day+tax: " << Price_perday * 1.05 << " | Available: " << (Available ? "Yes" : "No") << endl;
    }
    string getType() const override { return "Truck"; }
};

// ---------------------- Customer Class ----------------------
class Customer {
    string Name;
    long long CNIC;
    string Mobile;
public:
    Customer() : Name(""), CNIC(0), Mobile("") {}
    void Set_Customer_detail() {
        cin.ignore();
        cout << "Enter Name: "; getline(cin, Name);
        cout << "Enter CNIC: "; cin >> CNIC;
        cout << "Enter Mobile No: "; cin >> Mobile;
    }
    string get_name() const { return Name; }
    long long get_cnic() const { return CNIC; }
    string get_mobile() const { return Mobile; }
};

// ---------------------- Date Class ----------------------
class Date {
    int day, month, year;
public:
    Date() : day(0), month(0), year(0) {}
    void Set_date() {
        cout << "Day: "; cin >> day;
        cout << "Month: "; cin >> month;
        cout << "Year: "; cin >> year;
    }
    void Display() const {
        cout << day << "/" << month << "/" << year;
    }
    int operator-(const Date& other) const {
        return day - other.day + (month - other.month) * 30 + (year - other.year) * 365; // Approximate
    }
};

// ---------------------- Rental Transaction ----------------------
class Rental_Transaction {
    Customer* customer;
    Vehicles* vehicle;
    Date start, end;
    double total;
public:
    Rental_Transaction() : customer(nullptr), vehicle(nullptr), total(0) {}
    void setDetails(Customer* c, Vehicles* v, Date s, Date e) {
        customer = c;
        vehicle = v;
        start = s;
        end = e;
        int days = end - start;
        if (days <= 0) days = 1;
        total = v->calculateRent(days);
        v->set_status(false);
    }
    void display() {
        cout << "Customer: " << customer->get_name() << " | CNIC: " << customer->get_cnic() << endl;
        cout << "Vehicle: " << vehicle->get_model() << " (" << vehicle->getType() << ")\n";
        cout << "From: "; start.Display(); cout << " to "; end.Display(); cout << endl;
        cout << "Total Cost: " << total << "\n";
        cout << "--------------------------------------\n";
    }
    bool isCustomer(long long cnic) const {
        return customer->get_cnic() == cnic;
    }
};

// ---------------------- Main ----------------------
int main() {
    list<Customer*> customers;
    list<Vehicles*> vehicles;
    list<Rental_Transaction*> rentals;
    int choice = 0;
    while (true) {
        cout <<
            "========================================";
        cout << "      WELCOME TO VEHICLE RENTAL SYSTEM      ";
        cout << "========================================";
        cout << "1. Add Customer";
        cout << "2. Add Vehicle";
        cout << "3. Book Vehicle";
        cout << "4. Search Rental History";
        cout << "5. Show Available Vehicles";
        cout << "9. Exit";
        cout << "========================================";
        cout << "Enter your choice: ";
        cout << "\n1. Add Customer\n2. Add Vehicle\n3. Book Vehicle\n4. Search Rental History\n5. Show Available Vehicles\n9. Exit\nChoose: ";
        cin >> choice;
        if (choice == 1) {
            Customer* c = new Customer;
            c->Set_Customer_detail();
            customers.Add_item(c);
        }
        else if (choice == 2) {
            int t;
            cout << "1. Car\n2. Truck\nChoose vehicle type: ";
            cin >> t;
            Vehicles* v = nullptr;
            string m; int y; double r;
            cout << "Model: "; cin >> m;
            cout << "Year: "; cin >> y;
            cout << "Rent/day: "; cin >> r;
            if (t == 1) v = new Car();
            else v = new Truck();
            v->set_model(m); v->set_year(y); v->set_rent(r); v->set_status(true);
            vehicles.Add_item(v);
        }
        else if (choice == 3) {
            long long cnic; string model;
            cout << "Enter CNIC: "; cin >> cnic;
            cout << "Enter Vehicle Model: "; cin >> model;
            Customer* cust = nullptr;
            for (int i = 0; i < customers.get_size(); i++) {
                if (customers.get_Data(i)->get_cnic() == cnic) {
                    cust = customers.get_Data(i);
                    break;
                }
            }
            Vehicles* veh = nullptr;
            for (int i = 0; i < vehicles.get_size(); i++) {
                if (vehicles.get_Data(i)->get_model() == model && vehicles.get_Data(i)->get_status()) {
                    veh = vehicles.get_Data(i);
                    break;
                }
            }
            if (cust && veh) {
                Date s, e;
                cout << "Enter Start Date:\n"; s.Set_date();
                cout << "Enter End Date:\n"; e.Set_date();
                Rental_Transaction* trans = new Rental_Transaction;
                trans->setDetails(cust, veh, s, e);
                rentals.Add_item(trans);
                cout << "Booking successful!\n";
            }
            else {
                cout << "Customer or Vehicle not found or unavailable.\n";
            }
        }
        else if (choice == 4) {
            long long cnic;
            cout << "Enter CNIC to search history: "; cin >> cnic;
            for (int i = 0; i < rentals.get_size(); i++) {
                if (rentals.get_Data(i)->isCustomer(cnic))
                    rentals.get_Data(i)->display();
            }
        }
        else if (choice == 5) {
            cout << "Available Vehicles:\n";
            for (int i = 0; i < vehicles.get_size(); i++) {
                if (vehicles.get_Data(i)->get_status()) {
                    vehicles.get_Data(i)->displayDetails();
                }
            }
        }
        else if (choice == 9) {
            cout << "Exiting program.\n";
            break;
        }
        else {
            cout << "Invalid option. Try again.\n";
        }
    }
    return 0;
}