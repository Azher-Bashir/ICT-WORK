#include <iostream>
using namespace std;
class Node {
	private:
	int data;
	Node* next;
public:
	Node(int val) {
		data = val;
		next = nullptr;
	}
	friend class LinkedList;
};
class LinkedList {
	private:
		Node* head;
public:
	LinkedList() {
		head = nullptr;
	}
	void insert(int val);
	void split(LinkedList& evenList, LinkedList& oddList);
	void print();
};

void LinkedList::insert(int val) {
	Node* newNode = new Node(val);
	if (!head) {
		head = newNode;
	} else {
		Node* temp = head;
		while (temp->next) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
void LinkedList::split(LinkedList& evenList, LinkedList& oddList) {
	Node* temp = head;
	int index = 0;
	while (temp) {
		if (index % 2 == 0) {
			evenList.insert(temp->data);
		} else {
			oddList.insert(temp->data);
		}
		temp = temp->next;
		index++;
	}
}
void LinkedList::print() {
	Node* temp = head;
	while (temp) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
int main() {
	LinkedList list;
	int n, val;
	cout << "Enter number of elements: ";
	cin >> n;
	cout << "Enter elements: ";
	for (int i = 0; i < n; i++) {
		cin >> val;
		list.insert(val);
	}
	LinkedList evenList, oddList;
	list.split(evenList, oddList);
	cout << "Even position list: ";
	evenList.print();
	cout << "Odd position list: ";
	oddList.print();
	return 0;
}
