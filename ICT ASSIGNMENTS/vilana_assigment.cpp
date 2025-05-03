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
        cout << "Day: ";
        cin >> day;
        cout << "Month: ";
        cin >> month;
        cout << "Year: ";
        cin >> year;
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
        cout << endl;
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

    // Adding cars and trucks using pointers to arrays
    Car* car[5];
    car[0] = new Car();
    car[0]->set_model("Toyota Corolla");
    car[0]->set_year(2020); car[0]->set_rent(50);
    car[0]->set_status(true);

    car[1] = new Car();
    car[1]->set_model("Honda Civic");
    car[1]->set_year(2019); car[1]->set_rent(60);
    car[1]->set_status(false);

    car[2] = new Car();
    car[2]->set_model("Hyundai Elantra");
    car[2]->set_year(2021); car[2]->set_rent(55); 
    car[2]->set_status(true);

    car[3] = new Car();
    car[3]->set_model("Kia Sportage");
    car[3]->set_year(2022); car[3]->set_rent(70);
    car[3]->set_status(true);

    car[4] = new Car();
    car[4]->set_model("Nissan Altima"); 
    car[4]->set_year(2018); car[4]->set_rent(45);
    car[4]->set_status(false);

    Truck* truck[5];
    truck[0] = new Truck();
    truck[0]->set_model("Ford F-150");
    truck[0]->set_year(2021);
    truck[0]->set_rent(100);
    truck[0]->set_status(true);

    truck[1] = new Truck();
    truck[1]->set_model("Chevrolet Silverado");
    truck[1]->set_year(2020);
    truck[1]->set_rent(110);
    truck[1]->set_status(false);

    truck[2] = new Truck();
    truck[2]->set_model("Ram 1500");
    truck[2]->set_year(2022);
    truck[2]->set_rent(120);
    truck[2]->set_status(true);

    truck[3] = new Truck();
    truck[3]->set_model("GMC Sierra");
    truck[3]->set_year(2019);
    truck[3]->set_rent(105);
    truck[3]->set_status(true);

    truck[4] = new Truck();
    truck[4]->set_model("Toyota Tundra");
    truck[4]->set_year(2018);
    truck[4]->set_rent(95); 
    truck[4]->set_status(false);


    // Adding vehicles to the list
    for (int i = 0; i < 5; i++) {
        vehicles.Add_item(car[i]);
        vehicles.Add_item(truck[i]);
    }

    int choice = 0;
    while (true) {
        cout <<
            "_-=-_-=-_-=-_-=-_-=-_-=-_-=-_-=-_-=-_-=-";
        cout << "      WELCOME TO VEHICLE RENTAL SYSTEM      ";
        cout << "_-=-_-=-_-=-_-=-_-=-_-=-_-=-_-=-_-=-_-=-";
        cout << "1. Add Customer";
        cout << "2. Add Vehicle";
        cout << "3. Book Vehicle";
        cout << "4. Search Rental History";
        cout << "5. Show Available Vehicles";
        cout << "6. Show Not Available Vehicles";
        cout << "9. Exit";
        cout << "_-=-_-=-_-=-_-=-_-=-_-=-_-=-_-=-_-=-_-=-";
        cout << "Enter your choice: ";
        cout << "\n1. Add Customer\n2. Add Vehicle\n3. Book Vehicle\n4. Search Rental History\n5. Show Available Vehicles\n6. Show Not Available Vehicles\n9. Exit\nChoose: ";
        cin >> choice;
        cout << endl;
        if (choice == 1) {
            Customer* c = new Customer;
            c->Set_Customer_detail();
            customers.Add_item(c);
            cout << endl;
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
            cout << endl;
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
            cout << endl;

        }
        else if (choice == 4) {
            long long cnic;
            cout << "Enter CNIC to search history: "; cin >> cnic;
            for (int i = 0; i < rentals.get_size(); i++) {
                if (rentals.get_Data(i)->isCustomer(cnic))
                    rentals.get_Data(i)->display();
            }
            cout << endl;

        }
        else if (choice == 5) {
            cout << "Available Vehicles:\n";
            for (int i = 0; i < vehicles.get_size(); i++) {
                if (vehicles.get_Data(i)->get_status()) {
                    vehicles.get_Data(i)->displayDetails();
                }
            }
            cout << endl;

        }
        else if (choice == 6) { // New option for not available vehicles
            cout << "Not Available Vehicles:\n";
            for (int i = 0; i < vehicles.get_size(); i++) {
                if (!vehicles.get_Data(i)->get_status()) {
                    vehicles.get_Data(i)->displayDetails();
                }
            }
            cout << endl;

        }
        else if (choice == 9) {
            cout << "Exiting program.\n";
            cout << endl;
            break;
        }
        else {
            cout << "Invalid option. Try again.\n";
            cout << endl;
        }

    }
    return 0;
}
