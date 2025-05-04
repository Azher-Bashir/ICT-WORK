//#include <iostream>
//#include <string>
//using namespace std;
//
//template <typename DataType>
//class CustomList {
//private:
//    DataType* dataArray;
//    int maxCapacity;
//    int currentSize;
//
//public:
//    CustomList() : dataArray(nullptr), maxCapacity(100), currentSize(0) { dataArray = new DataType[100]; }
//    void addItem(DataType item) {
//        if (currentSize < maxCapacity) dataArray[currentSize++] = item;
//        else cout << "List is full.\n";
//    }
//    DataType getData(int position) {
//        if (position >= 0 && position < currentSize) return dataArray[position];
//        else return nullptr;
//    }
//    int getSize() { return currentSize; }
//    ~CustomList() { delete[] dataArray; }
//};
//
//class VehicleBase {
//protected:
//    string vehicleModel;
//    int manufactureYear;
//    double dailyPrice;
//    bool isAvailable;
//
//public:
//    VehicleBase() : vehicleModel(" "), manufactureYear(0), dailyPrice(0.0), isAvailable(true) {}
//    virtual double calculateRentalCost(int days) const = 0;
//    virtual void showDetails() const = 0;
//    virtual string getVehicleType() const = 0;
//    void setModel(string model) { this->vehicleModel = model; }
//    void setYear(int year) { this->manufactureYear = year; }
//    void setDailyPrice(double price) { this->dailyPrice = price; }
//    void setAvailability(bool available) { this->isAvailable = available; }
//    string getModel() const { return vehicleModel; }
//    int getYear() const { return manufactureYear; }
//    double getDailyPrice() const { return dailyPrice; }
//    bool getAvailability() const { return isAvailable; }
//    virtual ~VehicleBase() {}
//};
//
//class CarType : public VehicleBase {
//public:
//    CarType() : VehicleBase() {}
//    double calculateRentalCost(int days) const override {
//        return dailyPrice * days;
//    }
//    void showDetails() const override {
//        cout << "Car: " << vehicleModel << " | Year: " << manufactureYear << " | Rent/day: " << dailyPrice << " | Available: " << (isAvailable ? "Yes" : "No") << endl;
//    }
//    string getVehicleType() const override { return "Car"; }
//};
//
//class TruckType : public VehicleBase {
//public:
//    TruckType() : VehicleBase() {}
//    double calculateRentalCost(int days) const override {
//        double tax = (dailyPrice * 0.05);
//        return (dailyPrice + tax) * days;
//    }
//    void showDetails() const override {
//        cout << "Truck: " << vehicleModel << " | Year: " << manufactureYear << " | Rent/day+tax: " << dailyPrice * 1.05 << " | Available: " << (isAvailable ? "Yes" : "No") << endl;
//    }
//    string getVehicleType() const override { return "Truck"; }
//};
//
//class Client {
//    string clientName;
//    long long clientCNIC;
//    string clientMobile;
//public:
//    Client() : clientName(""), clientCNIC(0), clientMobile("") {}
//    void setClientDetails() {
//        cin.ignore();
//        cout << "Enter Name: "; getline(cin, clientName);
//        cout << "Enter CNIC: "; cin >> clientCNIC;
//        cout << "Enter Mobile No: "; cin >> clientMobile;
//    }
//    string getName() const { return clientName; }
//    long long getCNIC() const { return clientCNIC; }
//    string getMobile() const { return clientMobile; }
//};
//
//class RentalDate {
//    int rentalDay, rentalMonth, rentalYear;
//public:
//    RentalDate() : rentalDay(0), rentalMonth(0), rentalYear(0) {}
//    void setDate() {
//        cout << "Day: ";
//        cin >> rentalDay;
//        cout << "Month: ";
//        cin >> rentalMonth;
//        cout << "Year: ";
//        cin >> rentalYear;
//    }
//    void displayDate() const {
//        cout << rentalDay << "/" << rentalMonth << "/" << rentalYear;
//    }
//    int operator-(const RentalDate& other) const {
//        return rentalDay - other.rentalDay + (rentalMonth - other.rentalMonth) * 30 + (rentalYear - other.rentalYear) * 365; // Approximate
//    }
//};
//
//class RentalRecord {
//    Client* rentalClient;
//    VehicleBase* rentalVehicle;
//    RentalDate startDate, endDate;
//    double totalCost;
//public:
//    RentalRecord() : rentalClient(nullptr), rentalVehicle(nullptr), totalCost(0) {}
//    void setTransactionDetails(Client* client, VehicleBase* vehicle, RentalDate start, RentalDate end) {
//        rentalClient = client;
//        rentalVehicle = vehicle;
//        startDate = start;
//        endDate = end;
//        int rentalDays = endDate - startDate;
//        if (rentalDays <= 0) rentalDays = 1;
//        totalCost = vehicle->calculateRentalCost(rentalDays);
//        vehicle->setAvailability(false);
//    }
//    void displayTransaction() {
//        cout << "Customer: " << rentalClient->getName() << " | CNIC: " << rentalClient->getCNIC() << endl;
//        cout << "Vehicle: " << rentalVehicle->getModel() << " (" << rentalVehicle->getVehicleType() << ")\n";
//        cout << "From: "; startDate.displayDate(); cout << " to "; endDate.displayDate(); cout << endl;
//        cout << "Total Cost: " << totalCost << "\n";
//        cout << "--------------------------------------\n";
//        cout << endl;
//    }
//    bool isMatchingClient(long long cnic) const {
//        return rentalClient->getCNIC() == cnic;
//    }
//};
//
//#include <iostream>
//#include <iomanip>
//#include <string>
//using namespace std;
//
//int main() {
//    CustomList<Client*> clientList;
//    CustomList<VehicleBase*> vehicleList;
//    CustomList<RentalRecord*> rentalList;
//
//    CarType* carArray[5];
//    carArray[0] = new CarType();
//    carArray[0]->setModel("Toyota Corolla");
//    carArray[0]->setYear(2020); carArray[0]->setDailyPrice(50);
//    carArray[0]->setAvailability(true);
//
//    carArray[1] = new CarType();
//    carArray[1]->setModel("Honda Civic");
//    carArray[1]->setYear(2019); carArray[1]->setDailyPrice(60);
//    carArray[1]->setAvailability(false);
//
//    carArray[2] = new CarType();
//    carArray[2]->setModel("Hyundai Elantra");
//    carArray[2]->setYear(2021); carArray[2]->setDailyPrice(55);
//    carArray[2]->setAvailability(true);
//
//    carArray[3] = new CarType();
//    carArray[3]->setModel("Kia Sportage");
//    carArray[3]->setYear(2022); carArray[3]->setDailyPrice(70);
//    carArray[3]->setAvailability(true);
//
//    carArray[4] = new CarType();
//    carArray[4]->setModel("Nissan Altima");
//    carArray[4]->setYear(2018); carArray[4]->setDailyPrice(45);
//    carArray[4]->setAvailability(false);
//
//    TruckType* truckArray[5];
//    truckArray[0] = new TruckType();
//    truckArray[0]->setModel("Ford F-150");
//    truckArray[0]->setYear(2021);
//    truckArray[0]->setDailyPrice(100);
//    truckArray[0]->setAvailability(true);
//
//    truckArray[1] = new TruckType();
//    truckArray[1]->setModel("Chevrolet Silverado");
//    truckArray[1]->setYear(2020);
//    truckArray[1]->setDailyPrice(110);
//    truckArray[1]->setAvailability(false);
//
//    truckArray[2] = new TruckType();
//    truckArray[2]->setModel("Ram 1500");
//    truckArray[2]->setYear(2022);
//    truckArray[2]->setDailyPrice(120);
//    truckArray[2]->setAvailability(true);
//
//    truckArray[3] = new TruckType();
//    truckArray[3]->setModel("GMC Sierra");
//    truckArray[3]->setYear(2019);
//    truckArray[3]->setDailyPrice(105);
//    truckArray[3]->setAvailability(true);
//
//    truckArray[4] = new TruckType();
//    truckArray[4]->setModel("Toyota Tundra");
//    truckArray[4]->setYear(2018);
//    truckArray[4]->setDailyPrice(95);
//    truckArray[4]->setAvailability(false);
//
//    // Adding vehicles to the list
//    for (int i = 0; i < 5; i++) {
//        vehicleList.addItem(carArray[i]);
//        vehicleList.addItem(truckArray[i]);
//    }
//
//    int userChoice = 0;
//    while (true) {
//        // Improved interface
//        cout << "\n========================================================\n";
//        cout << "                  VEHICLE RENTAL SYSTEM           \n";
//        cout << "========================================================\n";
//        cout << "1. Add Customer\n";
//        cout << "2. Add Vehicle\n";
//        cout << "3. Book Vehicle\n";
//        cout << "4. Search Rental History\n";
//        cout << "5. Show Available Vehicles\n";
//        cout << "6. Show Not Available Vehicles\n";
//        cout << "9. Exit\n";
//        cout << "=======================================================\n";
//        cout << "Enter your choice: ";
//        cin >> userChoice;
//        cout << endl;
//
//        if (userChoice == 1) {
//            cout << "================== Add Customer ==================\n";
//            Client* newClient = new Client;
//            newClient->setClientDetails();
//            clientList.addItem(newClient);
//            cout << "Customer added successfully!\n";
//        }
//        else if (userChoice == 2) {
//            cout << "================== Add Vehicle ==================\n";
//            int vehicleType;
//            cout << "1. Car\n2. Truck\nChoose vehicle type: ";
//            cin >> vehicleType;
//            VehicleBase* newVehicle = nullptr;
//            string model; int year; double rent;
//            cout << "Model: "; cin >> model;
//            cout << "Year: "; cin >> year;
//            cout << "Rent/day: "; cin >> rent;
//            if (vehicleType == 1) newVehicle = new CarType();
//            else newVehicle = new TruckType();
//            newVehicle->setModel(model); newVehicle->setYear(year); newVehicle->setDailyPrice(rent); newVehicle->setAvailability(true);
//            vehicleList.addItem(newVehicle);
//            cout << "Vehicle added successfully!\n";
//        }
//        else if (userChoice == 3) {
//            cout << "================== Book Vehicle ==================\n";
//            long long clientCNIC; string vehicleModel;
//            cout << "Enter CNIC: "; cin >> clientCNIC;
//            cout << "Enter Vehicle Model: "; cin >> vehicleModel;
//            Client* matchedClient = nullptr;
//            for (int i = 0; i < clientList.getSize(); i++) {
//                if (clientList.getData(i)->getCNIC() == clientCNIC) {
//                    matchedClient = clientList.getData(i);
//                    break;
//                }
//            }
//            VehicleBase* matchedVehicle = nullptr;
//            for (int i = 0; i < vehicleList.getSize(); i++) {
//                if (vehicleList.getData(i)->getModel() == vehicleModel && vehicleList.getData(i)->getAvailability()) {
//                    matchedVehicle = vehicleList.getData(i);
//                    break;
//                }
//            }
//            if (matchedClient && matchedVehicle) {
//                RentalDate start, end;
//                cout << "Enter Start Date:\n"; start.setDate();
//                cout << "Enter End Date:\n"; end.setDate();
//                RentalRecord* newTransaction = new RentalRecord;
//                newTransaction->setTransactionDetails(matchedClient, matchedVehicle, start, end);
//                rentalList.addItem(newTransaction);
//                cout << "Booking successful!\n";
//            }
//            else {
//                cout << "Customer or Vehicle not found or unavailable.\n";
//            }
//        }
//        else if (userChoice == 4) {
//            cout << "================= Search Rental History =================\n";
//            long long clientCNIC;
//            cout << "Enter CNIC to search history: "; cin >> clientCNIC;
//            bool found = false;
//            for (int i = 0; i < rentalList.getSize(); i++) {
//                if (rentalList.getData(i)->isMatchingClient(clientCNIC)) {
//                    rentalList.getData(i)->displayTransaction();
//                    found = true;
//                }
//            }
//            if (!found) {
//                cout << "No rental history found for the given CNIC.\n";
//            }
//        }
//        else if (userChoice == 5) {
//            cout << "================= Available Vehicles =================\n";
//            for (int i = 0; i < vehicleList.getSize(); i++) {
//                if (vehicleList.getData(i)->getAvailability()) {
//                    vehicleList.getData(i)->showDetails();
//                }
//            }
//        }
//        else if (userChoice == 6) {
//            cout << "================== Not Available Vehicles ==================\n";
//            for (int i = 0; i < vehicleList.getSize(); i++) {
//                if (!vehicleList.getData(i)->getAvailability()) {
//                    vehicleList.getData(i)->showDetails();
//                }
//            }
//        }
//        else if (userChoice == 9) {
//            cout << "Exiting program. Thank you for using the Vehicle Rental System!\n";
//            break;
//        }
//        else {
//            cout << "Invalid option. Please try again.\n";
//        }
//    }
//    return 0;
//}
