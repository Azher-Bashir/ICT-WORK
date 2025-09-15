////Determine the best data structure that you have studied so far and design the solution to the following
////problem.You are asked to develop a program to maintain records of patients admitted to a hospital.
////Each record contains a patient’s ID, name, and disease.
////Your program should support the following operations :
////1. Admit a new patient(add to the system).
////2. Discharge a patient(delete their record efficiently).
////3. Print the list of currently admitted patients.
////write code in c++ without using vectors and use classes in which make the variable private and make the defination of the functions outside the class.
//
//#include <iostream>
//#include <string>
//using namespace std;
//class Patient {
//	private:
//	int id;
//	string name;
//	string disease;
//	Patient* next;
//public:
//	Patient(int pid, string pname, string pdisease) {
//		id = pid;
//		name = pname;
//		disease = pdisease;
//		next = nullptr;
//	}
//	friend class Hospital;
//};
//class Hospital {
//	private:
//		Patient* head;
//	public:
//		Hospital() {
//			head = nullptr;
//		}
//		void admit(int pid, string pname, string pdisease);
//		void discharge(int pid);
//		void print();
//};
//void Hospital::admit(int pid, string pname, string pdisease) {
//	Patient* newPatient = new Patient(pid, pname, pdisease);
//	if (!head) {
//		head = newPatient;
//	} else {
//		Patient* temp = head;
//		while (temp->next) {
//			temp = temp->next;
//		}
//		temp->next = newPatient;
//	}
//}
//void Hospital::discharge(int pid) {
//	if (!head) {
//		cout << "No patients to discharge." << endl;
//		return;
//	}
//	if (head->id == pid) {
//		Patient* temp = head;
//		head = head->next;
//		delete temp;
//		cout << "Patient with ID " << pid << " discharged." << endl;
//		return;
//	}
//	Patient* temp = head;
//	while (temp->next && temp->next->id != pid) {
//		temp = temp->next;
//	}
//	if (temp->next) {
//		Patient* toDelete = temp->next;
//		temp->next = temp->next->next;
//		delete toDelete;
//		cout << "Patient with ID " << pid << " discharged." << endl;
//	} else {
//		cout << "Patient with ID " << pid << " not found." << endl;
//	}
//}
//void Hospital::print() {
//	if (!head) {
//		cout << "No patients admitted." << endl;
//		return;
//	}
//	Patient* temp = head;
//	cout << "Currently admitted patients:" << endl;
//	while (temp) {
//		cout << "ID: " << temp->id << ", Name: " << temp->name << ", Disease: " << temp->disease << endl;
//		temp = temp->next;
//	}
//}
//int main() {
//	Hospital hospital;
//	hospital.admit(1, "Azher bashir", "Flu");
//	hospital.admit(2, "Hussnain", "Cold");
//	hospital.admit(3, "Villana", "Fever");
//	hospital.print();
//	hospital.discharge(2);
//	hospital.print();
//	hospital.discharge(4);
//	return 0;
//}