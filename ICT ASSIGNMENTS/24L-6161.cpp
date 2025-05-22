//You are required to implement a University Faculty Management System to maintain information of Faculty of the university.This system assigns courses to different faculty members according to the rulesdefined.
//
//Each Faculty member has a unique Faculty ID, name, and Email Address.For each Faculty Member, the system needs to store information of Last Degree acquired by them.The details of the degree include University Name, Program studied(“Undergraduate, ” “Graduate, ” or “Post Graduate”), and Area of Studies(“Electrical Engineering”, “Management”,
//	“Computer Engineering”, etc.).Faculty members are further categorized as Lecturers and Professors.For each Professor, the system stores title of his / her Research Work and Area of Research.For a lecturer no extra information
//	is required.
//
//	The System also maintains the information of Courses taught by the Faculty Members.Each Faculty member(whether Lecturer or Professor) can teach maximum three courses.The details of a Course include Course ID, Course name, and Course Type(e.g., “Undergraduate course”, “graduate Course”, “post graduate course”).Type can be taken as integer
//	variable : 1 for Undergraduate, 2 for graduate and 3 for post graduate.
//
//
//	Rules for assigning a course to a lecturer
//	·
//	A Lecturer can only teach Undergraduate courses.
//
//
//	Rules for assigning a course to a Professor
//	·
//	A professor can teach all type of courses·
//	A professor can be assigned undergraduate or graduate course of any subject.A postgraduate course is assigned to a
//	Professor only if the professor has done some research work on the subject of that course.Research area should match the course name.
//
//
//	void main()
//{
//	Lecturer L1(1003, “Faisal_Masood”,
//		“faisal.masood@nu.edu.pk”, “FAST - NU”, “Graduate”, Electrical_Engineering”);
//	//id, name,email,university, program studied, area of studies) 
//
//
//	Professor P1(1004, “Muhammad_Ahmed”,
//		“muhammad.ahmed@nu.edu.pk”, “LUMS”, “Post - Graduate”, Computer_Engineering”,
//		“Random_Processes”, “Probability”); //id, name,email,university, program
//	studied, area of studies, research work title, research area
//
//
//		Course C1(10, “object_oriented_programming”, 1);
//	//course id, name, course type
//	Course C2(11, “calculus - I”, 2); //course id, name,course type
//	Course C3(12, “Linear_Algebra”, 3); //course id, name , course type
//	Course C4(13, “Probability”, 3);// course id, name ,course type
//
//	L1.AssignCourse(C1); //Course is assigned successfully
//
//	L1.AssignCourse(C2); //Course cannot be assigned as course in not undergraduate course
//
//	P1.AssignCourse(C2); //Course assigned successfully
//
//	P1.AssignCourse(C3); //Course cannot be assigned as research area does not match
//
//	P1.AssignCourse(C4); //Course assigned successfully
//
//}
//
//(a)Give the declaration(interface) in C++ of all
//the required classes to implement the above system.Friend classes / functions
//are not allowed.Define setter / getter wherever required.[20 Marks]
//
//(b)Implement all constructors with default
//parameters(see main function)[20 Marks]
//
//(c)Implement AssignCourse function for Lecturer
//Class.This should be a void function and display appropriate messages e.g.,
//“course assigned successfully” OR “Course cannot be assigned”.Also provide the
//implementation of any functions required in other classes to implement this
//function.[10 Marks]
//
//(d)Implement AssignCourse function for Professor
//Class.This should be a void function and display appropriate messages e.g.,
//“course assigned successfully” OR “Course cannot be assigned”.Also provide the
//implementation of any functions required in other classes to implement this
//function.[10 MarkS]
// write the code in c++ with out using vectors only using classes

#include <iostream>
#include <string>
using namespace std;

class LastDegree {
    string universityName;
    string programStudied;
    string areaOfStudies;
public:
    LastDegree(string uni = "", string prog = "", string area = "")
        : universityName(uni), programStudied(prog), areaOfStudies(area) {
    }
    string getUniversityName() const { return universityName; }
    string getProgramStudied() const { return programStudied; }
    string getAreaOfStudies() const { return areaOfStudies; }
    void setUniversityName(const string& uni) { universityName = uni; }
    void setProgramStudied(const string& prog) { programStudied = prog; }
    void setAreaOfStudies(const string& area) { areaOfStudies = area; }
};

