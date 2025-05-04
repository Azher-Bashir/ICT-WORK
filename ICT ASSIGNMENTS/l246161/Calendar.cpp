#include "Calendar.h"

Calendar::Calendar(int day, int month, int year) : d(day), m(month), y(year) {}

int Calendar::durationFrom(const Calendar& other) const {
    return (d - other.d) + (m - other.m) * 30 + (y - other.y) * 365;
}
