#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int num, rem, arm_num = 0, a = 0;
	cout << "Enter a number:";
	cin >> num;


	//This code is for only 3 digit numbers
	for (a = num; a != 0; a)
	{
		rem = a % 10;
		arm_num += pow(rem, 3);
		a /= 10;
	}


	//// This code is for any number 4 digit or 5 digit or any_number
	//a = num;
	//int i;
	//for (i = 0; a != 0; ++i)
	//{
	//	a /= 10;
	//}
	//for (a = num; a != 0; a)
	//{
	//	rem = a % 10;
	//	arm_num += pow(rem, i);
	//	a /= 10;
	//}


	if (arm_num == num)
		cout << "The entered number (" << num << ") is an Armstrong number because the number after processing is " << arm_num << " which is equal to the number you entered." << endl;
	else
		cout << "The entered number (" << num << ") is not an Armstrong number because the number after processing is " << arm_num << " which is not equal to the number you entered." << endl;

	//system("pause");
	return 0;
}