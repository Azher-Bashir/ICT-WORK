//#pragma once
//#include <string>
//using namespace std;
//
//class Candidate {
//public:
//    string name;
//    string cnic;
//    int voteCount;
//    Candidate* prev;
//    Candidate* next;
//
//    Candidate(const string& name, const string& cnic, int voteCount = 0);
//};
//
//class CandidateList {
//private:
//    Candidate* head;
//    Candidate* tail;
//
//public:
//    CandidateList();
//    ~CandidateList();
//
//    void addCandidate(const string& name, const string& cnic, int voteCount = 0);
//    void printCandidates() const;
//    Candidate* searchByCNIC(const string& cnic) const;
//    bool incrementVote(const string& cnic);
//    void showWinner() const;   // replaced vector with linked list logic
//};
