//#include "Vehicle.h"
//
//Vehicle::Vehicle(string m, int y, float p) : model(m), year(y), pricePerDay(p), available(true) {}
//string Vehicle::getModel() const { return model; }
//bool Vehicle::isAvailable() const { return available; }
//void Vehicle::setAvailable(bool status) { available = status; }
//Vehicle::~Vehicle() {}
//
//Car::Car(string m, int y, float p) : Vehicle(m, y, p) {}
//float Car::calculateRent(int days) {
//    return pricePerDay * days;
//}
//
//Truck::Truck(string m, int y, float p) : Vehicle(m, y, p) {}
//float Truck::calculateRent(int days) {
//    float base = pricePerDay * days;
//    return base + base * 0.05;
//}
