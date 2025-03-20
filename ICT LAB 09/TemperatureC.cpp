// TemperatureC.cpp
#include "TemperatureC.h"

TemperatureC::TemperatureC(double celsius) : celsius(celsius) {}

double TemperatureC::getCelsius() const {
    return celsius;
}
