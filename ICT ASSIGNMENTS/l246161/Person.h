#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
public:
    string fullName, idCard, contact;
    Person(string n, string id, string phone);
};

#endif
