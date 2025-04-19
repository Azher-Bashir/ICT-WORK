////Write a C++ program to model a University and its Departments.Each University has a name and
////location.Each University has one main Department which has its own name, number of
////students, and a head of department(HOD) name.The University class should contain a
////department object as a data member.All data members in both classes should be private.Use
////getter and setter methods for controlled access to data.Provide a method in University class
////called configureDepartment(string deptName, int studentCount, string hod) to set the
////department details using the department’s setter methods.Add a method
////incrementStudentCount(int n) in the Department class and use it from the University class to
////simulate student admissions.Provide method in the university class to display all the
////information.
////Sample Output :
////University Name : National University of Computer and Emerging Sciences
////Location : Pakistan
////Department Name : Computer Science
////Number of Students : 1200
////Head of Department : Dr.Kashif Zafar
////Updating HOD...
////University Name : National University of Computer and Emerging Sciences
////Location : Pakistan
////Department Name : Computer Science
////Number of Students : 1200
////Head of Department : Dr.Aamir Wali
////Note : Use appropriate access specifiers and encapsulation principles.
//#include <iostream>
//using namespace std;
//
//class Department {
//private:
//    string deptName;
//    int studentCount;
//    string hod;
//public:
//    // Constructor to initialize Department properties
//    Department() : deptName(""), studentCount(0), hod("") {}
//    // Setter methods
//    void setDeptName(string name) {
//        deptName = name;
//    }
//    void setStudentCount(int count) {
//        studentCount = count;
//    }
//    void setHod(string head) {
//        hod = head;
//    }
//    // Getter methods
//    string getDeptName() const {
//        return deptName;
//    }
//    int getStudentCount() const {
//        return studentCount;
//    }
//    string getHod() const {
//        return hod;
//    }
//    // Method to increment student count
//    void incrementStudentCount(int n) {
//        studentCount += n;
//    }
//};
//
//class University {
//private:
//    string name;
//    string location;
//    Department department; // Composition: University has a Department
//public:
//    // Constructor to initialize University properties
//    University(string uniName, string uniLocation) : name(uniName), location(uniLocation) {}
//
//    // Setter methods
//    void setName(string uniName) {
//        name = uniName;
//    }
//    void setLocation(string uniLocation) {
//        location = uniLocation;
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
//    // Method to configure Department
//    void configureDepartment(string deptName, int studentCount, string hod) {
//        department.setDeptName(deptName);
//        department.setStudentCount(studentCount);
//        department.setHod(hod);
//    }
//
//    // Method to simulate student admissions
//    void incrementStudentCount(int n) {
//        department.incrementStudentCount(n);
//    }
//
//    // Method to display all information
//    void displayDetails() const {
//        cout << "University Name: " << name << endl;
//        cout << "Location: " << location << endl;
//        cout << "Department Name: " << department.getDeptName() << endl;
//        cout << "Number of Students: " << department.getStudentCount() << endl;
//        cout << "Head of Department: " << department.getHod() << endl;
//    }
//};
//
//int main() {
//    // Create a University object
//    University uni("National University of Computer and Emerging Sciences", "Pakistan");
//
//    // Configure the Department
//    uni.configureDepartment("Computer Science", 1200, "Dr. Kashif Zafar");
//
//    // Display initial details
//    uni.displayDetails();
//
//    // Update HOD
//    cout << "Updating HOD..." << endl;
//    uni.configureDepartment("Computer Science", 1200, "Dr. Aamir Wali");
//
//    // Display updated details
//    uni.displayDetails();
//
//    return 0;
//}
