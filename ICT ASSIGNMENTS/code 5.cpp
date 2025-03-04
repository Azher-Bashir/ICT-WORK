//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    string candidate[5];
//    int votes[5];
//    int totalVotes = 0;
//    float percentage[5];
//    int winner = 0;
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout << "Enter the last name of candidate " << i + 1 << ": ";
//        cin >> candidate[i];
//    }
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout << "Enter the number of votes received by " << candidate[i] << ": ";
//        cin >> votes[i];
//        totalVotes += votes[i];
//    }
//
//    cout << "Candidate\tVotes Received\t% of Total Votes" << endl;
//    for (int i = 0; i < 5; i++)
//    {
//        percentage[i] = (votes[i] / (float)totalVotes) * 100;
//        cout << candidate[i] << "\t\t" << votes[i] << "\t\t\t" << percentage[i] << endl;
//        if (votes[i] > votes[winner])
//        {
//            winner = i;
//        }
//    }
//    cout << "Total:\t" << totalVotes << endl;
//    cout << "The Winner of the Election is " << candidate[winner] << endl;
//    return 0;
//}
