#include <iostream>
using namespace std;

template <class v>
class HashItem {
public:
    int key;
    v value;
    int status;


    HashItem() {
        status = 0;
    }
};

template <class v>
class HashMap {
private:
    HashItem<v>* hashArray;
    int capacity;
    int currentElements;
    int getNextIndex(int key, int i) {
        int h = key % capacity;
        if (h < 0) h += capacity;

        int c1 = 3;
        int c2 = 2;

        int idx = (h + c1 * i + c2 * i * i) % capacity;
        if (idx < 0) idx += capacity;

        return idx;
    }
    void doubleCapacity() {
        int oldCapacity = capacity;
        capacity = capacity * 2;

        HashItem<v>* oldArray = hashArray;
        hashArray = new HashItem<v>[capacity];
        currentElements = 0;

        for (int i = 0; i < oldCapacity; i++) {
            if (oldArray[i].status == 2) {
                insert(oldArray[i].key, oldArray[i].value);
            }
        }

        delete[] oldArray;
    }

public:

    HashMap() {
        capacity = 10;
        currentElements = 0;
        hashArray = new HashItem<v>[capacity];
    }
    void insert(int key, v value) {
        float loadFactor = (float)currentElements / capacity;
        if (loadFactor >= 0.75f) {
            doubleCapacity();
        }

        int index = key % capacity;
        if (index < 0) index += capacity;

        int i = 1;

        while (hashArray[index].status == 2) {
            index = getNextIndex(key, i);
            i++;

            if (i > capacity) {
                cout << "No space available!\n";
                return;
            }
        }

        hashArray[index].key = key;
        hashArray[index].value = value;
        hashArray[index].status = 2;
        currentElements++;
    }

    bool deleteKey(int key) {
        int index = key % capacity;
        if (index < 0) index += capacity;

        int i = 1;

        while (hashArray[index].status != 0) {
            if (hashArray[index].status == 2 && hashArray[index].key == key) {
                hashArray[index].status = 1;
                return true;
            }
            index = getNextIndex(key, i);
            i++;
        }

        return false;
    }

    v* get(int key) {
        int index = key % capacity;
        if (index < 0) index += capacity;

        int i = 1;

        while (hashArray[index].status != 0) {
            if (hashArray[index].status == 2 && hashArray[index].key == key) {
                return &(hashArray[index].value);
            }
            index = getNextIndex(key, i);
            i++;
        }

        return nullptr;
    }
    void display() {
        cout << "\nHash Table:\n";
        for (int i = 0; i < capacity; i++) {
            cout << i << ": ";
            if (hashArray[i].status == 2) {
                cout << "(Key=" << hashArray[i].key
                    << ", Value=" << hashArray[i].value << ")";
            }
            else if (hashArray[i].status == 1) {
                cout << "Deleted";
            }
            else {
                cout << "Empty";
            }
            cout << endl;
        }
    }

    ~HashMap() {
        delete[] hashArray;
    }
};

int main() {
    HashMap<int> map;
    int choice, key, value;

    while (true) {
        cout << "\n--- HASH MAP MENU (Quadratic Probing) ---\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Delete\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter key: ";
            cin >> key;
            cout << "Enter value: ";
            cin >> value;
            map.insert(key, value);
            cout << "Inserted!\n";
        }
        else if (choice == 2) {
            cout << "Enter key: ";
            cin >> key;
            int* ans = map.get(key);
            if (ans == nullptr)
                cout << "Not found!\n";
            else
                cout << "Value = " << *ans << endl;
        }
        else if (choice == 3) {
            cout << "Enter key: ";
            cin >> key;
            if (map.deleteKey(key))
                cout << "Deleted!\n";
            else
                cout << "Key not found!\n";
        }
        else if (choice == 4) {
            map.display();
        }
        else if (choice == 5) {
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}