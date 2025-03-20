// TemperatureF.cpp
#include "TemperatureF.h"

TemperatureF::TemperatureF(double fahrenheit) : fahrenheit(fahrenheit) {}

double TemperatureF::getFahrenheit() const {
    return fahrenheit;
}
