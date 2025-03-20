// TemperatureC.h
#ifndef TEMPERATUREC_H
#define TEMPERATUREC_H

class TemperatureF; // Forward declaration

class TemperatureC {
private:
    double celsius;
public:
    TemperatureC(double celsius);
    double getCelsius() const;
    friend void convert(TemperatureC c, TemperatureF f);
};

#endif
