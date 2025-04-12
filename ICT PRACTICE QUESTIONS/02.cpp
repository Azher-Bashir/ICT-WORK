//#include <iostream>
//using namespace std;
//
//class azher;
//
//class abdullah
//{
//private:
//int date;
//int age;
//public:friend class azher;
//abdullah(); // Default constructor declaration
//abdullah(int, int);
//virtual void print();
//void set(int, int);
//
//};
//abdullah::abdullah() : date(0), age(0) {} // Default constructor definition
//
//abdullah::abdullah(int x, int y)
//{
//date = x;
//age = y;
//}
//
//void abdullah::print()
//{
//cout << "date = " << date << endl;
//cout << "age = " << age << endl;
//}
//void abdullah::set(int x, int y)
//{
//date = x;
//age = y;
//}
//class azher
//{
//private:
////friend class abdullah;
//int date;
//int age;
//public:
//abdullah abd; // Use of default constructor
//azher();
//azher(int, int);
//void print();
//void set(int, int);
//};
//azher::azher() : abd() // Default constructor definition
//{
//	date = 0;
//	age = 0;
//}
//azher::azher(int x, int y)
//{
//	//abd(x, y); // Initialize abd with x and y
////date = x;
////age = y;
//}
//void azher::print()
//{
//abd.print();
//cout << "date = " << date << endl;
//cout << "age = " << age << endl;
//}
//void azher::set(int x, int y)
//{
//abd.set(x, y);
//date = x;
//age = y;
//}
//
//int main()
//{
//	azher name;
//	abdullah name1(1, 2);
//	name.print();
//}