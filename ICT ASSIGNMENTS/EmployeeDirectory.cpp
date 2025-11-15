//#include "EmployeeDirectory.h"
//
//// ------------------- Employee Implementation -------------------
//Employee::Employee() : Id(0), Salary(0.0) {}
//Employee::Employee(int id, string fn, string ln, string dept, double sal)
//    : Id(id), First_name(fn), Last_name(ln), Department(dept), Salary(sal) {
//}
//int Employee::getId() const { return Id; }
//string Employee::getFirstName() const { return First_name; }
//string Employee::getLastName() const { return Last_name; }
//string Employee::getDepartment() const { return Department; }
//double Employee::getSalary() const { return Salary; }
//void Employee::printInfo() const {
//    cout << "ID: " << Id << ", Name: " << First_name << " " << Last_name
//        << ", Dept: " << Department << ", Salary: " << Salary << endl;
//}
//
//// ------------------- BNode Implementation -------------------
//template <typename T>
//BNode<T>::BNode(T* val) : data(val), left(nullptr), right(nullptr) {}
//
//// ------------------- BTree Implementation -------------------
//template <typename T>
//BTree<T>::BTree() : root(nullptr) {}
//
//template <typename T>
//bool BTree<T>::insert(T* val) {
//    BNode<T>* newNode = new BNode<T>(val);
//    if (root == nullptr) {
//        root = newNode;
//        return true;
//    }
//
//    BNode<T>* curr = root;
//    while (curr != nullptr) {
//        if (val->getId() < curr->data->getId()) {
//            if (!curr->left) {
//                curr->left = newNode;
//                return true;
//            }
//            curr = curr->left;
//        }
//        else if (val->getId() > curr->data->getId()) {
//            if (!curr->right) {
//                curr->right = newNode;
//                return true;
//            }
//            curr = curr->right;
//        }
//        else {
//            delete newNode;
//            return false;
//        }
//    }
//}
//
//template <typename T>
//T* BTree<T>::search(int id) {
//    BNode<T>* curr = root;
//    while (curr) {
//        if (id == curr->data->getId()) return curr->data;
//        curr = (id < curr->data->getId()) ? curr->left : curr->right;
//    }
//    return nullptr;
//}
//
//template <typename T>
//void BTree<T>::displayAscending() {
//    stack<BNode<T>*> s;
//    BNode<T>* curr = root;
//    while (curr || !s.empty()) {
//        while (curr) {
//            s.push(curr);
//            curr = curr->left;
//        }
//        curr = s.top(); s.pop();
//        curr->data->printInfo();
//        curr = curr->right;
//    }
//}
//
//template <typename T>
//void BTree<T>::displayDescending() {
//    stack<BNode<T>*> s;
//    BNode<T>* curr = root;
//    while (curr || !s.empty()) {
//        while (curr) {
//            s.push(curr);
//            curr = curr->right;
//        }
//        curr = s.top(); s.pop();
//        curr->data->printInfo();
//        curr = curr->left;
//    }
//}
//
//template <typename T>
//bool BTree<T>::deleteNode(int id) {
//    BNode<T>* curr = root;
//    BNode<T>* parent = nullptr;
//
//    while (curr && curr->data->getId() != id) {
//        parent = curr;
//        curr = (id < curr->data->getId()) ? curr->left : curr->right;
//    }
//
//    if (!curr) return false;
//
//    if (!curr->left || !curr->right) {
//        BNode<T>* child = curr->left ? curr->left : curr->right;
//        if (!parent) root = child;
//        else if (parent->left == curr) parent->left = child;
//        else parent->right = child;
//        delete curr;
//    }
//    else {
//        BNode<T>* succParent = curr;
//        BNode<T>* succ = curr->right;
//        while (succ->left) {
//            succParent = succ;
//            succ = succ->left;
//        }
//        curr->data = succ->data;
//        if (succParent->left == succ) succParent->left = succ->right;
//        else succParent->right = succ->right;
//        delete succ;
//    }
//    return true;
//}
//
//// ------------------- File Handling -------------------
//void loadFile(const string& fname, BTree<Employee>& tree) {
//    ifstream file(fname);
//    int id;
//    string fn, ln, dept;
//    double sal;
//    while (file >> id >> fn >> ln >> dept >> sal) {
//        Employee* emp = new Employee(id, fn, ln, dept, sal);
//        tree.insert(emp);
//    }
//    file.close();
//}
//
//void appendFile(const string& fname, Employee* emp) {
//    ofstream file(fname, ios::app);
//    file << emp->getId() << " " << emp->getFirstName() << " " << emp->getLastName()
//        << " " << emp->getDepartment() << " " << emp->getSalary() << endl;
//    file.close();
//}
//
//// Explicit template instantiation
//template class BNode<Employee>;
//template class BTree<Employee>;
