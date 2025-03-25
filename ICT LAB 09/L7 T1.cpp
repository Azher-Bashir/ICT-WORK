//#include "temperature1.h"
//
//int main() {
//    double tf, tc;
//    char condition;
//    cout << "If you want to enter temperature in Fahrenheit press F or f, if you want to enter temperature in Celsius press C or c: ";
//    cin >> condition;
//
//    if (condition == 'c' || condition == 'C') 
//    {
//        cout << "Enter the temperature in Celsius: ";
//        cin >> tc;
//        TemperatureC temp_c(tc);
//        TemperatureF temp_f;
//        convertor(temp_c, temp_f, condition);
//    }
//    else if (condition == 'f' || condition == 'F') 
//    {
//        cout << "Enter the temperature in Fahrenheit: ";
//        cin >> tf;
//        TemperatureF temp_f(tf);
//        TemperatureC temp_c;
//        convertor(temp_c, temp_f, condition);
//    }
//    else 
//    {
//        cout << "Invalid input" << endl;
//    }
//
//    return 0;
//}
