//#ifndef VEHICLE_H
//#define VEHICLE_H
//
//#include <string>
//using namespace std;
//
//class Vehicle {
//protected:
//    string model;
//    int year;
//    float pricePerDay;
//    bool available;
//public:
//    Vehicle(string m, int y, float p);
//    virtual float calculateRent(int days) = 0;
//    string getModel() const;
//    bool isAvailable() const;
//    void setAvailable(bool status);
//    virtual ~Vehicle();
//};
//
//class Car : public Vehicle {
//public:
//    Car(string m, int y, float p);
//    float calculateRent(int days) override;
//};
//
//class Truck : public Vehicle {
//public:
//    Truck(string m, int y, float p);
//    float calculateRent(int days) override;
//};
//
//#endif
