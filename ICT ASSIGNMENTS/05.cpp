//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string candidateNames[5];
//    int candidateVotes[5];
//    int totalVotes = 0;
//    double votePercentages[5];
//    for (int i = 0; i < 5; i++) {
//        cout << "ENTER THE LAST NAME OF CANDIDATE " << i + 1 << ": ";
//        cin >> candidateNames[i];
//        cout << "ENTER THE NUMBER OF VOTES RECEIVED BY " << candidateNames[i] << ": ";
//        cin >> candidateVotes[i];
//        totalVotes += candidateVotes[i];
//    }
//    cout << "CANDIDATE\tVOTES RECEIVED\t% OF TOTAL VOTES" << endl;
//    for (int i = 0; i < 5; i++) {
//        votePercentages[i] = (candidateVotes[i] / (double)totalVotes) * 100;
//        cout << candidateNames[i] << "\t\t" << candidateVotes[i] << "\t\t" << votePercentages[i] << endl;
//    }
//    cout << "TOTAL\t" << totalVotes << endl;
//    int winner = 0;
//    for (int i = 1; i < 5; i++) {
//        if (candidateVotes[i] > candidateVotes[winner]) {
//            winner = i;
//        }
//    }
//    cout << "THE WINNER OF THE ELECTION IS " << candidateNames[winner] << "." << endl;
//    return 0;
//}
