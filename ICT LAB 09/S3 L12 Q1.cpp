#include <iostream>
#include <windows.h>
using namespace std;
enum SlotStatus { EMPTY, OCCUPIED, DELETED };

template<class DT>
class Hashtable
{
public:
	Hashtable(int sizehash);
	bool store(DT key);
	bool search(DT key);
	bool deleteKey(DT key);
	~Hashtable(); // Declared
private:
	int size;
	DT* arr;
	SlotStatus* status;
	int numStored;

	int hashFunction(DT key) {
		return (int)key % size;
	}
};
template<class DT>
Hashtable<DT>::Hashtable(int sizehash) : size(sizehash), numStored(0)
{
	srand(time(0));

	if (size <= 0) size = 10;
	arr = new DT[size];
	status = new SlotStatus[size];

	for (int i = 0; i < size; ++i) {
		status[i] = EMPTY;
	}
}

// --- ADDED: Destructor Implementation for Memory Cleanup ---
template<class DT>
Hashtable<DT>::~Hashtable()
{
	delete[] arr;
	delete[] status;
	// numStored and size are stack-allocated and clean up automatically
}
// ----------------------------------------------------------

template<class DT>
bool Hashtable<DT>::store(DT key)
{
	if (numStored >= size) {
		return false;
	}

	int index = hashFunction(key);
	int start_index = index;
	do {
		if (status[index] == EMPTY || status[index] == DELETED) {
			arr[index] = key;
			status[index] = OCCUPIED;
			numStored++;
			return true;
		}

		if (status[index] == OCCUPIED && arr[index] == key) {
			return false;
		}

		index = (index + 1) % size;
	} while (index != start_index);

	return false;
}

template<class DT>
bool Hashtable<DT>::search(DT key)
{
	int index = hashFunction(key);
	int start_index = index;

	do {
		if (status[index] == EMPTY) {
			return false;
		}

		if (status[index] == OCCUPIED && arr[index] == key) {
			return true;
		}

		index = (index + 1) % size;
	} while (index != start_index);

	return false;
}

template<class DT>
bool Hashtable<DT>::deleteKey(DT key)
{
	int index = hashFunction(key);
	int start_index = index;

	do {
		if (status[index] == EMPTY) {
			return false;
		}

		if (status[index] == OCCUPIED && arr[index] == key) {
			status[index] = DELETED;
			numStored--;
			return true;
		}

		index = (index + 1) % size;
	} while (index != start_index);


	return false;
}

int main()
{
	int num_of_identifiers;
	cout << "Enter maximum number of keys that need to be stored in the hashtable ";
		cin >> num_of_identifiers;
	int size_hashtable;
	cout << "Enter size of hashtable needed to store these many identifiers (hint: use prime number): ";
		cin >> size_hashtable;
	//create a hashtable of this size
	Hashtable<int>* ht = new Hashtable<int>(size_hashtable);
	for (int i = 0; i < num_of_identifiers; i++)
	{
		int key = rand() % 1000;
		bool was_stored = ht->store(key);
		if (!was_stored)
			cout << key << " could not be stored as it already exists or is full"<<endl;
	}
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
