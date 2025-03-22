//#include <iostream>
//
//using namespace std;
//
//class ExpenseTracker {
//private:
//    char* personName;
//    int personID;
//    float* expenses;
//    int size;
//
//public:
//    ExpenseTracker() : personName(new char[1]), personID(0), expenses(nullptr), size(0) {
//        personName[0] = '\0';
//    }
//
//    ExpenseTracker(const char* name, int id, const float* expenses, int size)
//        : personName(new char[length(name) + 1]), personID(id), expenses(new float[size]), size(size) {
//        copyString(this->personName, name);
//        for (int i = 0; i < size; ++i) {
//            this->expenses[i] = expenses[i];
//        }
//    }
//
//    ExpenseTracker(const ExpenseTracker& other)
//        : personName(new char[length(other.personName) + 1]), personID(other.personID), expenses(new float[other.size]), size(other.size) {
//        copyString(this->personName, other.personName);
//        for (int i = 0; i < size; ++i) {
//            this->expenses[i] = other.expenses[i];
//        }
//    }
//
//    ExpenseTracker(ExpenseTracker&& other) noexcept
//        : personName(other.personName), personID(other.personID), expenses(other.expenses), size(other.size) {
//        other.personName = nullptr;
//        other.expenses = nullptr;
//        other.size = 0;
//    }
//
//    ~ExpenseTracker() {
//        delete[] personName;
//        delete[] expenses;
//    }
//
//    void display() const {
//        cout << "Name: " << personName << ", ID: " << personID << ", Expenses: ";
//        for (int i = 0; i < size; ++i) {
//            cout << expenses[i] << " ";
//        }
//        cout << endl;
//    }
//
//    const char* getPersonName() const { return personName; }
//    void setPersonName(const char* name) {
//        delete[] this->personName;
//        this->personName = new char[length(name) + 1];
//        copyString(this->personName, name);
//    }
//
//    int getPersonID() const { return personID; }
//    void setPersonID(int id) { this->personID = id; }
//
//    float operator+(const ExpenseTracker& other) const {
//        float total = 0;
//        for (int i = 0; i < size; ++i) {
//            total += expenses[i];
//        }
//        for (int i = 0; i < other.size; ++i) {
//            total += other.expenses[i];
//        }
//        return total;
//    }
//
//    int length(const char* str) const {
//        int len = 0;
//        while (str[len] != '\0') {
//            ++len;
//        }
//        return len;
//    }
//
//    void copyString(char* dest, const char* src) const {
//        int i = 0;
//        while (src[i] != '\0') {
//            dest[i] = src[i];
//            ++i;
//        }
//        dest[i] = '\0';
//    }
//};
//
//int main() {
//    float expenses1[] = { 100.5, 200.75, 150.25 };
//    float expenses2[] = { 80, 120.5, 90.25 };
//
//    ExpenseTracker person1("Alice", 101, expenses1, 3);
//    ExpenseTracker person2("Bob", 102, expenses2, 3);
//
//    cout << "Expense Details for Person 1:" << endl;
//    person1.display();
//    cout << endl;
//
//    cout << "Expense Details for Person 2:" << endl;
//    person2.display();
//    cout << endl;
//
//    ExpenseTracker person3 = person1;
//
//    cout << "Expense Details for Person 3 (Copy of Person 1):" << endl;
//    person3.display();
//    cout << endl;
//
//    float totalCombinedExpense = person1 + person2;
//    cout << "Total Combined Expense of Person 1 and Person 2: " << totalCombinedExpense << endl;
//
//    return 0;
//}
