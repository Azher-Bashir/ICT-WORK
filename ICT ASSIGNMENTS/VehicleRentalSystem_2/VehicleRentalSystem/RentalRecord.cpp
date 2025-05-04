//#include "RentalRecord.h"
//#include <iostream>
//
//RentalRecord::RentalRecord() : rentalClient(nullptr), rentalVehicle(nullptr), totalCost(0) {}
//
//void RentalRecord::setTransactionDetails(Client* client, VehicleBase* vehicle, RentalDate start, RentalDate end) {
//    rentalClient = client;
//    rentalVehicle = vehicle;
//    startDate = start;
//    endDate = end;
//    int rentalDays = endDate - startDate;
//    if (rentalDays <= 0) rentalDays = 1;
//    totalCost = vehicle->calculateRentalCost(rentalDays);
//    vehicle->setAvailability(false);
//}
//
//void RentalRecord::displayTransaction() {
//    std::cout << "Customer: " << rentalClient->getName() << " | CNIC: " << rentalClient->getCNIC() << std::endl;
//    std::cout << "Vehicle: " << rentalVehicle->getModel() << " (" << rentalVehicle->getVehicleType() << ")\n";
//    std::cout << "From: ";
//    startDate.displayDate();
//    std::cout << " to ";
//    endDate.displayDate();
//    std::cout << std::endl;
//    std::cout << "Total Cost: " << totalCost << "\n";
//    std::cout << "--------------------------------------\n";
//    std::cout << std::endl;
//}
//
//bool RentalRecord::isMatchingClient(long long cnic) const {
//    return rentalClient->getCNIC() == cnic;
//}
