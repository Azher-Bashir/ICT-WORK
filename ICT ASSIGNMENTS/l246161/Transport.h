#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <string>
using namespace std;

class Transport {
protected:
    string brand;
    int manufactureYear;
    float dailyRate;
    bool isFree;
public:
    Transport(string b, int y, float r);
    virtual float rentCost(int period) = 0;
    string getBrand() const;
    bool checkAvailability() const;
    void changeStatus(bool state);
    virtual ~Transport();
};

class Sedan : public Transport {
public:
    Sedan(string b, int y, float r);
    float rentCost(int period) override;
};

class Hauler : public Transport {
public:
    Hauler(string b, int y, float r);
    float rentCost(int period) override;
};

#endif
