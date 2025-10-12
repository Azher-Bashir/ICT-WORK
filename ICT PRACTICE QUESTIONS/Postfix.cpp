////#include <iostream>
////using namespace std;
////
////template <typename T>
////class Node {
////public:
////	//friend class List<T>;  // make List a friend class
////	Node(T element);   // constructor with data
////	Node();            // default constructor
////
////	void setData(T pVal);
////	T getData();
////
////	Node* GetNext();
////	void SetNext(Node* x);
////
////private:
////	T data;
////	Node* next;
////};
////
////template <typename T>
////class List {
////public:
////	//friend class Stack<T>;  // make Stack a friend class
////	List();  // constructor
////
////	void Insert(Node<T>* pBefore, Node<T>* pNew);  // general insert
////	void Delete(Node<T>* pToBeDeleted);            // delete a given node
////	void printList();                              // print list
////
////	void InsertAtHead(Node<T>* pNew);  // insert at beginning
////	void DeleteEnd();                  // delete last node
////
////	// Other utility functions
////	bool DeleteMax();
////	void reverse();
////	void printReverse();
////
////private:
////	Node<T>* head;
////	void printReverseR(Node<T>* n);
////};
////// =======================
////// Node class definitions
////// =======================
////template <typename T>
////Node<T>::Node(T element) {
////	data = element;
////	next = nullptr;
////}
////
////template <typename T>
////Node<T>::Node() {
////	next = nullptr;
////}
////
////template <typename T>
////void Node<T>::setData(T pVal) {
////	data = pVal;
////}
////
////template <typename T>
////T Node<T>::getData() {
////	return data;
////}
////
////template <typename T>
////Node<T>* Node<T>::GetNext() {
////	return next;
////}
////
////template <typename T>
////void Node<T>::SetNext(Node<T>* x) {
////	next = x;
////}
////
////// =======================
////// List class definitions
////// =======================
////template <typename T>
////List<T>::List() {
////	head = nullptr;
////}
////template <typename T>
////void List<T>::Insert(Node<T>* pBefore, Node<T>* pNew) {
////	if (pBefore == nullptr) {
////		// Insert at head
////		pNew->SetNext(head);
////		head = pNew;
////	}
////	else {
////		pNew->SetNext(pBefore->GetNext());
////		pBefore->SetNext(pNew);
////	}
////}
////template <typename T>
////void List<T>::Delete(Node<T>* pToBeDeleted) {
////	if (head == nullptr || pToBeDeleted == nullptr) return;
////	if (head == pToBeDeleted) {
////		head = head->GetNext();
////		delete pToBeDeleted;
////		return;
////	}
////	Node<T>* current = head;
////	while (current != nullptr && current->GetNext() != pToBeDeleted) {
////		current = current->GetNext();
////	}
////	if (current != nullptr) {
////		current->SetNext(pToBeDeleted->GetNext());
////		delete pToBeDeleted;
////	}
////}
////template <typename T>
////void List<T>::printList() {
////	Node<T>* current = head;
////	while (current != nullptr) {
////		cout << current->getData() << " -> ";
////		current = current->GetNext();
////	}
////	cout << "nullptr" << endl;
////}
////template <typename T>
////void List<T>::InsertAtHead(Node<T>* pNew) {
////	Insert(nullptr, pNew);
////}
////template <typename T>
////void List<T>::DeleteEnd() {
////	if (head == nullptr) return;
////	if (head->GetNext() == nullptr) {
////		delete head;
////		head = nullptr;
////		return;
////	}
////	Node<T>* current = head;
////	while (current->GetNext()->GetNext() != nullptr) {
////		current = current->GetNext();
////	}
////	delete current->GetNext();
////	current->SetNext(nullptr);
////}
////template <typename T>
////bool List<T>::DeleteMax() {
////	if (head == nullptr) return false;
////	Node<T>* maxNode = head;
////	Node<T>* current = head;
////	Node<T>* prev = nullptr;
////	Node<T>* prevMax = nullptr;
////	while (current != nullptr) {
////		if (current->getData() > maxNode->getData()) {
////			maxNode = current;
////			prevMax = prev;
////		}
////		prev = current;
////		current = current->GetNext();
////	}
////	Delete(maxNode);
////	return true;
////}
////template <typename T>
////void List<T>::reverse() {
////	Node<T>* prev = nullptr;
////	Node<T>* current = head;
////	Node<T>* next = nullptr;
////	while (current != nullptr) {
////		next = current->GetNext();
////		current->SetNext(prev);
////		prev = current;
////		current = next;
////	}
////	head = prev;
////}
////template <typename T>
////void List<T>::printReverse() {
////	printReverseR(head);
////	cout << "nullptr" << endl;
////}
////template <typename T>
////void List<T>::printReverseR(Node<T>* n) {
////	if (n == nullptr) return;
////	printReverseR(n->GetNext());
////	cout << n->getData() << " -> ";
////}
////// Change the field name 'stack' to something else, e.g., 'arr'
////template <typename T>
////class stack
////{
////	Node<T>* top;
////	List<T>* list;
////public:
////    stack(int size = 10);
////    ~stack();
////    void push(T);
////    T pop();
////    T peek();
////    int size();
////    bool isEmpty();
////    bool isFull();
////    void display();
////};
////template <typename T>
////stack<T>::stack(int size)
////{
////	top = new Node<T>[size];
////	list = new List<T>();
////}
////template <typename T>
////stack<T>::~stack()
////{
////	delete[] top;
////	delete list;
////}
////template <typename T>
////void stack<T>::push(T value)
////{
////	Node<T>* newNode = new Node<T>(value);
////	list->InsertAtHead(newNode);
////}
////template <typename T>
////T stack<T>::pop()
////{
////	if (isEmpty()) {
////		cout << "Stack is empty!" << endl;
////		return T(); // or throw an exception
////	}
////	T value = list->head->getData();
////	list->Delete(list->head);
////	return value;
////}
////template <typename T>
////T stack<T>::peek()
////{
////	if (isEmpty()) {
////		cout << "Stack is empty!" << endl;
////		return T(); // or throw an exception
////	}
////	return list->head->getData();
////}
////template <typename T>
////int stack<T>::size()
////{
////	int count = 0;
////	Node<T>* current = list->head;
////	while (current != nullptr) {
////		count++;
////		current = current->GetNext();
////	}
////	return count;
////}
////
////template <typename T>
////bool stack<T>::isEmpty()
////{
////	return list->head == nullptr;
////}
////template <typename T>
////bool stack<T>::isFull()
////{
////	// Since we're using a linked list, the stack is never full
////	return false;
////}
////template <typename T>
////void stack<T>::display()
////{
////	list->printList();
////}
////int main() {
////	stack<int> s;
////	s.push(10);
////	s.push(20);
////	s.push(30);
////	s.display(); // Output: 30 -> 20 -> 10 -> nullptr
////	cout << "Top element is: " << s.peek() << endl; // Output: 30
////	cout << "Stack size is: " << s.size() << endl; // Output: 3
////	cout << "Popped element is: " << s.pop() << endl; // Output: 30
////	s.display(); // Output: 20 -> 10 -> nullptr
////	return 0;
////}
//
//#include <iostream>
//#include <string>
//#include <cctype>
//using namespace std;
//
//// Node class for stack
//template<typename DT>
//class Node {
//public:
//	DT data;
//	Node* next;
//	Node(DT val) : data(val), next(nullptr) {}
//};
//
//// Stack class using linked list
//template<typename DT>
//class stack {
//private:
//	Node<DT>* top;
//public:
//	stack() : top(nullptr) {}
//
//	void push(DT x) {
//		Node<DT>* pNew = new Node<DT>(x);
//		pNew->next = top;
//		top = pNew;
//	}
//
//	DT pop() {
//		if (isEmpty()) {
//			cout << "Empty stack" << endl;
//			return DT();
//		}
//		Node<DT>* temp = top;
//		DT value = top->data;
//		top = top->next;
//		delete temp;
//		return value;
//	}
//
//	bool isEmpty() {
//		return top == nullptr;
//	}
//
//	DT getTop() {
//		if (isEmpty()) {
//			cout << "No Stack" << endl;
//			return DT();
//		}
//		return top->data;
//	}
//};
//
//// Postfix evaluation function
////template <typename DT>
////DT postfix(const string& expr) {
////    stack<DT> stk;
////    for (size_t i = 0; i < expr.length(); i++) {
////        char c = expr[i];
////        if (isspace(c)) continue;
////        if (isdigit(c)) {
////            stk.push(c - '0'); // convert char to int
////        }
////        else {
////            DT a = stk.pop();
////            DT b = stk.pop();
////            switch (c) {
////            case '+': stk.push(b + a); break;
////            case '-': stk.push(b - a); break;
////            case '*': stk.push(b * a); break;
////            case '/':
////                if (a == 0) {
////                    cout << "Division by zero!" << endl;
////                    return DT();
////                }
////                stk.push(b / a);
////                break;
////            default:
////                cout << "Unknown operator: " << c << endl;
////                return DT();
////            }
////        }
////    }
////    return stk.getTop();
////}
//
//template <typename DT>
//DT postfix(const string &str)
//{
//	stack<DT> stk;
//	char c;
//	for (int i = 0; i < str.length(); i++)
//	{
//		c = str[i];
//		
//		if (isspace(c))continue;
//		//else if (c >= '0' || c <= '9')
//		if(isdigit(c))
//		{
//			stk.push(c - '0');
//		}
//		else
//		{
//			DT b = stk.pop();
//			DT a = stk.pop();
//			switch (c)
//			{
//			case '+':
//				stk.push(a + b);
//				break;
//			case '-':
//				stk.push(a - b);
//				break;
//			case '*':
//				stk.push(a * b);
//				break;
//			}
//		}
//	}
//	return stk.getTop();
//}
//// Main function
//int main() {
//	string expr;
//	cout << "Enter postfix expression (e.g. 23*54*+): ";
//	cin >> expr;
//	int result = postfix<int>(expr);
//	cout << "Result: " << result << endl;
//	return 0;
//}