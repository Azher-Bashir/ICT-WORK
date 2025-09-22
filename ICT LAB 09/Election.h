//#pragma once
//#include <string>
//using namespace std;
//class Candidate {
//public:
//    Candidate* prev;
//    Candidate* next;
//    string name;
//    string cnic;
//    int voteCount;
//    Candidate(const string& name, const string& cnic, int voteCount = 0);
//};
//
//class CandidateList {
//private:
//    Candidate* head;
//    Candidate* tail;
//public:
//    CandidateList();
//    ~CandidateList();
//
//    void addCandidate(const string& name, const string& cnic, int voteCount = 0);
//    void printCandidates() const;
//    Candidate* searchByCNIC(const string& cnic) const;
//    bool incrementVote(const string& cnic);
//    void showWinner() const;
//};
//class Voter {
//public:
//    string name;
//    string cnic;
//    bool hasVoted;
//    Voter* prev;
//    Voter* next;
//
//    Voter(const string& name, const string& cnic, bool hasVoted = false);
//};
//
//class VoterList {
//private:
//    Voter* head;
//    Voter* tail;
//
//public:
//    VoterList();
//    ~VoterList();
//
//    void addVoter(const string& name, const string& cnic);
//    void printVoters() const;
//    Voter* searchByCNIC(const string& cnic) const;
//    bool removeVoter(const string& cnic);
//    bool markVoted(const string& cnic);
//};
