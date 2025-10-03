//#include <iostream>
//using namespace std;
//
//template <typename T>
//class Node {
//public:
//    Node(T element);   // constructor with data
//    Node();            // default constructor
//
//    void setData(T pVal);
//    T getData();
//
//    Node* GetNext();
//    void SetNext(Node* x);
//
//private:
//    T data;
//    Node* next;
//};
//
//template <typename T>
//Node<T>::Node(T element) {
//    data = element;
//    next = nullptr;
//}
//
//template <typename T>
//Node<T>::Node() {
//    next = nullptr;
//}
//
//template <typename T>
//void Node<T>::setData(T pVal) {
//    data = pVal;
//}
//
//template <typename T>
//T Node<T>::getData() {
//    return data;
//}
//
//template <typename T>
//Node<T>* Node<T>::GetNext() {
//    return next;
//}
//
//template <typename T>
//void Node<T>::SetNext(Node* x) {
//    next = x;
//}
//
//template <typename T>
//class queue
//{
//private:
//    Node<T>* first;
//    Node<T>* rear;
//public:
//    queue()
//    {
//        first = nullptr;
//        rear = nullptr;
//    }
//    // puts element at the rear end of the Queue if it is not full. Must be O(1)
//    void Put(T element)
//    {
//        Node<T>* pNew = new Node<T>(element);
//        if (IsEmpty())
//        {
//            first = pNew;
//            rear = pNew;
//        }
//        else
//        {
//            rear->SetNext(pNew);
//            rear = pNew;
//        }
//    }
//    // if queue not empty then delete the element at front of the Queue. Must be O(1)
//    T Get()
//    {
//        if (IsEmpty())
//        {
//            throw std::out_of_range("Queue is empty!");
//        }
//        Node<T>* temp = first;
//        T val = temp->getData();
//        first = first->GetNext();
//        if (first == nullptr)
//            rear = nullptr;
//        delete temp;
//        return val;
//    }
//    // return true if the Queue is empty and false if it is not
//    bool IsEmpty()
//    {
//        return (first == nullptr && rear == nullptr);
//    }
//    // return true if the Queue is full and false if it is not
//    bool IsFull()
//    {
//        return false;
//    }
//};
//
//int main()
//{
//    queue<int>* q = new queue<int>();
//    if (q->IsEmpty())
//        cout << "Queue is currently empty" << endl;
//    q->Put(1);
//    q->Put(2);
//    q->Put(3);
//    while (!q->IsEmpty())
//    {
//        int value = q->Get();
//        cout << value << endl;
//    }
//    delete q;
//    return 0;
//}