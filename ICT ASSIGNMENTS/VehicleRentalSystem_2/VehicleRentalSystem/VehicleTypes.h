//#pragma once
//#include <string>
//
//class VehicleBase {
//protected:
//    std::string vehicleModel;
//    int manufactureYear;
//    double dailyPrice;
//    bool isAvailable;
//
//public:
//    VehicleBase();
//    virtual double calculateRentalCost(int days) const = 0;
//    virtual void showDetails() const = 0;
//    virtual std::string getVehicleType() const = 0;
//    void setModel(std::string model);
//    void setYear(int year);
//    void setDailyPrice(double price);
//    void setAvailability(bool available);
//    std::string getModel() const;
//    int getYear() const;
//    double getDailyPrice() const;
//    bool getAvailability() const;
//    virtual ~VehicleBase();
//};
//
//class CarType : public VehicleBase {
//public:
//    CarType();
//    double calculateRentalCost(int days) const override;
//    void showDetails() const override;
//    std::string getVehicleType() const override;
//};
//
//class TruckType : public VehicleBase {
//public:
//    TruckType();
//    double calculateRentalCost(int days) const override;
//    void showDetails() const override;
//    std::string getVehicleType() const override;
//};
