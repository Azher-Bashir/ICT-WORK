//#include <iostream>
//#include <string>
//#include "Date.h"
//#include "Vehicle.h"
//#include "Customer.h"
//#include "Transaction.h"
//#include "List.h"
//
//using namespace std;
//
//int main() {
//    List<Vehicle> vehicles(10);
//    List<Customer> customers(5);
//    List<Transaction> transactions(10);
//
//    int numVehicles;
//    cout << "Enter number of vehicles to add: ";
//    cin >> numVehicles;
//    cin.ignore();
//
//    for (int i = 0; i < numVehicles; ++i) {
//        cout << "Enter type (1 for Car, 2 for Truck): ";
//        int type;
//        cin >> type;
//        cin.ignore();
//
//        string model;
//        int year;
//        float price;
//        cout << "Enter model: ";
//        getline(cin, model);
//        cout << "Enter year: ";
//        cin >> year;
//        cout << "Enter price per day: ";
//        cin >> price;
//        cin.ignore();
//
//        if (type == 1)
//            vehicles.add(new Car(model, year, price));
//        else
//            vehicles.add(new Truck(model, year, price));
//    }
//
//    string name, cnic, phone;
//    cout << "\nEnter customer details:\n";
//    cout << "Name: ";
//    getline(cin, name);
//    cout << "CNIC: ";
//    getline(cin, cnic);
//    cout << "Phone: ";
//    getline(cin, phone);
//    customers.add(new Customer(name, cnic, phone));
//
//    cout << "\nAvailable Vehicles:\n";
//    for (int i = 0; i < vehicles.getSize(); ++i) {
//        if (vehicles.get(i)->isAvailable())
//            cout << i << ". " << vehicles.get(i)->getModel() << endl;
//    }
//
//    int vidx;
//    cout << "Enter vehicle index to rent: ";
//    cin >> vidx;
//
//    if (vehicles.get(vidx) == nullptr || !vehicles.get(vidx)->isAvailable()) {
//        cout << "Invalid selection or vehicle not available.\n";
//        return 0;
//    }
//
//    int sDay, sMonth, sYear, eDay, eMonth, eYear;
//    cout << "Enter start date (day month year): ";
//    cin >> sDay >> sMonth >> sYear;
//    cout << "Enter end date (day month year): ";
//    cin >> eDay >> eMonth >> eYear;
//
//    Date start(sDay, sMonth, sYear);
//    Date end(eDay, eMonth, eYear);
//
//    transactions.add(new Transaction(customers.get(0), vehicles.get(vidx), start, end));
//    cout << "\nBooking Successful!\n";
//    transactions.get(0)->printDetails();
//
//    return 0;
//}
