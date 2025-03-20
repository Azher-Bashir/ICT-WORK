////An A logistics tracking system needs to manage and compare distances between multiple
////locations.Each distance is stored in feet and inches, but the system should internally handle
////inch - to - feet conversion when inches exceed 12. The application also allows :
////• Addition of distances between locations.
////• Comparison of distances to determine which is longer or if they are equal.
////• Copying of distance objects from one record to another.
////• Proper memory cleanup to avoid memory leaks.
////Implement a Distance class with private dynamically allocated members : feet and inches.
////Provide a default constructor and a parameterized constructor, a copy constructor using deep
////copy and a destructor to release memory.
////Overload the operators :
////• + to add two distances(handle inch - to - feet conversion internally).
////• == to check equality between two distances.
////• < to compare two distances.
////
////	Demonstrate the functionality in main() by creating and copying distances, performing
////	additions, and comparing them.
////	Sample Output :
////Distance 1 : 5 feet 10 inches
////Distance 2 : 3 feet 11 inches
////After Addition(d1 + d2) : 9 feet 9 inches
////Are d1 and d2 equal ? No
////Is d1 less than d2 ? No
////Copied Distance(d4 from d1) : 5 feet 10 inches
//
//#include <iostream>
//using namespace std;
//
//class Distance
//{
//private:
//	int* feet;
//	int* inches;
//public:
//	Distance(int = 0, int = 0);
//	Distance(const Distance&);
//	~Distance();
//	Distance operator+(Distance);
//	bool operator==(Distance);
//	bool operator<(Distance);
//	void display();
//};
//
//Distance::Distance(int f, int i)
//{
//	feet = new int(f);
//	inches = new int(i);
//}
//
//Distance::Distance(const Distance& d)
//{
//	feet = new int(*d.feet);
//	inches = new int(*d.inches);
//}
//
//Distance::~Distance()
//{
//	delete feet;
//	delete inches;
//}
//
//Distance Distance::operator+(Distance d)
//{
//	Distance temp;
//	temp.feet = new int(*feet + *d.feet + (*inches + *d.inches) / 12);
//	temp.inches = new int((*inches + *d.inches) % 12);
//	return temp;
//}
//
//bool Distance::operator==(Distance d)
//{
//	return (*feet == *d.feet && *inches == *d.inches);
//}
//
//bool Distance::operator<(Distance d)
//{
//	return (*feet < *d.feet || (*feet == *d.feet && *inches < *d.inches));
//}
//
//void Distance::display()
//{
//	cout << *feet << " feet " << *inches << " inches" << endl;
//}
//
//int main()
//{
//	Distance d1(5, 10), d2(3, 11), d3, d4(d1);
//	cout << "Distance 1 : ";
//	d1.display();
//	cout << "Distance 2 : ";
//	d2.display();
//	d3 = d1 + d2;
//	cout << "After Addition(d1 + d2) : ";
//	d3.display();
//	cout << "Are d1 and d2 equal ? ";
//	if (d1 == d2)
//		cout << "Yes" << endl;
//	else
//		cout << "No" << endl;
//	cout << "Is d1 less than d2 ? ";
//	if (d1 < d2)
//		cout << "Yes" << endl;
//	else
//		cout << "No" << endl;
//	cout << "Copied Distance(d4 from d1) : ";
//	d4.display();
//	return 0;
//}