//#include "SmartHospitalStructures.h"
//#include <queue> // Built-in Queue Library for SmartHospitalSystem::regQueue
//#include <stack>
//#include <iostream>
//#include <algorithm> // For std::swap used in heapify
//
//using namespace std;
//
//// =========================================================================
////                  CUSTOM DATA STRUCTURE IMPLEMENTATIONS
//// =========================================================================
//
//// --- PatientBST Implementations ---
//
//// Recursive helper to insert a patient record
//BSTNode* PatientBST::insertHelper(BSTNode* node, Patient p)
//{
//    if (node == nullptr)
//    {
//        return new BSTNode(p);
//    }
//
//    if (p.getId() < node->data.getId())
//    {
//        node->left = insertHelper(node->left, p);
//    }
//    else if (p.getId() > node->data.getId())
//    {
//        node->right = insertHelper(node->right, p);
//    }
//    // If IDs are equal, do nothing (prevent duplicates)
//    return node;
//}
//
//void PatientBST::insert(Patient p)
//{
//    root = insertHelper(root, p);
//}
//
//// Recursive helper for In-order traversal (to display records sorted by ID)
//void PatientBST::inorderHelper(BSTNode* node)
//{
//    if (node == nullptr) 
//        return;
//
//    inorderHelper(node->left);
//    node->data.print();
//    inorderHelper(node->right);
//    BSTNode* curr = node;
//    stack <BSTNode*> st;
//    while(curr != nullptr || )
//}
//
//void PatientBST::inorderTraversal()
//{
//    inorderHelper(root);
//}
//
//// Recursive helper to search for a patient by ID
//BSTNode* PatientBST::searchHelper(BSTNode* node, int id)
//{
//    if (node == nullptr || node->data.getId() == id)
//    {
//        return node;
//    }
//
//    if (id < node->data.getId())
//    {
//        return searchHelper(node->left, id);
//    }
//    else
//    {
//        return searchHelper(node->right, id);
//    }
//}
//
//Patient* PatientBST::search(int id)
//{
//    BSTNode* found = searchHelper(root, id);
//    return found ? &(found->data) : nullptr;
//}
//
//// REMOVED: destroyHelper implementation to match the new header file.
//// Warning: BST memory cleanup is now missing.
//
//
//// --- EmergencyHeap Implementations ---
//
//void EmergencyHeap::heapifyDown(int index)
//{
//    int largest = index;
//    int left = 2 * index + 1;
//    int right = 2 * index + 2;
//
//    if (left < size && arr[left].getSeverity() > arr[largest].getSeverity())
//    {
//        largest = left;
//    }
//
//    if (right < size && arr[right].getSeverity() > arr[largest].getSeverity())
//    {
//        largest = right;
//    }
//
//    if (largest != index)
//    {
//        swap(arr[index], arr[largest]);
//        heapifyDown(largest);
//    }
//}
//
//void EmergencyHeap::addEmergency(Patient p)
//{
//    if (size >= 50)
//    {
//        cout << "Error: Emergency queue capacity reached (50).\n";
//        return;
//    }
//    arr[size] = p;
//
//    // Inlined heapifyUp logic
//    int index = size;
//    int parent = (index - 1) / 2;
//    while (index > 0 && arr[index].getSeverity() > arr[parent].getSeverity())
//    {
//        swap(arr[index], arr[parent]);
//        index = parent;
//        parent = (index - 1) / 2;
//    }
//    // End inlined heapifyUp logic
//
//    size++;
//}
//
//Patient EmergencyHeap::deleteMostCritical()
//{
//    if (isEmpty())
//    {
//        return Patient(); // Return default patient if empty
//    }
//
//    // Most critical patient is always at the root (index 0)
//    Patient criticalPatient = arr[0];
//
//    // Move the last element to the root
//    arr[0] = arr[size - 1];
//    size--;
//
//    // Restore the heap property
//    heapifyDown(0);
//
//    return criticalPatient;
//}
//
//void EmergencyHeap::display()
//{
//    if (isEmpty())
//    {
//        cout << "Emergency queue is empty.\n";
//        return;
//    }
//    cout << "Max-Heap (Priority View, showing array elements):\n";
//    for (int i = 0; i < size; ++i)
//    {
//        cout << i + 1 << ". ";
//        arr[i].print();
//    }
//}
//
//
//// =========================================================================
////                  Smart Hospital System Class Implementation
//// =========================================================================
//
//class SmartHospitalSystem
//{
//private:
//    EmergencyHeap* emergencyPatients; // pointer to custom heap
//    queue<Patient> regQueue;          // built-in queue
//    PatientBST* patientRecord;       // pointer to custom BST
//
//public:
//    SmartHospitalSystem()
//    {
//        emergencyPatients = new EmergencyHeap();
//        patientRecord = new PatientBST();
//        // regQueue is initialized by its default constructor
//    }
//
//    ~SmartHospitalSystem()
//    {
//        delete emergencyPatients;
//        delete patientRecord;
//        // WARNING: Since the PatientBST destructor was removed, deleting 
//        // patientRecord will now leak all allocated BSTNode memory.
//        // regQueue is destroyed automatically
//    }
//
//    // ------------------- Patient Registration --------------
//    void registerPatient(const Patient& p)
//    {
//        regQueue.push(p);
//        cout << "Patient " << p.getName() << " registered and added to regular queue.\n";
//    }
//
//    Patient serveNextPatient()
//    {
//        if (regQueue.empty())
//        {
//            cout << "Regular queue is empty. Cannot serve patient.\n";
//            return Patient();
//        }
//        Patient p = regQueue.front();
//        regQueue.pop();
//        cout << "Serving next patient from regular queue: " << p.getName() << " (ID: " << p.getId() << ")\n";
//        return p;
//    }
//
//    void displayWaitingQueue()
//    {
//        cout << "--- Regular Waiting Queue (FIFO) ---\n";
//        if (regQueue.empty())
//        {
//            cout << "Queue is empty.\n";
//            return;
//        }
//
//        // Cannot traverse std::queue directly, so we copy it for display
//        queue<Patient> tempQueue = regQueue;
//        int count = 1;
//        while (!tempQueue.empty())
//        {
//            cout << count++ << ". ";
//            tempQueue.front().print();
//            tempQueue.pop();
//        }
//    }
//
//    // ------------------- Patient Management ----------------
//    void addPatientRecord(const Patient& p)
//    {
//        patientRecord->insert(p);
//        cout << "Record for Patient " << p.getName() << " added to BST.\n";
//    }
//
//    Patient* searchPatient(int id)
//    {
//        return patientRecord->search(id);
//    }
//
//    void displayAllPatients()
//    {
//        cout << "--- All Patient Records (Sorted by ID - In-order Traversal) ---\n";
//        patientRecord->inorderTraversal();
//    }
//
//    // ------------------- Emergency Management --------------
//    void addEmergencyPatient(const Patient& p)
//    {
//        emergencyPatients->addEmergency(p);
//        cout << "Emergency patient " << p.getName() << " added with severity " << p.getSeverity() << ".\n";
//    }
//
//    Patient treatMostCriticalPatient()
//    {
//        if (emergencyPatients->isEmpty())
//        {
//            cout << "Emergency queue is empty. Cannot treat patient.\n";
//            return Patient();
//        }
//        Patient p = emergencyPatients->deleteMostCritical();
//        cout << "Treating most critical patient: " << p.getName() << " (Severity: " << p.getSeverity() << ")\n";
//        return p;
//    }
//
//    void displayEmergencyPatients()
//    {
//        cout << "--- Emergency Queue (Max Heap) ---\n";
//        emergencyPatients->display();
//    }
//};
//
//// =========================================================================
////                                   Main Driver
//// =========================================================================
//
//int main()
//{
//    cout << "--- Smart Hospital System Demo ---\n\n";
//
//    SmartHospitalSystem system;
//
//    // --- 1. Patient Registration (std::queue / FIFO) ---
//    Patient p1(101, "Alice Johnson", 30, 1);
//    Patient p2(102, "Bob Smith", 55, 1);
//    system.registerPatient(p1);
//    system.registerPatient(p2);
//    system.displayWaitingQueue();
//
//    // --- 2. Emergency Management (Custom Max Heap / Severity) ---
//    cout << "\n--- Emergency Management ---\n";
//    Patient e1(901, "Charlie Brown", 10, 5); // Critical
//    Patient e2(902, "Diana Prince", 40, 2); // Moderate
//    Patient e3(903, "Bruce Wayne", 60, 8); // MOST Critical
//
//    system.addEmergencyPatient(e1);
//    system.addEmergencyPatient(e2);
//    system.addEmergencyPatient(e3);
//    system.displayEmergencyPatients();
//
//    // Treat the most critical patient (Bruce Wayne, Severity: 8)
//    system.treatMostCriticalPatient();
//    system.displayEmergencyPatients();
//
//    // --- 3. Serving Regular Patients (FIFO) ---
//    cout << "\n--- Regular Patient Service ---\n";
//    system.serveNextPatient(); // Alice
//    system.displayWaitingQueue(); // Bob remains
//
//    // --- 4. Patient Record Management (Custom BST) ---
//    cout << "\n--- Record Management ---\n";
//    system.addPatientRecord(p1); // Alice (ID 101)
//    system.addPatientRecord(e3); // Bruce (ID 903)
//    system.addPatientRecord(p2); // Bob (ID 102)
//
//    // Display all records (should be sorted by ID: 101, 102, 903)
//    system.displayAllPatients();
//
//    // Search for a patient
//    int searchID = 903;
//    Patient* found = system.searchPatient(searchID);
//    if (found)
//    {
//        cout << "\nSearch Result for ID " << searchID << ": Found ";
//        found->print();
//    }
//    else
//    {
//        cout << "\nSearch Result for ID " << searchID << ": Patient not found.\n";
//    }
//
//    cout << "\n\n--- System Shutdown ---\n";
//    return 0;
//}