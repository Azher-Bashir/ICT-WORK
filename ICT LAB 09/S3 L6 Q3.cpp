//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//template <typename T>
//class Node {
//public:
//	//friend isPalindrome;
//	Node(T element);   // constructor with data
//	Node();            // default constructor
//
//	void setData(T pVal);
//	T getData();
//
//	Node* GetNext();
//	void SetNext(Node* x);
//private:
//	T data;
//	Node* next;
//};
//
//template <typename T>
//Node<T>::Node(T element) {
//	data = element;
//	next = nullptr;
//}
//
//template <typename T>
//Node<T>::Node() {
//	next = nullptr;
//}
//
//template <typename T>
//void Node<T>::setData(T pVal) {
//	data = pVal;
//}
//
//template <typename T>
//T Node<T>::getData() {
//	return data;
//}
//
//template <typename T>
//Node<T>* Node<T>::GetNext() {
//	return next;
//}
//
//template <typename T>
//void Node<T>::SetNext(Node* x) {
//	next = x;
//}
//
//template <typename T>
//class queue
//{
//private:
//	Node<T>* first;
//	Node<T>* rear;
//public:
//
//	queue()
//	{
//		first = nullptr;
//		rear = nullptr;
//	}
//	// puts element at the rear end of the Queue if it is not full. Must be O(1)
//	void Put(T element)
//	{
//		Node<T>* pNew = new Node<T>(element);
//		if (IsEmpty())
//		{
//			first = pNew;
//			rear = pNew;
//		}
//		else
//		{
//			rear->SetNext(pNew);
//			rear = pNew;
//		}
//	}
//	// if queue not empty then delete the element at front of the Queue. Must be O(1)
//	T Get()
//	{
//		if (IsEmpty())
//		{
//			cout << ("Queue is empty!");
//		}
//		Node<T>* temp = first;
//		T val = temp->getData();
//		first = first->GetNext();
//		if (first == nullptr)
//			rear = nullptr;
//		delete temp;
//		return val;
//	}
//	bool IsEmpty()
//	{
//		return (first == nullptr && rear == nullptr);
//	}
//	bool IsFull()
//	{
//		return false;
//	}
//
//	template <typename T>
//	bool isPalindrome() {
//		stack<T> list;
//		Node < T*> curr = first;
//		while (curr->GetNext != NULL)
//		{
//			list.push(curr->getData());
//			curr = curr->Getnext();
//
//		}
//		curr = first;
//		while (curr != NULL)
//		{
//			if (curr->getata() != list.top)
//				return false;
//			else
//			{
//				curr = curr->GetNext();
//				list.pop;
//			}
//		}
//		return true;
//	}
//};
////template <typename T>
////bool isPalindrome(string a)
////{
////	queue<char> Queue;
////	stack<char> stack;
////	for (char c : a) {
////		Queue.Put(c);
////		stack.push(c);
////	}
////	while (!Queue.IsEmpty()) {
////		if (Queue.Get() != stack.top()) {
////			return false;
////		}
////		stack.pop();
////	}
////	return true;
////}
//int main()
//{
//	//string word;
//	//cout << "Enter a word that you want to check: ";
//	//getline(cin, word);
//	//if (isPalindrome<char>(word))
//	//{
//	//	cout << word << " is a palindrome." << endl;
//	//}
//	//else
//	//{
//	//	cout << word << " is not a palindrome." << endl;
//	//}
//	//return 0;
//	string word;
//	cout << "Enter a word that you want to check: ";
//	getline(cin, word);
//
//	queue<char> Queue;
//	stack<char> Stack;
//
//	for (char c : word) {
//		Queue.Put(c);
//		Stack.push(c);
//	}
//
//	bool is_palindrome = true;
//	while (!Queue.IsEmpty()) {
//		if (Queue.Get() != Stack.top()) {
//			is_palindrome = false;
//			break;
//		}
//		Stack.pop();
//	}
//
//	if (is_palindrome) {
//		cout << word << " is a palindrome." << endl;
//	}
//	else {
//		cout << word << " is not a palindrome." << endl;
//	}
//	return 0;
//}