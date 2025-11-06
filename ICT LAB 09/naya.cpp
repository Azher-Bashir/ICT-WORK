//#include <iostream>
//using namespace std;
//
//template< class DT>
//class BNode {
//public:
//	BNode() {
//		data = DT();
//		leftchild = nullptr;
//		rightchild = nullptr;
//	}
//	void setLeftChild(BNode< DT>* n) {
//		leftchild = n;
//	}
//	BNode< DT>* getLeftChild() {
//		return leftchild;
//	}
//	void setRightChild(BNode< DT>* n) {
//		rightchild = n;
//	}
//	BNode< DT>* getRightChild() {
//		return rightchild;
//	}
//	void setData(DT pdate) {
//		data = pdate;
//	}
//
//	DT getData() {
//		return data;
//	}
//private:
//	DT data;
//	BNode< DT>* leftchild;
//	BNode< DT>* rightchild;
//};
//
//template< class DType>
//class BinarySearchTree {
//public:
//	BinarySearchTree() {
//		root = nullptr;
//	}
//
//	bool insert(const DType data) {
//		if (root == nullptr) {
//			root = new BNode < DType>;
//			root->setData(data);
//			return true;
//		}
//		BNode< DType>* curr = root;
//		BNode< DType>* parent = nullptr;
//		while (curr != nullptr) {
//			parent = curr;
//			if (curr->getData() == data) {
//
//				return false;
//			}
//			if (curr->getData() < data) {
//				curr = curr->getRightChild();
//			}
//			else {
//				curr = curr->getLeftChild();
//			}
//		}
//		BNode< DType>* pnew = new BNode < DType>;
//		pnew->setData(data);
//		if (data < parent->getData()) {
//			parent->setLeftChild(pnew);
//		}
//		else {
//			parent->setRightChild(pnew);
//		}
//		return true;
//	}
//
//	BNode< DType>* search(const DType data) {
//		BNode<DType>* curr = root;
//		while (curr != nullptr) {
//			if (curr->getData() == data) {
//				return curr;
//			}
//			else if (data < curr->getData()) {
//
//				curr = curr->getLeftChild();
//			}
//			else {
//				curr = curr->getRightChild();
//			}
//		}
//		return nullptr;
//	}
//
//	bool deleteNode(const DType data) {
//		BNode< DType>* curr = root;
//		BNode< DType>* parent = nullptr;
//		if (curr == nullptr) return false;
//		while (curr != nullptr && curr->getData() != data) {
//			parent = curr;
//			if (curr->getData() > data ) {
//				curr = curr->getLeftChild();
//			}
//			else {
//				curr = curr->getRightChild();
//			}
//		}
//		// IF NO CHILD
//		if (curr->getLeftChild() == nullptr && curr->getRightChild() == nullptr) {
//			if (curr == root) 
//				root = nullptr;
//			else if (parent->getLeftChild() == curr) 
//				parent->setLeftChild(nullptr);
//			else 
//				parent->setRightChild(nullptr);
//
//			delete curr;
//		}
//		//IF ONLY ONE CHILD
//		else if (curr->getLeftChild() == nullptr || curr->getRightChild() == nullptr) {
//			BNode< DType>* child = (curr->getLeftChild()) ? curr->getLeftChild() :
//
//				curr->getRightChild(); // I am using ternary operator here, instead of if else
//
//			if (curr == root) root = child;
//			else if (parent->getLeftChild() == curr) parent->setLeftChild(child);
//			else parent->setRightChild(child);
//			delete curr;
//		}
//		// for 2 childs
//		else {
//			BNode< DType>* succParent = curr;
//			BNode< DType>* succ = curr->getRightChild();
//			while (succ->getLeftChild() != nullptr) {
//				succParent = succ;
//				succ = succ->getLeftChild();
//			}
//			curr->setData(succ->getData());
//			if (succParent->getLeftChild() == succ) {
//				succParent->setLeftChild(succ->getRightChild());
//			}
//			else {
//				succParent->setRightChild(succ->getRightChild());
//			}
//			delete succ;
//		}
//		return true;
//
//	}
//
//	bool deleteData(const DType data) {
//		return deleteNode(data);
//	}
//	void printSorted() {
//		inOrder(root);
//		cout << endl;
//	}
//	~BinarySearchTree() {
//		deleteTree(root);
//	}
//
//private:
//	BNode< DType>* root;
//
//	void deleteTree(BNode< DType>* node) {
//		if (!node) return;
//		deleteTree(node->getLeftChild());
//		deleteTree(node->getRightChild());
//		delete node;
//	}
//	void inOrder(BNode< DType>* node) {
//		if (!node) return;
//		inOrder(node->getLeftChild());
//		cout << node->getData() << " ";
//		inOrder(node->getRightChild());
//
//	}
//
//};
//
//int main() {
//	BinarySearchTree< int>* BST = new BinarySearchTree < int>();
//
//	BST->insert(12);
//	BST->insert(4);
//	BST->insert(9);
//	BST->insert(2);
//	BST->insert(14);
//	BST->insert(16);
//	BST->insert(13);
//
//	BST->printSorted();
//	if (BST->deleteData(16)) {
//		cout << " Node carrying 16 deleted. " << endl;
//	}
//
//	if (BST->deleteData(2)) {
//		cout << " Node carrying 2 deleted. " << endl;
//	}
//
//	if (BST->deleteData(12)) {
//		cout << " Node carrying 12 deleted. " << endl;
//	}
//
//	BST->printSorted();
//	delete BST;
//	return 0;
//}