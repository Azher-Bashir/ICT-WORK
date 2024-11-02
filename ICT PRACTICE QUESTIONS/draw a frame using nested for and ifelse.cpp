//Draw a frame pattern using nested for and if else
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number of rows: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == 1 || i == n || j == 1 || j == n)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
//aCCORDING TO ME THIS CODE IS MORE EFFICIENT THAN THE ONE THAT I CREATED IN THE OTHER FILE SO LETS SEE WETHER I CAN UNDERSTAND THIS OR NOT

//I will start by creating a variable n and taking input from the user
//Then I will create a for loop that will run from 1 to n
//Then I will create another for loop that will run from 1 to n
//Then I will create an if else statement that will check if i is equal to 1 or n or j is equal to 1 or n
//If the condition is true then it will print a star
//If the condition is false then it will print a space
//Then I will print a new line
//Then I will return 0
//This will draw a frame pattern using nested for and if else
//I will now run this code and check if it is working as expected
//The code is working as expected
//I have successfully drawn a frame pattern using nested for and if else