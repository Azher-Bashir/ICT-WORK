//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct election_data
//{
//	string* name;
//	double* votes;
//	double* per_votes;
//	int total = 0;
//};
//
//int main()
//{
//	election_data a;
//	int max_votes;
//	a.name = new string[5];
//	a.votes = new double[5];
//	a.per_votes = new double[5];
//	cout << "Enter the names of the candidates: \n";
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "Enter the " << i + 1 << " name of the candidate: ";
//		getline(cin, a.name[i]);
//	}
//	cout << endl;
//	cout << "Enter the votes casted to each person in the same order: " << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "Enter the votes for " << i + 1 << " person: ";
//		cin >> a.votes[i];
//
//		a.total += a.votes[i];
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		a.per_votes[i] = a.votes[i] / a.total * 100;
//	}
//	cout << endl;
//	cout << "The data you entered for the candidates and there result is: " << endl;
//	cout << "CANDIDATES" << '\t' << "VOTES RECIEVED" << '\t' << "% OF TOTAL VOTES" << endl;
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << a.name[i] << '\t' << '\t' << a.votes[i] << '\t' << '\t' << a.per_votes[i] << "%" << endl;
//	}
//	cout << endl;
//	cout << "Total number of votes casted are: " << a.total << endl;
//	for (int i = 0; i < 4; i++)
//	{
//		if (a.votes[i] > a.votes[i + 1])
//		{
//			max_votes = i;
//		}
//	}
//	cout << "The winner of the elections is; " << a.name[max_votes] << endl;
//
//
//}