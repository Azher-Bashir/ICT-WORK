//#include "Election.h"
//#include <iostream>
//using namespace std;
//
//Candidate::Candidate(const string& name, const string& cnic, int voteCount)
//    : name(name), cnic(cnic), voteCount(voteCount), prev(nullptr), next(nullptr) {
//}
//
//CandidateList::CandidateList() : head(nullptr), tail(nullptr) {}
//
//CandidateList::~CandidateList() {
//    Candidate* current = head;
//    while (current) {
//        Candidate* next = current->next;
//        delete current;
//        current = next;
//    }
//}
//
//void CandidateList::addCandidate(const string& name, const string& cnic, int voteCount) {
//    Candidate* newCandidate = new Candidate(name, cnic, voteCount);
//    if (!head) {
//        head = tail = newCandidate;
//    }
//    else {
//        tail->next = newCandidate;
//        newCandidate->prev = tail;
//        tail = newCandidate;
//    }
//}
//
//void CandidateList::printCandidates() const {
//    Candidate* current = head;
//    while (current) {
//        cout << "Name: " << current->name
//            << ", CNIC: " << current->cnic
//            << ", Votes: " << current->voteCount << endl;
//        current = current->next;
//    }
//}
//
//Candidate* CandidateList::searchByCNIC(const string& cnic) const {
//    Candidate* current = head;
//    while (current) {
//        if (current->cnic == cnic) return current;
//        current = current->next;
//    }
//    return nullptr;
//}
//
//bool CandidateList::incrementVote(const string& cnic) {
//    Candidate* candidate = searchByCNIC(cnic);
//    if (candidate) {
//        candidate->voteCount++;
//        cout << "You have successfully cast your vote for: "
//            << candidate->name << "(" << candidate->cnic << ")" << endl;
//        return true;
//    }
//    return false;
//}
//
//void CandidateList::showWinner() const {
//    if (!head) {
//        cout << "No candidates available.\n";
//        return;
//    }
//    int maxVotes = -1;
//    Candidate* current = head;
//    while (current) {
//        if (current->voteCount > maxVotes)
//            maxVotes = current->voteCount;
//        current = current->next;
//    }
//
//    int count = 0;
//    current = head;
//    while (current) {
//        if (current->voteCount == maxVotes) count++;
//        current = current->next;
//    }
//
//    if (count == 1) {
//        current = head;
//        while (current) {
//            if (current->voteCount == maxVotes) {
//				cout << "Winner: " << current->name << "(" << current->cnic << ")"<< " with " << current->voteCount << " votes.\n";
//                break;
//            }
//            current = current->next;
//        }
//    }
//    else {
//        cout << "It's a tie between: ";
//        current = head;
//        bool first = true;
//        while (current) {
//            if (current->voteCount == maxVotes) {
//                if (!first) cout << " and ";
//                cout << current->name << "(" << current->cnic << ")";
//                first = false;
//            }
//            current = current->next;
//        }
//        cout << " with " << maxVotes << " votes each.\n";
//    }
//}
//
//Voter::Voter(const string& name, const string& cnic, bool hasVoted)
//    : name(name), cnic(cnic), hasVoted(hasVoted), prev(nullptr), next(nullptr) {
//}
//
//VoterList::VoterList() : head(nullptr), tail(nullptr) {}
//
//VoterList::~VoterList() {
//    Voter* current = head;
//    while (current) {
//        Voter* next = current->next;
//        delete current;
//        current = next;
//    }
//}
//
//void VoterList::addVoter(const string& name, const string& cnic) {
//    Voter* newVoter = new Voter(name, cnic, false);
//    if (!head) {
//        head = tail = newVoter;
//    }
//    else {
//        tail->next = newVoter;
//        newVoter->prev = tail;
//        tail = newVoter;
//    }
//}
//
//void VoterList::printVoters() const {
//    Voter* current = head;
//    while (current) {
//        cout << "Name: " << current->name
//            << ", CNIC: " << current->cnic
//            << ", Has Voted: " << (current->hasVoted ? "Yes" : "No") << endl;
//        current = current->next;
//    }
//}
//
//Voter* VoterList::searchByCNIC(const string& cnic) const {
//    Voter* current = head;
//    while (current) {
//        if (current->cnic == cnic) return current;
//        current = current->next;
//    }
//    return nullptr;
//}
//
//bool VoterList::removeVoter(const string& cnic) {
//    Voter* target = searchByCNIC(cnic);
//    if (!target) return false;
//
//    if (target->prev)
//        target->prev->next = target->next;
//    else
//        head = target->next;
//
//    if (target->next)
//        target->next->prev = target->prev;
//    else
//        tail = target->prev;
//
//    delete target;
//    return true;
//}
//
//bool VoterList::markVoted(const string& cnic) {
//    Voter* voter = searchByCNIC(cnic);
//    if (voter && !voter->hasVoted) {
//        voter->hasVoted = true;
//        return true;
//    }
//    return false;
//}
