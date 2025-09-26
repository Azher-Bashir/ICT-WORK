//#include <iostream>
//#include "Slist.h"
//#include "Stack.h"
//using namespace std;
//template <typename T>
//Stack<T>::Stack() {
//	top = NULL;
//	list = new List<T>();
//}
//template <typename T>
//bool Stack<T>::IsFull()
//{
//	return false;
//}
//template <typename T>
//bool Stack<T>::IsEmpty()
//{
//	return top == NULL;
//}
//template <typename T>
//void Stack<T>::Push(const T item)
//{
//	if (IsEmpty()) {
//		cout << "The List is Empty" << endl;
//		return;
//	}
//	else {
//		Node* pNew = new Node(item);
//		pNew->setData(item);
//		top = pNew;
//		//list->head = top;
//	}
//}
//template <typename T>
//T Stack<T>::Pop()
//{
//	if (IsEmpty()) {
//		cout << "The List is Empty" << endl;
//		return NULL;
//	}
//	else {
//		Node* temp = top;
//		T data = top->getData();
//		top = top->getNext();
//		//list->head = top;
//		delete temp;
//		return data;
//	}
//}