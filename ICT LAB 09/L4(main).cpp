//#include "Election.h"
//#include <iostream>
//using namespace std;
//
//int main() {
//    CandidateList candidates;
//    VoterList voters;
//    candidates.addCandidate("Azher", "1");
//    candidates.addCandidate("Hussnain", "2");
//    candidates.addCandidate("Abdullah", "3");
//    candidates.addCandidate("Sheikh", "4");
//    int choice;
//    do {
//        cout << "\n------------------ Election Menu ------------------\n";
//        cout << "1. Show Candidates\n";
//        cout << "2. Show Voters\n";
//        cout << "3. Add Voter\n";
//        cout << "4. Cast Vote\n";
//        cout << "5. Search Voter by CNIC\n";
//        cout << "6. Remove Voter by CNIC\n";
//        cout << "7. Show Winner\n";
//        cout << "0. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            candidates.printCandidates();
//        }
//        else if (choice == 2) {
//            voters.printVoters();
//        }
//        else if (choice == 3) {
//            string name, cnic;
//            cout << "Enter voter name: ";
//            cin.ignore();
//            getline(cin, name);
//            cout << "Enter voter CNIC: ";
//            getline(cin, cnic);
//            voters.addVoter(name, cnic);
//            cout << "Voter added successfully!\n";
//        }
//        else if (choice == 4) {
//            string voterCNIC, candCNIC;
//            cout << "Enter your CNIC: ";
//            cin.ignore();
//            getline(cin, voterCNIC);
//
//            Voter* voter = voters.searchByCNIC(voterCNIC);
//            if (!voter) {
//                cout << "Voter not found. Please register first.\n";
//            }
//            else if (voter->hasVoted) {
//                cout << "You have already voted!\n";
//            }
//            else {
//                cout << "Enter candidate CNIC to vote for: ";
//                getline(cin, candCNIC);
//                if (candidates.incrementVote(candCNIC)) {
//                    voters.markVoted(voterCNIC);
//                }
//                else {
//                    cout << "Candidate not found.\n";
//                }
//            }
//        }
//        else if (choice == 5) {
//            string cnic;
//            cout << "Enter CNIC to search: ";
//            cin.ignore();
//            getline(cin, cnic);
//            Voter* v = voters.searchByCNIC(cnic);
//            if (v) {
//                cout << "Voter found: " << v->name
//                    << " (Has voted: " << (v->hasVoted ? "Yes" : "No") << ")\n";
//            }
//            else {
//                cout << "Voter not found.\n";
//            }
//        }
//        else if (choice == 6) {
//            string cnic;
//            cout << "Enter CNIC to remove: ";
//            cin.ignore();
//            getline(cin, cnic);
//            if (voters.removeVoter(cnic)) {
//                cout << "Voter removed successfully.\n";
//            }
//            else {
//                cout << "Voter not found.\n";
//            }
//        }
//        else if (choice == 7) {
//            candidates.showWinner();
//        }
//        else if (choice == 0) {
//            cout << "Exiting program...\n";
//        }
//        else {
//            cout << "Invalid choice.\n";
//        }
//    } while (choice != 0);
//
//    return 0;
//}
