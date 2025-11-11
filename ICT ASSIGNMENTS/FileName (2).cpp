////ICT ASSIGNMENTS\EMPLOYEE DATA.cpp
//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//// Simple helper to clear remaining characters on the current input line.
//// Keeps code simple and portable (no <limits>).
//void clearInputLine()
//{
//    char c;
//    // read and discard until newline or EOF
//    while (cin.get(c) && c != '\n') {}
//}
//
//// Employee as a simple class (fields public to keep code easy to read).
//class Employee
//{
//public:
//    int id;
//    string first;
//    string last;
//    string dept;
//    int salary;
//
//    Employee() : id(0), first(""), last(""), dept(""), salary(0) {}
//    Employee(int i, const string& f, const string& l, const string& d, int s)
//        : id(i), first(f), last(l), dept(d), salary(s) {
//    }
//
//    // Return a printable single-line representation (same format as file).
//    string toString() const
//    {
//        return to_string(id) + " " + first + " " + last + " " + dept + " " + to_string(salary);
//    }
//};
//
//// Node in the binary search tree (non-template, simple for beginners).
//class Node
//{
//public:
//    Employee data;
//    Node* left;
//    Node* right;
//
//    Node(const Employee& e) : data(e), left(nullptr), right(nullptr) {}
//};
//
//// Binary search tree keyed by Employee.id
//class EmployeeBST
//{
//public:
//    EmployeeBST() : root(nullptr) {}
//    ~EmployeeBST() { destroy(root); }
//
//    // Insert employee. Returns true on success, false if id exists.
//    bool insert(const Employee& e)
//    {
//        if (root == nullptr)
//        {
//            root = new Node(e);
//            return true;
//        }
//
//        Node* cur = root;
//        Node* parent = nullptr;
//        while (cur != nullptr)
//        {
//            parent = cur;
//            if (e.id < cur->data.id) cur = cur->left;
//            else if (e.id > cur->data.id) cur = cur->right;
//            else return false; // duplicate id
//        }
//
//        if (e.id < parent->data.id) parent->left = new Node(e);
//        else parent->right = new Node(e);
//
//        return true;
//    }
//
//    // Search by id. Returns pointer to Employee if found, nullptr otherwise.
//    Employee* search(int id)
//    {
//        Node* cur = root;
//        while (cur != nullptr)
//        {
//            if (id < cur->data.id) cur = cur->left;
//            else if (id > cur->data.id) cur = cur->right;
//            else return &cur->data;
//        }
//        return nullptr;
//    }
//
//    // Remove employee by id. Returns true if removed, false if not found.
//    bool remove(int id)
//    {
//        bool removed = false;
//        root = removeNode(root, id, removed);
//        return removed;
//    }
//
//    // Print all employees in ascending order (by EmployeeID).
//    void printAscending()
//    {
//        inOrder(root);
//    }
//
//    // Print all employees in descending order (by EmployeeID).
//    void printDescending()
//    {
//        reverseInOrder(root);
//    }
//
//    // Save ascending list to file (overwrites).
//    void saveToFile(const string& filename)
//    {
//        ofstream ofs(filename);
//        if (!ofs) return;
//        inOrderWrite(root, ofs);
//        ofs.close();
//    }
//
//private:
//    Node* root;
//
//    // Recursive helpers (simple and clear for beginners).
//
//    void destroy(Node* n)
//    {
//        if (n == nullptr) return;
//        destroy(n->left);
//        destroy(n->right);
//        delete n;
//    }
//
//    void inOrder(Node* n)
//    {
//        if (n == nullptr) return;
//        inOrder(n->left);
//        cout << n->data.toString() << "\n";
//        inOrder(n->right);
//    }
//
//    void reverseInOrder(Node* n)
//    {
//        if (n == nullptr) return;
//        reverseInOrder(n->right);
//        cout << n->data.toString() << "\n";
//        reverseInOrder(n->left);
//    }
//
//    void inOrderWrite(Node* n, ofstream& ofs)
//    {
//        if (n == nullptr) return;
//        inOrderWrite(n->left, ofs);
//        ofs << n->data.toString() << "\n";
//        inOrderWrite(n->right, ofs);
//    }
//
//    // Remove node by id and return new subtree root. 'removed' flag indicates success.
//    Node* removeNode(Node* n, int id, bool& removed)
//    {
//        if (n == nullptr) return nullptr;
//
//        if (id < n->data.id)
//        {
//            n->left = removeNode(n->left, id, removed);
//            return n;
//        }
//        else if (id > n->data.id)
//        {
//            n->right = removeNode(n->right, id, removed);
//            return n;
//        }
//        else
//        {
//            // Found node to remove
//            // Case 1: no child
//            if (n->left == nullptr && n->right == nullptr)
//            {
//                delete n;
//                removed = true;
//                return nullptr;
//            }
//            // Case 2: one child
//            if (n->left == nullptr)
//            {
//                Node* temp = n->right;
//                delete n;
//                removed = true;
//                return temp;
//            }
//            else if (n->right == nullptr)
//            {
//                Node* temp = n->left;
//                delete n;
//                removed = true;
//                return temp;
//            }
//            // Case 3: two children - find smallest in right subtree
//            Node* succ = n->right;
//            while (succ->left != nullptr)
//            {
//                succ = succ->left;
//            }
//            // copy successor data into current node
//            n->data = succ->data;
//            // delete successor node from right subtree (use a temp flag)
//            bool tempRemoved = false;
//            n->right = removeNode(n->right, succ->data.id, tempRemoved);
//            removed = true;
//            return n;
//        }
//    }
//};
//
//// Create a sample file if it does not exist. Keeps code simple (no vectors).
//void ensureSampleFile(const string& filename)
//{
//    ifstream ifs(filename);
//    if (ifs) return; // file exists
//
//    ofstream ofs(filename);
//    if (!ofs) return;
//
//    const char* samples[] = {
//        "1234 Ali Ahmed HR 36000",
//        "1233 Ahmed Khan Sales 15000",
//        "1235 Zakiya Irfan Marketing 40000",
//        "2001 John Doe IT 45000",
//        "2002 Jane Roe Finance 47000",
//        "2003 Foo Bar RnD 52000",
//        "2004 Alice Smith Admin 30000",
//        "9999 Yourname Yourlast Dev 55000"
//    };
//    int count = sizeof(samples) / sizeof(samples[0]);
//    for (int i = 0; i < count; ++i)
//    {
//        ofs << samples[i] << "\n";
//    }
//    ofs.close();
//}
//
//// Load employees from file into BST (simple token reads).
//void loadFromFile(const string& filename, EmployeeBST& bst)
//{
//    ifstream ifs(filename);
//    if (!ifs) return;
//
//    int id;
//    string first, last, dept;
//    int salary;
//    while (ifs >> id >> first >> last >> dept >> salary)
//    {
//        Employee e(id, first, last, dept, salary);
//        bst.insert(e);
//    }
//    ifs.close();
//}
//
//int main()
//{
//    const string filename = "employees.txt";
//
//    // Load existing data from file using ifstream
//    ifstream infile(filename);
//    if (!infile)
//    {
//        cout << "File not found. Creating a new one...\n";
//        ofstream outfile(filename);
//        outfile.close();
//    }
//    infile.close();
//
//    ensureSampleFile(filename);
//
//    EmployeeBST bst;
//    loadFromFile(filename, bst);
//
//    cout << "==============================================\n";
//    cout << "         EMPLOYEE MANAGEMENT SYSTEM\n";
//    cout << "==============================================\n";
//    cout << "Employees loaded successfully from file: " << filename << "\n\n";
//
//    bool running = true;
//    while (running)
//    {
//        cout << "\n----------------------------------------------\n";
//        cout << "                 MAIN MENU\n";
//        cout << "----------------------------------------------\n";
//        cout << " [1] Add New Employee\n";
//        cout << " [2] Delete Employee (by ID)\n";
//        cout << " [3] Search Employee (by ID)\n";
//        cout << " [4] Display All Employees (Ascending)\n";
//        cout << " [5] Display All Employees (Descending)\n";
//        cout << " [6] Save & Exit\n";
//        cout << "----------------------------------------------\n";
//        cout << "Enter your choice (1-6): ";
//
//        int opt;
//        if (!(cin >> opt))
//        {
//            cout << "Invalid input. Please enter a number between 1 and 6.\n";
//            cin.clear();
//            clearInputLine();
//            continue;
//        }
//
//        if (opt == 1)
//        {
//            cout << "\nEnter Employee Details (ID First Last Department Salary):\n> ";
//            int id, salary;
//            string first, last, dept;
//            if (!(cin >> id >> first >> last >> dept >> salary))
//            {
//                cout << "Invalid input format.\n";
//                cin.clear();
//                clearInputLine();
//                continue;
//            }
//            Employee e(id, first, last, dept, salary);
//            if (bst.insert(e))
//                cout << "Employee added successfully.\n";
//            else
//                cout << "Employee ID already exists.\n";
//        }
//        else if (opt == 2)
//        {
//            cout << "\nEnter Employee ID to delete: ";
//            int id;
//            if (!(cin >> id))
//            {
//                cout << "Invalid input.\n";
//                cin.clear();
//                clearInputLine();
//                continue;
//            }
//            if (bst.remove(id))
//                cout << "Employee deleted successfully.\n";
//            else
//                cout << "Employee not found.\n";
//        }
//        else if (opt == 3)
//        {
//            cout << "\nEnter Employee ID to search: ";
//            int id;
//            if (!(cin >> id))
//            {
//                cout << "Invalid input.\n";
//                cin.clear();
//                clearInputLine();
//                continue;
//            }
//            Employee* found = bst.search(id);
//            if (found)
//                cout << "Employee Found: " << found->toString() << "\n";
//            else
//                cout << "Employee not found.\n";
//        }
//        else if (opt == 4)
//        {
//            cout << "\nEmployee List (Ascending Order):\n";
//            bst.printAscending();
//        }
//        else if (opt == 5)
//        {
//            cout << "\nEmployee List (Descending Order):\n";
//            bst.printDescending();
//        }
//        else if (opt == 6)
//        {
//            ofstream outfile(filename);
//            if (!outfile)
//            {
//                cout << "Error: could not open file for saving.\n";
//                continue;
//            }
//            bst.saveToFile(filename);
//            outfile.close();
//            cout << "Data saved to file successfully. Exiting program.\n";
//            running = false;
//        }
//        else
//        {
//            cout << "Invalid option. Please try again.\n";
//        }
//    }
//
//    return 0;
//
//
//}
