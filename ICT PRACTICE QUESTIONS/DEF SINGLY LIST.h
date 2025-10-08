//////#pragma once
////#ifndef DEF_OF_SINGLY_NODE_H
////#define DEF_OF_SINGLY_NODE_H
////#include <iostream>
////#include "SINGLYLIST.h"
////using namespace std;
////template <typename T>
////Slist<T>::Slist()
////{
////	Node = NULL;
////}
////template <typename T>
////void Slist<T>::Insert(Node<T>* pBefore, Node<T>* pNew)
////{
////	if (!head)
////	{
////		head = pNew;
////		return cout << "List is empty...";
////	}
////	else if (pBefore == head)
////	{
////		pNew->setNext(head->getNext());
////		head->setNext(pNew);
////	}
////	else
////	{
////		pNew->setNext(pBefore->getNext());
////		pBefore->setNext(pNew);
////	}
////}
////
////
////
////
////#endif
//
//#include<iostream>
//using namespace std;
//
//class Node {
//public:
//	Node* next;
//	int data;
//
//	Node() : next(nullptr) , data(0) {}
//};
//
//class LinkedList
//{
//private:
//	Node* head, * tail;
//public:
//	LinkedList(): head(nullptr) , tail(nullptr) {}
//	void push_front(int data)
//	{
//		Node* newNode = new Node[data];
//		if (isEmpty())
//		{
//			head = tail = newNode;
//		}
//		else {
//			newNode->next = head;
//			head = newNode;
//		}
//	}
//	void push_back(int data)
//	{
//		Node* newNode = new Node[data];
//		if (isEmpty)
//		{
//			head = newNode;
//		}
//		else
//		{
//			tail->next = newNode;
//			newNode->next = nullptr;
//		}
//	}
//	void print()
//	{
//		//int n = 0;
//		Node* curr = head;
//		if (isEmpty())
//		{
//			cout << "list is empty!!!";
//			return;
//		}
//		else
//		{
//			while (curr->next ==nullptr)
//			{
//				cout << curr->data << " ";
//				curr = curr->next;
//			}
//		}
//	}
//	bool isEmpty()
//	{
//		return head;
//	}
//};
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
