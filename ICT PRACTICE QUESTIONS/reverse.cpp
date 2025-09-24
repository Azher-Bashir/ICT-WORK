//#include "SLLIST.h"
//using namespace std;
//
//int main()
//{
//	List<int> myList;
//	Node<int>* n1 = new Node<int>(10);
//	Node<int>* n2 = new Node<int>(20);
//	Node<int>* n3 = new Node<int>(30);
//	Node<int>* n4 = new Node<int>(40);
//	myList.InsertAtHead(n1);  // head -> 10
//	myList.InsertAtHead(n2);  // head -> 20 -> 10
//	myList.InsertAtHead(n3);  // head -> 30 -> 20 -> 10
//	myList.InsertAtHead(n4);  // head -> 40 -> 30 -> 20 -> 10
//	cout << "Original List: ";
//	myList.printList();
//	myList.reverse();
//	cout << "Reversed List: ";
//	myList.printList();
//	return 0;
//}