#include "SLLIST - Copy.h"

// =======================
// Node class definitions
// =======================
template <typename T>
Node<T>::Node(T element) {
    data = element;
    next = nullptr;
}

template <typename T>
Node<T>::Node() {
    next = nullptr;
}

template <typename T>
void Node<T>::setData(T pVal) {
    data = pVal;
}

template <typename T>
T Node<T>::getData() {
    return data;
}

template <typename T>
Node<T>* Node<T>::GetNext() {
    return next;
}

template <typename T>
void Node<T>::SetNext(Node<T>* x) {
    next = x;
}

// =======================
// List class definitions
// =======================
template <typename T>
List<T>::List() {
    head = nullptr;
}
template <typename T>
void List<T>::Insert(Node<T>* pBefore, Node<T>* pNew) {
    if (pBefore == nullptr) {
        // Insert at head
        pNew->SetNext(head);
        head = pNew;
    } else {
        pNew->SetNext(pBefore->GetNext());
        pBefore->SetNext(pNew);
    }
}
template <typename T>
void List<T>::Delete(Node<T>* pToBeDeleted) {
    if (head == nullptr || pToBeDeleted == nullptr) return;
    if (head == pToBeDeleted) {
        head = head->GetNext();
        delete pToBeDeleted;
        return;
    }
    Node<T>* current = head;
    while (current != nullptr && current->GetNext() != pToBeDeleted) {
        current = current->GetNext();
    }
    if (current != nullptr) {
        current->SetNext(pToBeDeleted->GetNext());
        delete pToBeDeleted;
    }
}
template <typename T>
void List<T>::printList() {
    Node<T>* current = head;
    while (current != nullptr) {
        cout << current->getData() << " -> ";
        current = current->GetNext();
    }
    cout << "nullptr" << endl;
}
template <typename T>
void List<T>::InsertAtHead(Node<T>* pNew) {
    Insert(nullptr, pNew);
}
template <typename T>
void List<T>::DeleteEnd() {
    if (head == nullptr) return;
    if (head->GetNext() == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    Node<T>* current = head;
    while (current->GetNext()->GetNext() != nullptr) {
        current = current->GetNext();
    }
    delete current->GetNext();
    current->SetNext(nullptr);
}
template <typename T>
bool List<T>::DeleteMax() {
    if (head == nullptr) return false;
    Node<T>* maxNode = head;
    Node<T>* current = head;
    Node<T>* prev = nullptr;
    Node<T>* prevMax = nullptr;
    while (current != nullptr) {
        if (current->getData() > maxNode->getData()) {
            maxNode = current;
            prevMax = prev;
        }
        prev = current;
        current = current->GetNext();
    }
    Delete(maxNode);
    return true;
}
template <typename T>
void List<T>::reverse() {
    Node<T>* prev = nullptr;
    Node<T>* current = head;
    Node<T>* next = nullptr;
    while (current != nullptr) {
        next = current->GetNext();
        current->SetNext(prev);
        prev = current;
        current = next;
    }
    head = prev;
}
template <typename T>
void List<T>::printReverse() {
    printReverseR(head);
    cout << "nullptr" << endl;
}
template <typename T>
void List<T>::printReverseR(Node<T>* n) {
    if (n == nullptr) return;
    printReverseR(n->GetNext());
    cout << n->getData() << " -> ";
}
