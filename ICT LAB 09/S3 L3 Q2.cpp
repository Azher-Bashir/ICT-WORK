//#include <iostream>
//using namespace std;
//
//template<typename T>
//class Node {
//public:
//    Node(T element) : data(element), Next(nullptr) {}
//
//    void setData(T pVal) {
//        data = pVal;
//    }
//
//    T getData() const {
//        return data;
//    }
//
//    Node<T>* GetNext() const {
//        return Next;
//    }
//
//    void SetNext(Node<T>* x) {
//        Next = x;
//    }
//private:
//    T data;
//    Node<T>* Next;
//};
//template<typename T>
//class SCList {
//public:
//    SCList() : Tail(nullptr) {}
//    void Delete(Node<T>* pToBeDeleted);
//    void Insert(Node<T>* pBefore, Node<T>* pNew);
//    void printList();
//private:
//    Node<T>* Tail;
//};
//
//template<typename T>
//void SCList<T>::Delete(Node<T>* pToBeDeleted) {
//    if (Tail == nullptr) {
//        cout << "List is Empty" << endl;
//        return;
//    }
//
//    Node<T>* temp = Tail;
//
//    do {
//
//        if (pToBeDeleted == Tail) {
//            Tail = pToBeDeleted->GetNext();
//            delete pToBeDeleted;
//            return;
//        }
//        else
//        {
//            temp->SetNext(pToBeDeleted->GetNext());
//            delete pToBeDeleted;
//        }
//        temp = temp->GetNext();
//    }
//
//    while (temp != Tail->GetNext());
//
//}
//template<typename T>
//void SCList<T>::Insert(Node<T>* pBefore, Node<T>* pNew) {
//    if (Tail == nullptr) {
//        cout << "List is Empty: inserting first node" << endl;
//        Tail = pNew;
//        pNew->SetNext(pNew);
//        return;
//    }
//    else {
//        pNew->SetNext(pBefore->GetNext());
//        pBefore->SetNext(pNew);
//        if (pBefore == Tail) {
//            Tail = pNew;
//        }
//    }
//}
//
//template<typename T>
//void SCList<T>::printList() {
//    if (!Tail) {
//        cout << "List is empty." << endl;
//        return;
//    }
//
//    Node<T>* current = Tail->GetNext();
//    do {
//        cout << current->getData() << " ";
//        current = current->GetNext();
//    } while (current != Tail->GetNext());
//    cout << endl;
//}
//int main() {
//    SCList<int>* list = new SCList<int>();
//    Node<int>* a = new Node<int>(1);
//    Node<int>* b = new Node<int>(2);
//    Node<int>* c = new Node<int>(3);
//    Node<int>* d = new Node<int>(4);
//    Node<int>* e = new Node<int>(5);
//    list->Insert(nullptr, a); // Insert first node 
//    list->Insert(a, b);
//    list->Insert(b, c);
//    list->Insert(a, d);
//    list->Insert(b, e);
//    list->printList();
//    list->Delete(a);
//    cout << "\nAfter deleting node a:\n";
//    list->printList();
//    delete list;
//    return 0;
//}