//#include <iostream>
////#include <cmath>
//
//using namespace std;
//
//static int factorial(int num)
//{
//	if (num > 0)
//		return num * factorial(num - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int num;
//	cout << "Enter a number: ";
//	cin >> num;
//	cout << "Factorial of " << num << " is: " << factorial(num);
//	return 0;
//}

#include <iostream>

using namespace std;

void getline(string name)
{
	cout << "Enter your name: ";
	cin >> name;

}
int main()
{
	int num;
	//string name;
	getline("name");
	cout << " Enter name" << endl;
	cin >> num;
}