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
    int courseType;
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
