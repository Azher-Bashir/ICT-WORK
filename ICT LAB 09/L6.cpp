////Write a C++ program to model a computer that contains a CPU(Central Processing Unit) using
////composition in C++.The CPU class should store the number of cores and the processor speed(in
////	GHz).The computer class should contain the brand name and RAM size.All data members of
////	both Computer and CPU classes must be private.Access should be controlled via public getter
////	and setter methods.Define a configureCPU(int cores, float speed) method inside the computer
////	class.This method should be used to configure the internal CPU object using the CPU's setter
////	methods.Implement a method in the computer class to display the complete details of the
////	computer, including brand, RAM size, and the specs of the contained CPU.Do not expose the
////	CPU object directly outside the computer class.
////	Sample Output :
////Computer Brand : Dell
////RAM Size : 16 GB
////CPU Cores : 8
////CPU Speed : 3.5 GHz
////	Note : Use appropriate access specifiers and encapsulation principles.
//#include <iostream>
//using namespace std;
//class CPU {
//private:
//	int cores;
//	float speed;
//public:
//	// Constructor to initialize CPU properties
//	CPU() : cores(0), speed(0.0) {}
//	// Setter methods
//	void setCores(int c) {
//		cores = c;
//	}
//	void setSpeed(float s) {
//		speed = s;
//	}
//	// Getter methods
//	int getCores() const {
//		return cores;
//	}
//	float getSpeed() const {
//		return speed;
//	}
//};
//class Computer {
//private:
//	string brand;
//	int ramSize;
//	CPU cpu; // Composition: Computer has a CPU
//public:
//	// Constructor to initialize Computer properties
//	Computer(string b, int r) : brand(b), ramSize(r) {}
//	// Setter methods
//	void setBrand(string b) {
//		brand = b;
//	}
//	void setRamSize(int r) {
//		ramSize = r;
//	}
//	// Method to configure CPU
//	void configureCPU(int cores, float speed) {
//		cpu.setCores(cores);
//		cpu.setSpeed(speed);
//	}
//	// Method to display computer details
//	void displayDetails() const {
//		cout << "Computer Brand: " << brand << endl;
//		cout << "RAM Size: " << ramSize << " GB" << endl;
//		cout << "CPU Cores: " << cpu.getCores() << endl;
//		cout << "CPU Speed: " << cpu.getSpeed() << " GHz" << endl;
//	}
//};
//int main() {
//	// Create a Computer object
//	Computer myComputer("Dell", 16);
//
//	// Configure the CPU
//	myComputer.configureCPU(8, 3.5);
//
//	// Display the details of the computer
//	myComputer.displayDetails();
//
//	return 0;
//}