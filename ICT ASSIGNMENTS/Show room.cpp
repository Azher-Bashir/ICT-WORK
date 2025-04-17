//#include<iostream>
//using namespace std;
//template<class T1>
//class add
//{
//private:
//	T1 num1;
//	T1 num2;
//public:
//	add(T1, T1);
//	T1 add_num();
//};
//template <class T1>
//add<T1>::add(T1 a, T1 b) : num1(a), num2(b)
//{}
//template <class T1>
//T1 add<T1>::add_num()
//{
//	return num1 + num2;
//}
//
//int main()
//{
//	add<int>a(2, 3);
//	add<double>b(2.4323244, 33.323234);
//	auto sum_int = a.add_num();
//	auto sum_double = b.add_num();
//	cout << "Sum of integers: " << sum_int << endl << "Sum of double: " << sum_double << endl;
//}