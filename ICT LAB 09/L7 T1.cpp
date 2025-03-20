#include <iostream>
using namespace std;

class temperature_C;

class temperature_F
{
private:
	double f;
public:
	temperature_F();
	temperature_F(double);
	friend void convertor(temperature_C&, temperature_F&, char condition);
};


temperature_F::temperature_F()
{
	f = 0;
}
temperature_F::temperature_F(double temperature)
{
	f = temperature;
}
class temperature_C
{
private:
	double c;
public:
	temperature_C();
	temperature_C(double);
	friend void convertor(temperature_C&, temperature_F&, char condition);
};
temperature_C::temperature_C()
{
	c = 0;
}
temperature_C::temperature_C(double temperature)
{
	c = temperature;
}


void convertor(temperature_C& obj1, temperature_F& obj2, char condition)
{
	if(condition == 'f' || condition == 'F')
	obj1.c = (obj2.f - 32) * 5 / 9;
	else if (condition == 'c' || condition == 'C')
	obj2.f = (obj1.c * 9 / 5) + 32;

	cout << "Temperature in cellcius is: " << obj1.c << endl;
	cout << "Temperature in Fahrenheit is: " << obj2.f << endl;
}


int main()
{
	double tf, tc;
	char condition;
	cout << "If you want to enter temperature in farhenheit press F or f, if you want to enter temperature in celcius press C or c: ";
	cin >> condition;

	if (condition == 'c' || condition == 'C')
	{
		cout << "Enter the temperature in celcius: ";
		cin >> tc;
		temperature_C temp_c(tc);
		temperature_F temp_f;
		convertor(temp_c, temp_f, condition);
	}
	else if (condition == 'f' || condition == 'F')
	{
		cout << "Enter the temperature in fahrenheit: ";
		cin >> tf;
		temperature_F temp_f(tf);
		temperature_C temp_c;
		convertor(temp_c, temp_f, condition);
	}
	else
	{
		cout << "Invalid input" << endl;
	}

	return 0;
}






//use case of inheritence and composition
//kia protected data direct access ho kar change kia ja skta ha in the derived case 
