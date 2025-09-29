//#ifndef LINKEDLIST_H
//#define LINKEDLIST_H
//#include <iostream>
//using namespace std;
//class Node {
//private:
//    int data;
//    Node* next;
//
//public:
//    Node(int val) {
//        data = val;
//        next = nullptr;
//    }
//
//    friend class LinkedList;
//};
//class LinkedList {
//private:
//    Node* head;
//
//public:
//    LinkedList() {
//        head = nullptr;
//    }
//
//    void insert(int val) {
//        Node* newNode = new Node(val);
//        if (!head) {
//            head = newNode;
//        }
//        else {
//            Node* temp = head;
//            while (temp->next) {
//                temp = temp->next;
//            }
//            temp->next = newNode;
//        }
//    }
//    void split(LinkedList& evenList, LinkedList& oddList) {
//        Node* temp = head;
//        int index = 0;
//        while (temp) {
//            if (index % 2 == 0) {
//                evenList.insert(temp->data);
//            }
//            else {
//                oddList.insert(temp->data);
//            }
//            temp = temp->next;
//            index++;
//        }
//    }
//    void print() {
//        Node* temp = head;
//        while (temp) {
//            cout << temp->data << " ";
//            temp = temp->next;
//        }
//        cout << endl;
//    }
//};
//
//#endif
