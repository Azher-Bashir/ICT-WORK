//#include "VehicleTypes.h"
//#include <iostream>
//
//VehicleBase::VehicleBase() : vehicleModel(" "), manufactureYear(0), dailyPrice(0.0), isAvailable(true) {}
//
//void VehicleBase::setModel(std::string model) { vehicleModel = model; }
//void VehicleBase::setYear(int year) { manufactureYear = year; }
//void VehicleBase::setDailyPrice(double price) { dailyPrice = price; }
//void VehicleBase::setAvailability(bool available) { isAvailable = available; }
//std::string VehicleBase::getModel() const { return vehicleModel; }
//int VehicleBase::getYear() const { return manufactureYear; }
//double VehicleBase::getDailyPrice() const { return dailyPrice; }
//bool VehicleBase::getAvailability() const { return isAvailable; }
//VehicleBase::~VehicleBase() {}
//\
//CarType::CarType() : VehicleBase() {}
//
//double CarType::calculateRentalCost(int days) const {
//    return dailyPrice * days;
//}
//
//void CarType::showDetails() const {
//    std::cout << "Car: " << vehicleModel << " | Year: " << manufactureYear
//              << " | Rent/day: " << dailyPrice << " | Available: "
//              << (isAvailable ? "Yes" : "No") << std::endl;
//}
//
//std::string CarType::getVehicleType() const { return "Car"; }
//
//TruckType::TruckType() : VehicleBase() {}
//
//double TruckType::calculateRentalCost(int days) const {
//    double tax = dailyPrice * 0.05;
//    return (dailyPrice + tax) * days;
//}
//
//void TruckType::showDetails() const {
//    std::cout << "Truck: " << vehicleModel << " | Year: " << manufactureYear
//              << " | Rent/day+tax: " << dailyPrice * 1.05 << " | Available: "
//              << (isAvailable ? "Yes" : "No") << std::endl;
//}
//
//std::string TruckType::getVehicleType() const { return "Truck"; }