class Course {
    int courseID;
    string courseName;
    int courseType; // 1: Undergraduate, 2: Graduate, 3: Post Graduate
public:
    Course(int id = 0, string name = "", int type = 1)
        : courseID(id), courseName(name), courseType(type) {
    }
    int getCourseID() const { return courseID; }
    string getCourseName() const { return courseName; }
    int getCourseType() const { return courseType; }
    void setCourseID(int id) { courseID = id; }
    void setCourseName(const string& name) { courseName = name; }
    void setCourseType(int type) { courseType = type; }
};

class Faculty {
protected:
    int facultyID;
    string name;
    string email;
    LastDegree lastDegree;
    Course* assignedCourses[3];
    int courseCount;
public:
    Faculty(int id = 0, string n = "", string e = "", string uni = "", string prog = "", string area = "")
        : facultyID(id), name(n), email(e), lastDegree(uni, prog, area), courseCount(0) {
        for (int i = 0; i < 3; ++i) assignedCourses[i] = nullptr;
    }
    virtual ~Faculty() {}
    int getFacultyID() const { return facultyID; }
    string getName() const { return name; }
    string getEmail() const { return email; }
    LastDegree getLastDegree() const { return lastDegree; }
    int getAssignedCourseCount() const { return courseCount; }
    Course* getAssignedCourse(int idx) const {
        if (idx >= 0 && idx < courseCount) return assignedCourses[idx];
        return nullptr;
    }
    // Base AssignCourse for use in derived classes
    void baseAssignCourse(Course* course) {
        if (courseCount < 3) {
            assignedCourses[courseCount++] = course;
            cout << "Course assigned successfully" << endl;
        }
        else {
            cout << "Cannot assign more than 3 courses" << endl;
        }
    }
};

class Lecturer : public Faculty {
public:
    Lecturer(int id = 0, string n = "", string e = "", string uni = "", string prog = "", string area = "")
        : Faculty(id, n, e, uni, prog, area) {
    }
    void AssignCourse(Course& course) {
        if (course.getCourseType() == 1) {
            baseAssignCourse(&course);
        }
        else {
            cout << "Course cannot be assigned as course is not undergraduate course" << endl;
        }
    }
};

class Professor : public Faculty {
    string researchWorkTitle;
    string researchArea;
public:
    Professor(int id = 0, string n = "", string e = "", string uni = "", string prog = "", string area = "",
        string title = "", string areaRes = "")
        : Faculty(id, n, e, uni, prog, area), researchWorkTitle(title), researchArea(areaRes) {
    }
    void AssignCourse(Course& course) {
        if (course.getCourseType() == 1 || course.getCourseType() == 2) {
            baseAssignCourse(&course);
        }
        else if (course.getCourseType() == 3 && course.getCourseName() == researchArea) {
            baseAssignCourse(&course);
        }
        else {
            cout << "Course cannot be assigned as research area does not match" << endl;
        }
    }
};

int main() {
    Lecturer L1(1003, "Faisal_Masood", "faisal.masood@nu.edu.pk", "FAST-NU", "Graduate", "Electrical_Engineering");
    Professor P1(1004, "Muhammad_Ahmed", "muhammad.ahmed@nu.edu.pk", "LUMS", "Post-Graduate", "Computer_Engineering", "Random_Processes", "Probability");

    Course C1(10, "object_oriented_programming", 1);
    Course C2(11, "calculus - I", 2);
    Course C3(12, "Linear_Algebra", 3);
    Course C4(13, "Probability", 3);

    L1.AssignCourse(C1); //Course is assigned successfully
    L1.AssignCourse(C2); //Course cannot be assigned as course is not undergraduate course

    P1.AssignCourse(C2); //Course assigned successfully
    P1.AssignCourse(C3); //Course cannot be assigned as research area does not match
    P1.AssignCourse(C4); //Course assigned successfully

    return 0;
}
