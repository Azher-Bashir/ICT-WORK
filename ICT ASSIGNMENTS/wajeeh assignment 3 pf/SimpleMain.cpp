//#include <iostream>
//#include "BasicVehicle.h"
//#include "UserInfo.h"
//#include "SimpleDate.h"
//#include "RentalData.h"
//
//using namespace std;
//
//int main() {
//    const int MAX = 10;
//    SimpleVehicle vehicleList[MAX];
//    Person personList[MAX];
//    RentalTransaction transactionList[MAX];
//
//    int vCount = 0, pCount = 0, tCount = 0;
//    int choice;
//
//    while (true) {
//        cout << "\n--- Simple Vehicle Rental ---\n";
//        cout << "1. Add Customer\n2. Add Vehicle\n3. Rent Vehicle\n4. Show All Rentals\n5. Show Available Vehicles\n9. Exit\nChoice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            if (pCount < MAX) {
//                Person p;
//                p.inputDetails();
//                personList[pCount++] = p;
//            }
//        }
//        else if (choice == 2) {
//            if (vCount < MAX) {
//                SimpleVehicle v;
//                string m; int y; double r;
//                cout << "Model: "; cin >> m;
//                cout << "Year: "; cin >> y;
//                cout << "Rate per Day: "; cin >> r;
//                v.setDetails(m, y, r);
//                vehicleList[vCount++] = v;
//            }
//        }
//        else if (choice == 3) {
//            long long pid;
//            string model;
//            cout << "Enter Customer ID: "; cin >> pid;
//            cout << "Enter Vehicle Model: "; cin >> model;
//
//            Person* foundPerson = nullptr;
//            SimpleVehicle* foundVehicle = nullptr;
//
//            for (int i = 0; i < pCount; i++) {
//                if (personList[i].id == pid) {
//                    foundPerson = &personList[i];
//                    break;
//                }
//            }
//
//            for (int i = 0; i < vCount; i++) {
//                if (vehicleList[i].model == model && vehicleList[i].available) {
//                    foundVehicle = &vehicleList[i];
//                    break;
//                }
//            }
//
//            if (foundPerson && foundVehicle) {
//                RentalDate start, end;
//                cout << "Enter Start Date:\n"; start.set();
//                cout << "Enter End Date:\n"; end.set();
//
//                RentalTransaction rt;
//                rt.setTransaction(*foundPerson, *foundVehicle, start, end);
//                transactionList[tCount++] = rt;
//                foundVehicle->available = false;
//
//                cout << "Vehicle booked successfully!\n";
//            }
//            else {
//                cout << "Customer or Vehicle not found or not available.\n";
//            }
//        }
//        else if (choice == 4) {
//            if (tCount == 0) {
//                cout << "No rental transactions available.\n";
//            }
//            else {
//                for (int i = 0; i < tCount; i++) {
//                    transactionList[i].showTransaction();
//                }
//            }
//        }
//
//        else if (choice == 5) {
//            bool anyAvailable = false;
//            for (int i = 0; i < vCount; i++) {
//                if (vehicleList[i].available) {
//                    vehicleList[i].show();
//                    anyAvailable = true;
//                }
//            }
//            if (!anyAvailable) {
//                cout << "No vehicles are currently available.\n";
//            }
//        }
//
//        else if (choice == 9) {
//            break;
//        }
//        else {
//            cout << "Invalid option.\n";
//        }
//    }
//
//    return 0;
//}