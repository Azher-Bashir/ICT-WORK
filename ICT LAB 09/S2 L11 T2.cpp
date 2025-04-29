//#include <iostream>
//#include <string>
//using namespace std;
//
//template <typename T>
//T* resize_array(T* array, int size, int n_size) {
//    T* new_array = new T[n_size];
//    for (int i = 0; i < min(size, n_size); i++) {
//        new_array[i] = array[i];
//    }
//    for (int i = size; i < n_size; i++) {
//        new_array[i] = T();
//    }
//    delete[] array;
//    return new_array;
//}
//
//class UserDefinedType {
//public:
//    int id;
//
//    UserDefinedType() : id(0) {}
//    UserDefinedType(int id) : id(id) {}
//
//    friend ostream& operator<<(ostream& os, const UserDefinedType& obj) {
//        os << "{ID: " << obj.id << "}";
//        return os;
//    }
//};
//
//int main() {
//    int size, n_size;
//
//    cout << "Enter the initial size of the integer array: ";
//    cin >> size;
//    cout << "Enter the new size of the integer array: ";
//    cin >> n_size;
//
//    int* int_array = new int[size];
//    cout << "Enter the elements of the integer array: " << endl;
//    for (int i = 0; i < size; i++) {
//        cin >> int_array[i];
//    }
//
//    int_array = resize_array(int_array, size, n_size);
//
//    cout << "Resized integer array: ";
//    for (int i = 0; i < n_size; i++) {
//        cout << int_array[i] << " ";
//    }
//    cout << endl;
//
//    delete[] int_array;
//
//    cout << "\nTesting with user-defined type:" << endl;
//    size = 2;
//    n_size = 4;
//
//    UserDefinedType* user_array = new UserDefinedType[size];
//    user_array[0] = UserDefinedType(1);
//    user_array[1] = UserDefinedType(2);
//
//    user_array = resize_array(user_array, size, n_size);
//
//    cout << "Resized user-defined type array: ";
//    for (int i = 0; i < n_size; i++) {
//        cout << user_array[i] << " ";
//    }
//    cout << endl;
//
//    delete[] user_array;
//
//    return 0;
//}
