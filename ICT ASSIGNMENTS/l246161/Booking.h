#ifndef BOOKING_H
#define BOOKING_H

#include "Person.h"
#include "Transport.h"
#include "Calendar.h"

class Booking {
public:
    Person* renter;
    Transport* asset;
    Calendar startDate, endDate;
    float cost;
    Booking(Person* p, Transport* v, Calendar s, Calendar e);
    void showInfo();
};

#endif
