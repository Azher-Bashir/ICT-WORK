#include <iostream>
using namespace std;

struct candidate
{
	string lastname;
	int votesrecieved;
	float percentage;
};

int main()
{
	int total = 0, totalcandidates, max = 0;
	cout << "Enter the number of candidates you want to compare: "; cin >> totalcandidates;
	candidate* ptr = new candidate[totalcandidates];
	for (int x = 0; x < totalcandidates; x++)
	{
		cout << "Enter lastname and total votes recieved by person " << x << ": ";
		cin >> ptr[x].lastname;
		cin >> ptr[x].votesrecieved;
		total = total + ptr[x].votesrecieved;
		if (ptr[x].votesrecieved > max)
		{
			max = x;
		}
	}
	for (int x = 0; x < totalcandidates; x++)
	{
		ptr[x].percentage = ((ptr[x].votesrecieved / total) * 100);
	}
	cout << "Candidate" << "\t" << "Votes recieved" << "\t" << "% of total votes";
	for (int x = 0; x < totalcandidates; x++)
	{
		cout << ptr[x].lastname << "\t" << ptr[x].votesrecieved << "\t" << ptr[x].percentage << endl;
	}
	cout << "Total" << "\t" << total << endl;
	cout << "The winner of election is " << ptr[max].lastname << "." << endl;
	system("Pause");
}