////Write a C++ program to represent the relationship between developers and the projects they
////work on.A developer can contribute to multiple projects, and a project can have multiple
////developers assigned to it.However, a project should not be responsible for creating or
////managing the lifetime of the developer, it should only reference the developers who already
////exist.Create a developer class with private data members name, role(frontend / backend) and
////skilllevel(on a scale of 1 to 10).Create a Project class that represents a software project with
////private data members projectName, timeline and a fixed size array of pointers to Developer
////objects and a developerCount to track how many developers have been added to the project.
////Encapsulate all data using getter / setter methods.Implement the following public member
////functions :
////• A method addDeveloper(Developer * dev) that adds a developer to the project by
////storing a pointer to the developer.Ensure the number of developers does not exceed
////the array limit.
////• Method displayProjectDetails() that prints the project name and timeline.
////• Method displayDeveloperInfo() that prints the developer's full details in a readable
////format.
////
////In the main method, create at least three Developer objects and two Project objects.Use the
////addDeveloper() method to assign developers to one or more projects.A developer can work on
////multiple projects.
////Sample Output :
////Project: AI Chatbot
////Timeline : 4 months
////Developers Assigned :
////Name: Alice
////Role : Frontend
////SkillLevel : 7
////Name : Bob
////Role : Backend
////SkillLevel : 8
////----------------------------------
////Project : E - Commerce Platform
////Timeline : 6 months
////Developers Assigned :
////Name: Bob
////Role : Backend
////SkillLevel : 8
////Name : Charlie
////Role : Frontend
////SkillLevel : 6
////----------------------------------
////Note : Use appropriate access specifiers and encapsulation principles & don't use vectors
//#include <iostream>
//#include <string>
//using namespace std;
//class Developer {
//private:
//	string name;
//	string role; // Frontend or Backend
//	int skillLevel; // Skill level on a scale of 1 to 10
//public:
//	// Constructor to initialize Developer properties
//	Developer(string n, string r, int s) : name(n), role(r), skillLevel(s) {}
//	// Getter methods
//	string getName() const {
//		return name;
//	}
//	string getRole() const {
//		return role;
//	}
//	int getSkillLevel() const {
//		return skillLevel;
//	}
//};
//class Project {
//private:
//	string projectName;
//	string timeline;
//	Developer* developers[10]; // Array of pointers to Developer objects
//	int developerCount; // Number of developers added to the project
//public:
//	// Constructor to initialize Project properties
//	Project(string name, string time) : projectName(name), timeline(time), developerCount(0) {}
//	// Method to add a developer to the project
//	void addDeveloper(Developer* dev) {
//		if (developerCount < 10) {
//			developers[developerCount++] = dev;
//		}
//		else {
//			cout << "Cannot add more developers. Maximum capacity reached." << endl;
//		}
//	}
//	// Method to display project details
//	void displayProjectDetails() const {
//		cout << "Project: " << projectName << endl;
//		cout << "Timeline: " << timeline << endl;
//		cout << "Developers Assigned:" << endl;
//		for (int i = 0; i < developerCount; ++i) {
//			cout << "Name: " << developers[i]->getName() << endl;
//			cout << "Role: " << developers[i]->getRole() << endl;
//			cout << "Skill Level: " << developers[i]->getSkillLevel() << endl;
//			cout << "----------------------------------" << endl;
//		}
//	}
//};
//int main() {
//	// Create Developer objects
//	Developer dev1("Alice", "Frontend", 7);
//	Developer dev2("Bob", "Backend", 8);
//	Developer dev3("Charlie", "Frontend", 6);
//
//	// Create Project objects
//	Project project1("AI Chatbot", "4 months");
//	Project project2("E-Commerce Platform", "6 months");
//
//	// Assign developers to projects
//	project1.addDeveloper(&dev1);
//	project1.addDeveloper(&dev2);
//
//	project2.addDeveloper(&dev2);
//	project2.addDeveloper(&dev3);
//
//	// Display project details
//	project1.displayProjectDetails();
//	project2.displayProjectDetails();
//
//	return 0;
//}