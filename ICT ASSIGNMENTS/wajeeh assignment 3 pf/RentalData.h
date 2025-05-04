//#pragma once
//#include "UserInfo.h"
//#include "BasicVehicle.h"
//#include "SimpleDate.h"
//
//class RentalTransaction {
//public:
//    Person renter;
//    SimpleVehicle rentedVehicle;
//    RentalDate start;
//    RentalDate end;
//    double totalAmount;
//
//    void setTransaction(Person p, SimpleVehicle v, RentalDate s, RentalDate e) {
//        renter = p;
//        rentedVehicle = v;
//        start = s;
//        end = e;
//        int days = start.daysBetween(end);
//        if (days <= 0) days = 1;
//        totalAmount = v.rate * days;
//    }
//
//    void showTransaction() {
//        renter.show();
//        cout << "Vehicle Rented: " << rentedVehicle.model << endl;
//        cout << "From: "; start.display();
//        cout << " To: "; end.display();
//        cout << "\nTotal Cost: " << totalAmount << endl;
//        cout << "-----------------------------\n";
//    }
//};