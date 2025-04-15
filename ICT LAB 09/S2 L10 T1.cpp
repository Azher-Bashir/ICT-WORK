////#include <iostream>
////using namespace std;
////
////class employe {
////protected:
////    int id_employee;
////    float basicSalary;
////
////public:
////    employe(int id, float salary) {
////        id_employee = id;
////        basicSalary = salary;
////    }
////
////    virtual float calculateSalary() {
////        return basicSalary;
////    }
////};
////
////
////class commissionedemployee : public employe {
////    float salesAmount;
////    float rate;
////    
////public:
////    commissionedemployee(int id, float salary, float sales, float r)
////        : employe(id, salary), salesAmount(sales), rate(r) {
////    }
////
////    float calculateSalary() {
////        return (salesAmount * rate / 100.0) + basicSalary;
////    }
////};
////
////class hourlyemployee : public employe {
////    float extrahours;
////    float hourpay;
////    
////public:
////    hourlyemployee(int id, float salary, float hours, float pay)
////        : employe(id, salary), extrahours(hours), hourpay(pay) {
////    }
////
////    float calculatesalary() {
////        return basicSalary + extrahours * hourpay;
////    }
////};
////
////
////class regularemployee : public employe {
////    float bonus;
////
////public:
////    regularemployee(int id, float salary, float b)
////        : employe(id, salary), bonus(b) {
////    }
////
////    float calculateSalary() {
////        return basicSalary + bonus;
////    }
////};
////
////int main() {
////    commissionedemployee E1(25, 5000, 1000, 10);
////    
////    commissionedemployee* ptr;
////    ptr = &E1;
////    cout << "Commissioned Employee salary : " << ptr->calculateSalary() << endl;
////
////    employe* eptr;
////    eptr = &E1;
////    cout << "Commissioned Employee salary : " << eptr->calculateSalary() << endl;
////
////    commissionedemployee E2(25, 5000, 1000, 10);
////    commissionedemployee E3(26, 5000, 2000, 10);
////    hourlyemployee H1(27, 5000, 10, 100);
////    hourlyemployee H2(28, 5000, 5, 100);
////    regularemployee R1(29, 5000, 1000);
////    regularemployee R2(30, 5000, 2000);
////
////    employe* list[6];
////    list[0] = &E2;
////    list[1] = &E3;
////    list[2] = &H1;
////    list[3] = &H2;
////    list[4] = &R1;
////    list[5] = &R2;
////
////    for (int i = 0; i < 6; i++) {
////        cout << "Employee " << i << " salary is: " << list[i]->calculateSalary() << endl;
////    }
////
////    return 0;
////}
//
//
//
//#include <iostream>
//using namespace std;
//
//class Employee {
//protected:
//    int empID;
//public:
//    float baseSalary;
//
//    Employee(int e, float b) : empID(e), baseSalary(b) {}
//
//    virtual float calculateSalary() {
//        float total = baseSalary;
//        return total;
//    }
//};
//
//class CommisionedEmployee : public Employee {
//private:
//    float salesAmt;
//    float percentage;
//public:
//    CommisionedEmployee(int e, float b, float s, float p)
//        : Employee(e, b), salesAmt(s), percentage(p) {
//    }
//
//    float calculateSalary() override {
//        float total = baseSalary + (salesAmt * (percentage / 100));
//        return total;
//    }
//};
//
//class HourlyEmployee : public Employee {
//private:
//    int extraHours;
//    float ratePerHour;
//public:
//    HourlyEmployee(int e, float b, int h, float r)
//        : Employee(e, b), extraHours(h), ratePerHour(r) {
//    }
//
//    float calculateSalary() override {
//        float total = baseSalary + (extraHours * ratePerHour);
//        return total;
//    }
//};
//
//class RegularEmployee : public Employee {
//private:
//    float bonus;
//public:
//    RegularEmployee(int e, float b, float bn)
//        : Employee(e, b), bonus(bn) {
//    }
//
//    float calculateSalary() override {
//        float total = baseSalary + bonus;
//        return total;
//    }
//};
//
//int main() {
//    // Single commissioned employee example
//    CommisionedEmployee E1(25, 5000, 1000, 10);
//
//    // Derived-class pointer referencing E1
//    CommisionedEmployee* cptr = &E1;
//    cout << "Commissioned Employee salary (Derived ptr): "
//        << cptr->calculateSalary() << endl;
//
//    // Base-class pointer referencing E1
//    Employee* basePtr = &E1;
//    cout << "Commissioned Employee salary (Base ptr): "
//        << basePtr->calculateSalary() << endl;
//
//    // Additional employees
//    CommisionedEmployee E2(25, 5000, 1000, 10);
//    CommisionedEmployee E3(26, 5000, 2000, 10);
//    HourlyEmployee H1(27, 5000, 10, 100);
//    HourlyEmployee H2(28, 5000, 5, 100);
//    RegularEmployee R1(29, 5000, 1000);
//    RegularEmployee R2(30, 5000, 2000);
//
//    // Create array of base pointers
//    Employee* arr[6] = { &E2, &E3, &H1, &H2, &R1, &R2 };
//
//    // Display salaries for all employees
//    for (int i = 0; i < 6; i++) {
//        cout << "Employee " << (i + 1) << " salary is: "
//            << arr[i]->calculateSalary() << endl;
//    }
//
//    return 0;
//}
