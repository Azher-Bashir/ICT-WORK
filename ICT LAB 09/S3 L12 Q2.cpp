#include <iostream>
#include <windows.h>

using namespace std;
template<class DT>
class Node
{
public:
    DT data;
    Node<DT>* next;

    Node(DT d) : data(d), next(nullptr) {}
};

template<class DT>
class SList
{
private:
    Node<DT>* head;
    int count;

public:
    SList() : head(nullptr), count(0) {}
    //~SList();
    void insert(DT key);
    bool search(DT key) const;
    void display() const;

    int getSize() const { return count; }
};


template<class DT>
class Hashtable
{
public:
    Hashtable(int size);
    bool store(DT key);
    bool search(DT key);
    void printdata();
private:
    int size;
    SList<DT>** arr;

};

template<class DT>
void SList<DT>::insert(DT key)
{
  
    if (search(key)) 
        return;
    Node<DT>* newNode = new Node<DT>(key);
    newNode->next = head;
    head = newNode;
    count++;
}

template<class DT>
bool SList<DT>::search(DT key) const
{
    Node<DT>* current = head;
    while (current != nullptr)
    {
        if (current->data == key)
        {
            return true;
        }
        current = current->next;
    }
    return false;
}

template<class DT>
void SList<DT>::display() const
{
    Node<DT>* current = head;
    while (current != nullptr)
    {
        cout << current->data;
        if (current->next != nullptr) {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << " (Chain Length: " << count << ")";
}

template<class DT>
Hashtable<DT>::Hashtable(int sizehash) : size(sizehash)
{
    
    arr = new SList<DT>*[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = new SList<DT>(); 
    }
    srand(GetTickCount());
}

template<class DT>
bool Hashtable<DT>::store(DT key)
{
	int index = key % size;

    int initialSize = arr[index]->getSize();
    arr[index]->insert(key);
    return arr[index]->getSize() > initialSize;
}

template<class DT>
bool Hashtable<DT>::search(DT key)
{
    int index = (key % size);
    return arr[index]->search(key);
}

template<class DT>
void Hashtable<DT>::printdata()
{
    cout << "\n--- Hashtable Data (Chaining View) ---\n";
    for (int i = 0; i < size; ++i) {
        if (arr[i]->getSize() > 0) {
            cout << "Bucket [" << i << "]: ";
            arr[i]->display();
            cout << endl;
        }
    }
    cout << "--------------------------------------\n";
}

int main()
{
    int num_of_identifiers;
    cout << "Enter maximum number of keys that need to be stored in the hashtable  ";
        cin >> num_of_identifiers;
    int size_hashtable;
    cout << "Enter size of hashtable needed to store these many identifiers (hint use prime number): ";
        cin >> size_hashtable;
    Hashtable<int>* ht = new Hashtable<int>(size_hashtable);
    for (int i = 0; i < num_of_identifiers; i++)
    {
        int key = rand() % 1000;
        bool was_stored = ht->store(key);
        if (!was_stored)
            cout << key << " could not be stored as it already exists or table is full"<<endl;
    }
    // Note: printdata() added for demonstration purposes
    ht->printdata();

    int find_key;
    cout << "Enter the key to search for " << endl;
    cin >> find_key;
    DWORD start, end;//measure time
    start = GetTickCount();
    bool found = ht->search(find_key);
    end = GetTickCount();
    double cpu_time_used = end - start;
    if (found)
        cout << "it was found in " << cpu_time_used << " milliseconds" << endl;
    else
        cout << "not found in " << cpu_time_used << " milliseconds" << endl;
    return 0;
}

