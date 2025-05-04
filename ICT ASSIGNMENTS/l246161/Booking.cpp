#include <iostream>
#include "Booking.h"
using namespace std;

Booking::Booking(Person* p, Transport* v, Calendar s, Calendar e)
    : renter(p), asset(v), startDate(s), endDate(e) {
    int length = endDate.durationFrom(startDate);
    cost = asset->rentCost(length);
    asset->changeStatus(false);
}

void Booking::showInfo() {
    cout << "Renter Name: " << renter->fullName << endl;
    cout << "Vehicle Model: " << asset->getBrand() << endl;
    cout << "Charge: " << cost << endl;
}
