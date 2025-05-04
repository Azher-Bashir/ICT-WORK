#include "Transport.h"

Transport::Transport(string b, int y, float r) : brand(b), manufactureYear(y), dailyRate(r), isFree(true) {}
string Transport::getBrand() const { return brand; }
bool Transport::checkAvailability() const { return isFree; }
void Transport::changeStatus(bool state) { isFree = state; }
Transport::~Transport() {}

Sedan::Sedan(string b, int y, float r) : Transport(b, y, r) {}
float Sedan::rentCost(int period) {
    return dailyRate * period;
}

Hauler::Hauler(string b, int y, float r) : Transport(b, y, r) {}
float Hauler::rentCost(int period) {
    float basic = dailyRate * period;
    return basic + basic * 0.05f;
}
