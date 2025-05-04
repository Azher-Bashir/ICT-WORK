#ifndef CALENDAR_H
#define CALENDAR_H

class Calendar {
public:
    int d, m, y;
    Calendar(int day = 1, int month = 1, int year = 2000);
    int durationFrom(const Calendar& other) const;
};

#endif
