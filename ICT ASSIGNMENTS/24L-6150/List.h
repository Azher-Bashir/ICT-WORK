//#ifndef LIST_H
//#define LIST_H
//
//template <class T>
//class List {
//    T** arr;
//    int capacity, size;
//public:
//    List(int cap);
//    void add(T* obj);
//    T* get(int index);
//    int getSize();
//    ~List();
//};
//
//template <class T>
//List<T>::List(int cap) : capacity(cap), size(0) {
//    arr = new T * [capacity];
//}
//
//template <class T>
//void List<T>::add(T* obj) {
//    if (size < capacity) {
//        arr[size++] = obj;
//    }
//}
//
//template <class T>
//T* List<T>::get(int index) {
//    if (index >= 0 && index < size) return arr[index];
//    return nullptr;
//}
//
//template <class T>
//int List<T>::getSize() { return size; }
//
//template <class T>
//List<T>::~List() {
//    for (int i = 0; i < size; i++) {
//        delete arr[i];
//    }
//    delete[] arr;
//}
//
//#endif
