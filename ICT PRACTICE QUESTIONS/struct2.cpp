# include <iostream>
# include<string>
using namespace std;

struct Employee
{
	string Name = "Alice";;
	int    age = 30;
	string skills[4] = { "C++", "Python", "Java", "SQL" };

};

int main()
{
	Employee Agent1;
	Employee* Agent = &Agent1;

	cout << Agent->Name << endl;

	cout << Agent->age << endl;

	for (int i = 0; i < 4; i++)
	{

		cout << Agent->skills[i] << "  ";

	}
	cout << endl;
	cout << "Enter the New skills: " << endl;
	for (int i = 0; i < 4; i++)
	{
		cin >> Agent->skills[i];

	}
	cout << "Final data: " << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << Agent->skills[i] << "  ";
	}



}