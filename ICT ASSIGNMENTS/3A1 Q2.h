#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <iostream>
#include <string>
using namespace std;

// ================= PATIENT CLASS =================
class Patient {
private:
    int id;
    string name;
    string disease;
    Patient* next;

public:
    Patient(int pid, string pname, string pdisease) {
        id = pid;
        name = pname;
        disease = pdisease;
        next = nullptr;
    }

    friend class Hospital;
};

// ================= HOSPITAL CLASS =================
class Hospital {
private:
    Patient* head;

public:
    Hospital() {
        head = nullptr;
    }

    // Admit a new patient
    void admit(int pid, string pname, string pdisease) {
        Patient* newPatient = new Patient(pid, pname, pdisease);
        if (!head) {
            head = newPatient;
        }
        else {
            Patient* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newPatient;
        }
    }

    // Discharge a patient by ID
    void discharge(int pid) {
        if (!head) {
            cout << "No patients to discharge." << endl;
            return;
        }
        if (head->id == pid) {
            Patient* temp = head;
            head = head->next;
            delete temp;
            cout << "Patient with ID " << pid << " discharged." << endl;
            return;
        }
        Patient* temp = head;
        while (temp->next && temp->next->id != pid) {
            temp = temp->next;
        }
        if (temp->next) {
            Patient* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            cout << "Patient with ID " << pid << " discharged." << endl;
        }
        else {
            cout << "Patient with ID " << pid << " not found." << endl;
        }
    }

    // Print all admitted patients
    void print() {
        if (!head) {
            cout << "No patients admitted." << endl;
            return;
        }
        Patient* temp = head;
        cout << "Currently admitted patients:" << endl;
        while (temp) {
            cout << "ID: " << temp->id
                << ", Name: " << temp->name
                << ", Disease: " << temp->disease << endl;
            temp = temp->next;
        }
    }
};

#endif
