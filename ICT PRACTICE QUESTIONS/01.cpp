//#include <iostream>
//
//using namespace std;
//class name
//{
//private:
//	int a;
//	int b;
//public:
//	name(int, int);
//	virtual void print();
//	void set(int, int);
//
//};
//name::name(int x, int y)
//{
//	a = x;
//	b = y;
//}
//void name::print()
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//void name::set(int x, int y)
//{
//	a = x;
//	b = y;
//}
//
//// DERIVED CLASS
//class name2 : public name
//{
//private:
//	int c;
//	int d;
//public:
//	name2(int, int, int, int);
//	void print();
//	void set(int, int, int, int);
//}; 
//
//name2::name2(int x, int y, int z, int w) : name(x, y)
//{
//	c = z;
//	d = w;
//}
//void name2::print()
//{
//	name::print();
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//}
//void name2::set(int x, int y, int z, int w)
//{
//	name::set(x, y);
//	c = z;
//	d = w;
//}
//class name3 : public name2
//{
//private:
//	int e;
//	int f;
//public:
//	name3(int, int, int, int, int, int);
//	void print();
//	void set(int, int, int, int, int, int);
//};
//name3::name3(int x, int y, int z, int w, int u, int v) : name2(x, y, z, w)
//{
//	e = u;
//	f = v;
//}
//void name3::print()
//{
//	name2::print();
//	cout << "e = " << e << endl;
//	cout << "f = " << f << endl;
//}
//void name3::set(int x, int y, int z, int w, int u, int v)
//{
//	name2::set(x, y, z, w);
//	e = u;
//	f = v;
//}
//
//
//
//
//int main()
//{
//	name* ptr;
//	name wajeehg(1, 2);
//	wajeehg.print();
//	cout << endl;
//	name3 obj(1, 2, 3, 4, 5, 6);
//	name2 obj1(7, 8, 9, 10);
//	ptr = &obj;
//	ptr->print();
//	cout << endl;
//	//ptr = &obj1;
//	//ptr->print();
//	//ptr= new name3();
//	//ptr->set(10, 20, 30, 40, 50, 60);
//	
//	
//	
//	
//	
//	
//	
//	
//	return 0;
//}