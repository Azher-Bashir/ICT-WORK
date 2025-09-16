#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    Node(int id, string name, string disease);
    ~Node() {}

    void set_next(Node* n);
    void set_prev(Node* p);
    void set_data(int id, string name, string disease);

    Node* get_next();
    Node* get_prev();
    int get_Id();
    string get_name();
    string get_disease();

private:
    int id;
    string name;
    string Disease;
    Node* next;
    Node* prev;
};

Node::Node(int id, string name, string disease) {
    this->id = id;
    this->name = name;
    this->Disease = disease;
    next = nullptr;
    prev = nullptr;
}

void Node::set_next(Node* n) {
    next = n;
}
void Node::set_prev(Node* p) {
    prev = p;
}
void Node::set_data(int id, string name, string disease) {
    this->id = id;
    this->name = name;
    this->Disease = disease;
}

Node* Node::get_next() {
    return next;
}
Node* Node::get_prev() {
    return prev;
}
int Node::get_Id() {
    return id;
}
string Node::get_name() {
    return name;
}
string Node::get_disease() {
    return Disease;
}

class patient {
public:
    patient();
    ~patient() {}

    void insert(Node* pnew, Node* pbefore);
    void print_list();
    void Delete(Node* Ptobedeleted);

private:
    Node* head;
};

patient::patient() {
    head = nullptr;
}

void patient::Delete(Node* Ptobedeleted) {
    if (head == nullptr) {
        cout << " list is empty " << endl;
    }
    if (Ptobedeleted == head) {
        head = head->get_next();
    }
    Node* pbefore = Ptobedeleted->get_prev();
    Node* pafter = pbefore->get_next();
    if (Ptobedeleted->get_next()) {
        pbefore->set_next(Ptobedeleted->get_next());
        pafter->set_prev(Ptobedeleted->get_prev());
    }
    delete Ptobedeleted;
}

void patient::insert(Node* pnew, Node* pbefore) {
    if (pbefore == nullptr) {
        if (head != nullptr) {
            head->set_prev(pnew);
        }
        pnew->set_next(head);
        pnew->set_prev(nullptr);
        head = pnew;
    }
    else {
        Node* pafter = pbefore->get_next();
        pnew->set_next(pafter);
        pnew->set_prev(pbefore);
        pbefore->set_next(pnew);
        if (pafter != nullptr) {
            pafter->set_prev(pnew);
        }
    }
}

void patient::print_list() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << "PATIENT ID IS :" << temp->get_Id() << endl;
        cout << "PATIENT NAME IS: " << temp->get_name() << endl;
        cout << "PATIENT DISEASE IS :" << temp->get_disease() << endl;
        cout << endl;

        temp = temp->get_next();
    }
}

#endif
