//#include "EmployeeData.h"
//
//
////inline definition of the constructor
//Employee::Employee() : id(0), first(""), last(""), dept(""), salary(0) {}
//
////inline definition of the parametrized constructor
//Employee::Employee(int i, const string& f, const string& l, const string& d, int s)
//	: id(i), first(f), last(l), dept(d), salary(s) {
//}
//
//string Employee::toString() const
//{
//	return to_string(id) + " " + first + " " + last + " " + dept + " " + to_string(salary);
//}
//
//
//Node::Node(const Employee& e) : data(e), left(nullptr), right(nullptr) {}
//EmployeeBST::EmployeeBST() : root(nullptr) {}
//EmployeeBST::~EmployeeBST()
//{
//	destroy(root);
//}
//bool EmployeeBST::insert(const Employee& e)
//{
//	if (root == nullptr)
//	{
//		root = new Node(e);
//		return true;
//	}
//
//	Node* cur = root;
//	Node* parent = nullptr;
//	while (cur != nullptr)
//	{
//		parent = cur;
//		if (e.id < cur->data.id) cur = cur->left;
//		else if (e.id > cur->data.id) cur = cur->right;
//		else return false;
//	}
//
//	if (e.id < parent->data.id) parent->left = new Node(e);
//	else parent->right = new Node(e);
//
//	return true;
//}
//
//Employee* EmployeeBST::search(int id)
//{
//	Node* cur = root;
//	while (cur != nullptr)
//	{
//		if (id < cur->data.id) cur = cur->left;
//		else if (id > cur->data.id) cur = cur->right;
//		else return &cur->data;
//	}
//	return nullptr;
//}
//
//bool EmployeeBST::remove(int id)
//{
//	bool removed = false;
//	root = removeNode(root, id, removed);
//	return removed;
//}
//
//void EmployeeBST::printAscending()
//{
//	inOrder(root);
//}
//
//void EmployeeBST::printDescending()
//{
//	reverseInOrder(root);
//}
//
//void EmployeeBST::saveToFile(const string& filename)
//{
//	ofstream ofs(filename);
//	if (!ofs)
//		return;
//	inOrderWrite(root, ofs);
//	ofs.close();
//}
//void EmployeeBST::destroy(Node* n)
//{
//	if (n == nullptr)
//		return;
//	destroy(n->left);
//	destroy(n->right);
//	delete n;
//}
//
//void EmployeeBST::inOrder(Node* n)
//{
//	if (n == nullptr) return;
//	inOrder(n->left);
//	cout << n->data.toString() << "\n";
//	inOrder(n->right);
//}
//
//void EmployeeBST::reverseInOrder(Node* n)
//{
//	if (n == nullptr) return;
//	reverseInOrder(n->right);
//	cout << n->data.toString() << "\n";
//	reverseInOrder(n->left);
//}
//
//void EmployeeBST::inOrderWrite(Node* n, ofstream& ofs)
//{
//	if (n == nullptr) return;
//	inOrderWrite(n->left, ofs);
//	ofs << n->data.toString() << "\n";
//	inOrderWrite(n->right, ofs);
//}
//
//Node* EmployeeBST::removeNode(Node* n, int id, bool& removed)
//{
//	if (n == nullptr)
//		return nullptr;
//
//	if (id < n->data.id)
//	{
//		n->left = removeNode(n->left, id, removed);
//		return n;
//	}
//	else if (id > n->data.id)
//	{
//		n->right = removeNode(n->right, id, removed);
//		return n;
//	}
//	else
//	{
//		if (n->left == nullptr && n->right == nullptr)
//		{
//			delete n;
//			removed = true;
//			return nullptr;
//		}
//		if (n->left == nullptr)
//		{
//			Node* temp = n->right;
//			delete n;
//			removed = true;
//			return temp;
//		}
//		else if (n->right == nullptr)
//		{
//			Node* temp = n->left;
//			delete n;
//			removed = true;
//			return temp;
//		}
//		Node* succ = n->right;
//		while (succ->left != nullptr)
//		{
//			succ = succ->left;
//		}
//		n->data = succ->data;
//		bool tempRemoved = false;
//		n->right = removeNode(n->right, succ->data.id, tempRemoved);
//		removed = true;
//		return n;
//	}
//}
//
//void loadFromFile(const string& filename, EmployeeBST& bst)
//{
//	ifstream ifs(filename);
//	if (!ifs) return;
//
//	int id;
//	string first, last, dept;
//	int salary;
//	while (ifs >> id >> first >> last >> dept >> salary)
//	{
//		Employee e(id, first, last, dept, salary);
//		bst.insert(e);
//	}
//	ifs.close();
//}
//
//
//int main()
//{
//	const string filename = "employees.txt";
//
//	// create small default file if missing
//	ifstream infile(filename);
//	if (!infile)
//	{
//		ofstream ofs(filename);
//		if (ofs)
//		{
//			ofs << "1234 Ali Ahmed HR 36000\n";
//			ofs << "1233 Ahmed Khan Sales 15000\n";
//			ofs << "1235 Zakiya Irfan Marketing 40000\n";
//		}
//	}
//	else
//	{
//		infile.close();
//	}
//
//	EmployeeBST bst;
//	loadFromFile(filename, bst);
//
//	cout << "Employee Management (file: " << filename << ")\n";
//
//	for (;;)
//	{
//		cout << "\n1:Add  2:Delete  3:Search  4:PrintAsc  5:PrintDesc  6:Save+Exit\n> ";
//		int opt;
//		if (!(cin >> opt))
//		{
//			cout << "Invalid input. Try again.\n";
//			cin.clear();
//			continue;
//		}
//
//		if (opt == 1)
//		{
//			cout << "Enter: ID First Last Dept Salary\n> ";
//			int id, salary;
//			string first, last, dept;
//			if (!(cin >> id >> first >> last >> dept >> salary))
//			{
//				cout << "Bad input.\n";
//				cin.clear();
//				continue;
//			}
//			Employee e(id, first, last, dept, salary);
//			cout << (bst.insert(e) ? "Added.\n" : "ID exists.\n");
//		}
//		else if (opt == 2)
//		{
//			cout << "ID to delete: ";
//			int id;
//			if (!(cin >> id)) 
//			{
//				cin.clear();
//				continue; 
//			}
//			cout << (bst.remove(id) ? "Deleted.\n" : "Not found.\n");
//		}
//		else if (opt == 3)
//		{
//			cout << "ID to search: ";
//			int id;
//			if (!(cin >> id))
//			{
//				cin.clear();
//				continue;
//			}
//			Employee* f = bst.search(id);
//			cout << (f ? ("Found: " + f->toString() + "\n") : "Not found.\n");
//		}
//		else if (opt == 4) bst.printAscending();
//		else if (opt == 5) bst.printDescending();
//		else if (opt == 6)
//		{
//			bst.saveToFile(filename);
//			cout << "Saved. Bye.\n";
//			break;
//		}
//		else cout << "Invalid option.\n";
//	}
//
//	return 0;
//}