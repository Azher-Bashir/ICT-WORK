#include <iostream>
#include <string>
#include "Calendar.h"
#include "Transport.h"
#include "Person.h"
#include "Booking.h"
#include "Collection.h"

using namespace std;

int main() {
    Collection<Transport> fleet(10);
    Collection<Person> users(5);
    Collection<Booking> logs(10);

    int entries;
    cout << "How many vehicles? ";
    cin >> entries;
    cin.ignore();

    for (int i = 0; i < entries; ++i) {
        cout << "Type (1 for Sedan, 2 for Hauler): ";
        int choice;
        cin >> choice;
        cin.ignore();

        string name;
        int y;
        float rate;
        cout << "Model: ";
        getline(cin, name);
        cout << "Year: ";
        cin >> y;
        cout << "Rate: ";
        cin >> rate;
        cin.ignore();

        if (choice == 1)
            fleet.insert(new Sedan(name, y, rate));
        else
            fleet.insert(new Hauler(name, y, rate));
    }

    string fullname, id, phone;
    cout << "\nRenter Details:\n";
    cout << "Name: ";
    getline(cin, fullname);
    cout << "ID: ";
    getline(cin, id);
    cout << "Phone: ";
    getline(cin, phone);
    users.insert(new Person(fullname, id, phone));

    cout << "\nAvailable Options:\n";
    for (int i = 0; i < fleet.count(); ++i) {
        if (fleet.access(i)->checkAvailability())
            cout << i << ". " << fleet.access(i)->getBrand() << endl;
    }

    int pick;
    cout << "Select vehicle index: ";
    cin >> pick;

    if (fleet.access(pick) == nullptr || !fleet.access(pick)->checkAvailability()) {
        cout << "Invalid or already rented.\n";
        return 0;
    }

    int sd, sm, sy, ed, em, ey;
    cout << "Start date (d m y): ";
    cin >> sd >> sm >> sy;
    cout << "End date (d m y): ";
    cin >> ed >> em >> ey;

    Calendar start(sd, sm, sy);
    Calendar end(ed, em, ey);

    logs.insert(new Booking(users.access(0), fleet.access(pick), start, end));
    cout << "\nReservation Complete!\n";
    logs.access(0)->showInfo();

    return 0;
}
