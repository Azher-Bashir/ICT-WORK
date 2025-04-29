//#include <iostream>
//#include <string>
//using namespace std;
//
//template <typename T>
//class point {
//private:
//    T x, y;
//
//public:
//    point();
//    point(T value_x, T value_y);
//    T get_x() const;
//    T get_y() const;
//    void print() const;
//    void move(T dx, T dy);
//};
//
//template <typename T>
//point<T>::point() : x(T()), y(T()) {}
//
//template <typename T>
//point<T>::point(T a, T b) : x(a), y(b) {}
//
//template <typename T>
//T point<T>::get_x() const {
//    return x;
//}
//
//template <typename T>
//T point<T>::get_y() const {
//    return y;
//}
//
//template <typename T>
//void point<T>::print() const {
//    cout << x << " " << y << endl;
//}
//
//template <typename T>
//void point<T>::move(T dx, T dy) {
//    x = x + dx;
//    y = y + dy;
//}
//
//template <>
//void point<string>::move(string dx, string dy) {
//    x = x + dx;
//    y = y + dy;
//}
//
//int main() {
//    point<int> A(1, 2);
//    A.print();
//    A.move(4, -5);
//    A.print();
//
//    point<float> B(3.2f, 4.9f);
//    cout << B.get_x() << " " << B.get_y() << endl;
//
//    point<string> C("day", "young");
//    C.print();
//    C.move("s", "ster");
//    C.print();
//
//    return 0;
//}
