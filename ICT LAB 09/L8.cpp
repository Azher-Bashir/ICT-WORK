////In a C++ program implement a Doctor class with name, specialization, and contact number.A
////
////Hospital class has a name, location, and associated doctors, but doctors can work in multiple
////hospitals.A Hospital uses one or more Doctor objects via pointers or references.Encapsulate all
////data using getter / setter methods.Provide a method in Hospital to print the list of doctors.
////Doctor objects should be created in main() and passed to Hospital.
////Sample Output :
////== = Hospital 1 == =
////Hospital Name : City Hospital
////Location : Downtown
////Associated Doctors :
////Doctor Name : Dr.Alice
////Specialization : Cardiologist
////Contact : 123 - 456 - 7890
////----------------------
////Doctor Name : Dr.Bob
////Specialization : Neurologist
////Contact : 987 - 654 - 3210
////----------------------
////== = Hospital 2 == =
////Hospital Name : Metro Hospital
////Location : Uptown
////Associated Doctors :
////Doctor Name : Dr.Bob
////Specialization : Neurologist
////Contact : 987 - 654 - 3210
////----------------------
////Doctor Name : Dr.Carol
////Specialization : Dermatologist
////Contact : 555 - 123 - 4567
////----------------------
////Note : Use appropriate access specifiers and encapsulation principles & on't use vectors
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Doctor {
//private:
//    string name;
//    string specialization;
//    string contactNumber;
//public:
//    // Constructor to initialize Doctor properties
//    Doctor(string n, string spec, string contact) : name(n), specialization(spec), contactNumber(contact) {}
//    // Getter methods
//    string getName() const {
//        return name;
//    }
//    string getSpecialization() const {
//        return specialization;
//    }
//    string getContactNumber() const {
//        return contactNumber;
//    }
//};
//
//class Hospital {
//private:
//    string name;
//    string location;
//    Doctor* doctors[10]; // Array of pointers to Doctor objects
//    int doctorCount; // Number of associated doctors
//public:
//    // Constructor to initialize Hospital properties
//    Hospital(string n, string loc) : name(n), location(loc), doctorCount(0) {}
//
//    // Setter methods
//    void setName(string n) {
//        name = n;
//    }
//    void setLocation(string loc) {
//        location = loc;
//    }
//
//    // Getter methods
//    string getName() const {
//        return name;
//    }
//    string getLocation() const {
//        return location;
//    }
//
//    // Method to add a doctor to the hospital
//    void addDoctor(Doctor* doctor) {
//        if (doctorCount < 10) {
//            doctors[doctorCount++] = doctor;
//        }
//        else {
//            cout << "Cannot add more doctors. Maximum capacity reached." << endl;
//        }
//    }
//
//    // Method to print the list of doctors
//    void printDoctors() const {
//        cout << "== Hospital: " << name << " ==" << endl;
//        cout << "Location: " << location << endl;
//        cout << "Associated Doctors:" << endl;
//        for (int i = 0; i < doctorCount; ++i) {
//            cout << "Doctor Name: " << doctors[i]->getName() << endl;
//            cout << "Specialization: " << doctors[i]->getSpecialization() << endl;
//            cout << "Contact: " << doctors[i]->getContactNumber() << endl;
//            cout << "----------------------" << endl;
//        }
//    }
//};
//
//int main() {
//    // Create Doctor objects
//    Doctor doc1("Dr. Alice", "Cardiologist", "123-456-7890");
//    Doctor doc2("Dr. Bob", "Neurologist", "987-654-3210");
//    Doctor doc3("Dr. Carol", "Dermatologist", "555-123-4567");
//
//    // Create Hospital objects
//    Hospital hospital1("City Hospital", "Downtown");
//    Hospital hospital2("Metro Hospital", "Uptown");
//
//    // Add doctors to hospitals
//    hospital1.addDoctor(&doc1);
//    hospital1.addDoctor(&doc2);
//
//    hospital2.addDoctor(&doc2);
//    hospital2.addDoctor(&doc3);
//
//    // Print details of hospitals
//    hospital1.printDoctors();
//    hospital2.printDoctors();
//
//    return 0;
//}
