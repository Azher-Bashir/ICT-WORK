#ifndef SLLIST_H
#define SLLIST_H

#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    Node(T element);   // constructor with data
    Node();            // default constructor

    void setData(T pVal);
    T getData();

    Node* GetNext();
    void SetNext(Node* x);

private:
    T data;
    Node* next;
};

template <typename T>
class List {
public:
    List();  // constructor

    void Insert(Node<T>* pBefore, Node<T>* pNew);  // general insert
    void Delete(Node<T>* pToBeDeleted);            // delete a given node
    void printList();                              // print list

    void InsertAtHead(Node<T>* pNew);  // insert at beginning
    void DeleteEnd();                  // delete last node

    // Other utility functions
    bool DeleteMax();
    void reverse();
    void printReverse();

private:
    Node<T>* head;
    void printReverseR(Node<T>* n);
};

#endif
