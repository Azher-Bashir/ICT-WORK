//#include "temperature1.h"
//
//TemperatureF::TemperatureF() {
//    f = 0;
//}
//
//TemperatureF::TemperatureF(double temperature) {
//    f = temperature;
//}
//
//TemperatureC::TemperatureC() {
//    c = 0;
//}
//
//TemperatureC::TemperatureC(double temperature) {
//    c = temperature;
//}
//
//void convertor(TemperatureC& obj1, TemperatureF& obj2, char condition) {
//    if (condition == 'f' || condition == 'F')
//        obj1.c = (obj2.f - 32) * 5 / 9;
//    else if (condition == 'c' || condition == 'C')
//        obj2.f = (obj1.c * 9 / 5) + 32;
//
//    cout << "Temperature in Celsius is: " << obj1.c << endl;
//    cout << "Temperature in Fahrenheit is: " << obj2.f << endl;
//}
