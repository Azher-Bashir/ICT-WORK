//#ifndef SINGLY_LIST_H
//#define SINGLY_LIST_H
//
//#include <iostream>
//using namespace std;
//
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
//    int getdata() {
//        return data;
//    }
//    void setdata(int val) {
//        data = val;
//    }
//
//    Node* getnext() {
//        return next;
//    }
//    void setnext(Node* next) {
//        this->next = next;
//    }
//};
//
//class singly_list {
//private:
//    Node* head;
//
//public:
//    singly_list() {
//        head = nullptr;
//    }
//
//    Node* getHead() {
//        return head;
//    }
//    void setHead(Node* h) {
//        head = h;
//    }
//
//    void insert(Node* pnew, Node* pbefore) {
//        if (head == nullptr) {
//            head = pnew;
//        }
//        if (head && !pbefore) {
//            pnew->setnext(head);
//            head = pnew;
//        }
//        else if (head && pbefore) {
//            pnew->setnext(pbefore->getnext());
//                pbefore->setnext(pnew);
//        }
//    }
//    void printList() {
//        Node* temp = head;
//        while (temp) {
//            cout << temp->getdata() << " ";
//            temp = temp->getnext();
//        }
//        cout << endl;
//    }
//
//    void separate(singly_list& evenList, singly_list& oddList) {
//        Node* temp = head;
//        int index = 0;
//        while (temp) {
//            Node* pnew = new Node(temp->getdata());
//            if (index % 2 == 0)
//                evenList.insert(nullptr, pnew);
//            else
//                oddList.insert(nullptr, pnew);
//            temp = temp->getnext();
//            index++;
//        }
//    }
//};
//
//#endif
