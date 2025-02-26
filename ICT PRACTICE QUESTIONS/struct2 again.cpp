#include <iostream>
# include <string>

using namespace std;
struct ID
{
	string Name;
	int    Batch;
	int Id_Number;
};

struct Employee
{
	ID  Card;
	string Company;
	int ptr_number;
	string skills[3] = { "EE","Football","sex" };
	string* Agents = new string[4];
};

int main()
{
	Employee  workers;
	workers.Card.Name = "Abdullah";
	workers.Card.Batch = 2025;
	workers.Card.Id_Number = 6079;

	workers.Company = "AJ Coporations";

	Employee* skillstest = &workers;

	for (int  i = 0; i < 3; i++)
	{
		cout << skillstest->skills[i] << "  ";
	}

	skillstest->Card.Id_Number = 6028;

	cout << skillstest->Card.Id_Number << endl;

	cout << "Enter the agent Name: " << endl;
	for (int i = 0; i < 4; i++)
	{
		cin >> skillstest->Agents[i];
	}

	cout << "Agents Name: " << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << skillstest->Agents[i] << "  ";
	}
	return 0;


}