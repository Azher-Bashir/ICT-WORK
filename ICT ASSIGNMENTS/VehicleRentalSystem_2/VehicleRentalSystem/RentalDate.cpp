//#include "RentalDate.h"
//#include <iostream>
//
//RentalDate::RentalDate() : rentalDay(0), rentalMonth(0), rentalYear(0) {}
//
//void RentalDate::setDate() {
//    std::cout << "Day: ";
//    std::cin >> rentalDay;
//    std::cout << "Month: ";
//    std::cin >> rentalMonth;
//    std::cout << "Year: ";
//    std::cin >> rentalYear;
//}
//
//void RentalDate::displayDate() const {
//    std::cout << rentalDay << "/" << rentalMonth << "/" << rentalYear;
//}
//
//int RentalDate::operator-(const RentalDate& other) const {
//    return rentalDay - other.rentalDay + (rentalMonth - other.rentalMonth) * 30 +
//           (rentalYear - other.rentalYear) * 365;
//}
