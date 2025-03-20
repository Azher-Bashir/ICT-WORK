#pragma once
// TemperatureF.h
#ifndef TEMPERATUREF_H
#define TEMPERATUREF_H

class TemperatureC; // Forward declaration

class TemperatureF {
private:
    double fahrenheit;
public:
    TemperatureF(double fahrenheit);
    double getFahrenheit() const;
    friend void convert(TemperatureC c, TemperatureF f);
};

#endif
