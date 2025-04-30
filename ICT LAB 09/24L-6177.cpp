//#include <iostream>
//#include <string>
//using namespace std;
//
//template <class dt1, class dt2>
//class MyPair {
//private:
//    dt1 first;
//    dt2 second;
//
//public:
//    MyPair();
//    MyPair(dt1 f, dt2 s);
//    void set(dt1 f, dt2 s);
//    MyPair operator+(const MyPair& other) const;
//    bool operator==(const MyPair& other) const;
//    template <class T1, class T2>
//    friend ostream& operator<<(ostream& out, const MyPair<T1, T2>& p);
//    template <class T1, class T2>
//    friend istream& operator>>(istream& in, MyPair<T1, T2>& p);
//};
//
//template <class dt1, class dt2>
//MyPair<dt1, dt2>::MyPair() : first(dt1()), second(dt2()) {}
//
//template <class dt1, class dt2>
//MyPair<dt1, dt2>::MyPair(dt1 f, dt2 s) : first(f), second(s) {}
//
//template <class dt1, class dt2>
//void MyPair<dt1, dt2>::set(dt1 f, dt2 s) {
//    first = f;
//    second = s;
//}
//
//template <class dt1, class dt2>
//MyPair<dt1, dt2> MyPair<dt1, dt2>::operator+(const MyPair& other) const {
//    return MyPair(first + other.first, second + other.second);
//}
//
//template <class dt1, class dt2>
//bool MyPair<dt1, dt2>::operator==(const MyPair& other) const {
//    return (first == other.first && second == other.second);
//}
//
//template <class T1, class T2>
//ostream& operator<<(ostream& out, const MyPair<T1, T2>& p) {
//    out << "(" << p.first << ", " << p.second << ")";
//    return out;
//}
//
//template <class T1, class T2>
//istream& operator>>(istream& in, MyPair<T1, T2>& p) {
//    cout << "Enter first value: ";
//    in >> p.first;
//    cout << "Enter second value: ";
//    in >> p.second;
//    return in;
//}
//
//int main() {
//    MyPair<int, double> pair1;
//    MyPair<int, double> pair2;
//
//    cout << "Input values for pair1:" << endl;
//    cin >> pair1;
//    cout << "Input values for pair2:" << endl;
//    cin >> pair2;
//
//    cout << "pair1: " << pair1 << endl;
//    cout << "pair2: " << pair2 << endl;
//
//    MyPair<int, double> sum = pair1 + pair2;
//    cout << "Sum of pair1 and pair2: " << sum << endl;
//
//    if (pair1 == pair2) {
//        cout << "pair1 and pair2 are equal." << endl;
//    }
//    else {
//        cout << "pair1 and pair2 are not equal." << endl;
//    }
//
//    return 0;
//}
