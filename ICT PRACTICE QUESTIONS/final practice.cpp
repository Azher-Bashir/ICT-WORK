////#include <iostream>
////using namespace std;
////int main()
////{
////
////	//int* x = nullptr, *y = nullptr;
////	//
////	//x = new int;
////	//y = new int;
////	//
////	//*x = 10;
////	////x = 20;   not possible
////	//
////	//*y = 20;
////	//
////	//delete y;
////	//y = nullptr;
////	//
////	//y = x; // Memory leak
////	//
////	//int* p;
////	//*p = 20;
////	//int* ptr;
////	int size;
////	cout << "Enter the size: ";
////	cin >> size;
////	int* x = new int[size];
////	cout << sizeof(x);
////	//ptr = &x[1];
////
////
////
////}
//
//
//
////#include <iostream>
////
////using namespace std;
//
////int main()
////
////{
////
////	int x[4] = { 1,2,3,4 };
////
////	int* p = x, y, z;
////
////	y = *++p;
////
////	z = *p++;
////
////	cout << "\n y=" << y;
////
////	cout << "\n z=" << z;
////
////	cout << "\n*p=" << *p;
////
////	return 0;
////
////}
//
//// OperatorOverloadingExample.cpp
//#include <iostream>
//using namespace std;
//
//class Number {
//private:
//    int value;
//
//public:
//    Number(int v = 0) : value(v) {}
//
//    // Arithmetic Operators
//    Number operator+(const Number& n) const { return Number(value + n.value); }
//    Number operator-(const Number& n) const { return Number(value - n.value); }
//    Number operator*(const Number& n) const { return Number(value * n.value); }
//    Number operator/(const Number& n) const { return Number(value / n.value); }
//    Number operator%(const Number& n) const { return Number(value % n.value); }
//
//    // Unary Operators
//    Number operator-() const { return Number(-value); }
//    Number operator++() { value++; return *this; } // pre-increment
//    Number operator++(int) { Number temp = *this; value++; return temp; } // post-increment
//    Number operator--() { value--; return *this; } // pre-decrement
//    Number operator--(int) { Number temp = *this; value--; return temp; } // post-decrement
//
//    // Relational Operators
//    bool operator==(const Number& n) const { return value == n.value; }
//    bool operator!=(const Number& n) const { return value != n.value; }
//    bool operator<(const Number& n) const { return value < n.value; }
//    bool operator>(const Number& n) const { return value > n.value; }
//    bool operator<=(const Number& n) const { return value <= n.value; }
//    bool operator>=(const Number& n) const { return value >= n.value; }
//
//    // Assignment Operators
//    Number& operator=(const Number& n) { value = n.value; return *this; }
//    Number& operator+=(const Number& n) { value += n.value; return *this; }
//    Number& operator-=(const Number& n) { value -= n.value; return *this; }
//    Number& operator*=(const Number& n) { value *= n.value; return *this; }
//    Number& operator/=(const Number& n) { value /= n.value; return *this; }
//
//    // Logical Operators
//    bool operator!() const { return !value; }
//
//    // Subscript Operator
//    int operator[](int index) const { return (index == 0) ? value : -1; } // simple dummy example
//
//    // Function Call Operator
//    void operator()() const { cout << "Called as function: " << value << endl; }
//
//    // Stream Insertion/Extraction (friend functions)
//    friend ostream& operator<<(ostream& os, const Number& n) {
//        os << n.value;
//        return os;
//    }
//
//    friend istream& operator>>(istream& is, Number& n) {
//        is >> n.value;
//        return is;
//    }
//};
//
//int main() {
//    Number a(10), b(5), c;
//    c = a + b; cout << "a + b = " << c << endl;
//    c = a - b; cout << "a - b = " << c << endl;
//    c = a * b; cout << "a * b = " << c << endl;
//    c = a / b; cout << "a / b = " << c << endl;
//    c = a % b; cout << "a % b = " << c << endl;
//
//    cout << "-a = " << -a << endl;
//    cout << "++a = " << ++a << endl;
//    cout << "a++ = " << a++ << ", now a = " << a << endl;
//
//    cout << boolalpha;
//    cout << "a == b: " << (a == b) << endl;
//    cout << "a != b: " << (a != b) << endl;
//    cout << "a > b: " << (a > b) << endl;
//
//    a += b; cout << "a += b: " << a << endl;
//
//    cout << "!a = " << !a << endl;
//    cout << "a[0] = " << a[0] << endl;
//    a();
//
//    cout << "Enter a number: ";
//    cin >> a;
//    cout << "You entered: " << a << endl;
//
//    return 0;
//}
//
//
//
//



//#include <iostream>
//using namespace std;
//void main()
//{
//    int arr[4][3] = { {33,16,29}, {54,67,99},
//                       {63,76,79}, {82,87,89} };
//
//    cout << *arr[3] + 2 << endl; //84
//    cout << *((*arr + 1) + 2) << endl; //99
//    cout << *(arr + 1)[2] << endl;
//} //99


//void MyIncrementFirst(int* i) {
//	(*i)++;
//}
//
//void MyIncrementSecond(int i)
//{
//	i++;
//}
//
//void MyIncrementThird(int& i) {
//	i++;
//}
//
//void MyIncrementFourth(int** i) {
//	*i = new int(0);
//}
//
//void MyIncrementFifth(int*& i) {
//	i = new int(69);
//}
//
//int main() {
//	int* a = new int(42);
//	cout << "Result" << endl;
//	MyIncrementFirst(a);
//	cout << "first " << *a << endl; //43
//	MyIncrementSecond(*a);
//	cout << "second " << *a << endl; //43
//	MyIncrementThird(*a);
//	cout << "third " << *a << endl; //44
//	MyIncrementFourth(&a);
//	cout << "fourth " << *a << endl; //0
//	MyIncrementFifth(a);
//	cout << "fifth " << *a << endl; //69
//	return 0;
//}


//int main()
//{
//	int var1 = 6, var2 = 0;
//	const int* const  ptr = &var1;
//	 var1 = 9;
//
//	 cout << *ptr;
//	//ptr = &var2;
//}




#include <iostream>
using namespace std;

// Forward declaration of the friend class template
template <typename T> class FriendClass;

template <typename T>
class MyClass {
private:
    T data;

public:
    // Constructor
    MyClass(T val) : data(val) {}

    // Template member function
    void display() const {
        cout << "Value: " << data << endl;
    }

    // Friend function template
    //template <class T>
    friend void showData<>(const MyClass<T>& obj);

    // Friend class template
    friend class FriendClass<T>;
};

// Friend function template (must be declared before use in class)
template <typename T>
void showData(const MyClass<T>& obj) {
    cout << "[Friend Function] Accessing private data: " << obj.data << endl;
}

// Friend class template
template <typename T>
class FriendClass {
public:
    void reveal(const MyClass<T>& obj) {
        cout << "[Friend Class] Revealed data: " << obj.data << endl;
    }
};

int main() {
    // Create an object of MyClass with int
    MyClass<int> obj1(42);
    obj1.display();

    // Call the friend function
    showData(obj1);

    // Use the friend class
    FriendClass<int> fObj;
    fObj.reveal(obj1);

    // Now with a different type
    MyClass<string> obj2("Hello Templates");
    obj2.display();

    showData(obj2);

    FriendClass<string> fObj2;
    fObj2.reveal(obj2);

    return 0;
}
