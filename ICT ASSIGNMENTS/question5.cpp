//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void inputData(string names[], int votes[], int numCandidates, int& totalVotes);
//void calculatePercentages(int votes[], double percentages[], int numCandidates, int totalVotes);
//void displayResults(string names[], int votes[], double percentages[], int numCandidates, int totalVotes);
//int findWinner(int votes[], int numCandidates);
//
//int main() {
//    const int numCandidates = 5;
//    string names[numCandidates];
//    int votes[numCandidates];
//    double percentages[numCandidates];
//    int totalVotes = 0;
//
//    inputData(names, votes, numCandidates, totalVotes);
//    calculatePercentages(votes, percentages, numCandidates, totalVotes);
//    displayResults(names, votes, percentages, numCandidates, totalVotes);
//
//    int winnerIndex = findWinner(votes, numCandidates);
//    cout << "The Winner of the Election is " << names[winnerIndex] << "." << endl;
//
//    return 0;
//}
//
//void inputData(string names[], int votes[], int numCandidates, int& totalVotes) {
//    for (int i = 0; i < numCandidates; i++) {
//        cout << "Please enter the surname of candidate number " << i + 1 << ": ";
//        cin >> names[i];
//        cout << "Please enter the vote count for " << names[i] << ": ";
//        cin >> votes[i];
//        totalVotes += votes[i];
//    }
//}
//
//void calculatePercentages(int votes[], double percentages[], int numCandidates, int totalVotes) {
//    for (int i = 0; i < numCandidates; i++) {
//        percentages[i] = (static_cast<double>(votes[i]) / totalVotes) * 100;
//    }
//}
//
//void displayResults(string names[], int votes[], double percentages[], int numCandidates, int totalVotes) {
//    cout << "Candidate" << "\t" << "Votes Received" << "\t" << "% of Total Votes" << endl;
//    for (int i = 0; i < numCandidates; i++) {
//        cout << names[i] << "\t\t" << votes[i] << "\t\t" << percentages[i] << "%" << endl;
//    }
//    cout << "Total " << totalVotes << endl;
//}
//
//int findWinner(int votes[], int numCandidates) {
//    int maxVotes = votes[0];
//    int maxIndex = 0;
//    for (int i = 1; i < numCandidates; i++) {
//        if (votes[i] > maxVotes) {
//            maxVotes = votes[i];
//            maxIndex = i;
//        }
//    }
//    return maxIndex;
//}
//
//
//
