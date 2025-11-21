//#include <iostream>
////#include <new>
//#include <stack>
//#include <queue>
//using namespace std;
//
//template <class DT>
//class BNode {
//public:
//	BNode()
//	{
//		data = 0;
//		leftchild = nullptr;
//		rightchild = nullptr;
//
//	}
//	void setLeftChild(BNode<DT>* n)
//	{
//		leftchild = n;
//	}
//	void setRightChild(BNode<DT>* n)
//	{
//		rightchild = n;
//	}
//	void setData(DT pdata)
//	{
//		data = pdata;
//	}
//
//	BNode<DT>* getLeftChild()
//	{
//		return leftchild;
//	}
//	BNode<DT>* getRightChild()
//	{
//		return rightchild;
//	}
//	DT getData()
//	{
//		return data;
//	}
//
//private:
//	DT data;
//	BNode<DT>* leftchild;
//	BNode<DT>* rightchild;
//};
//template<class DType>
//class BinarySearchTree {
//public:
//	BinarySearchTree()
//	{
//		root = nullptr;
//	}
//
//	//bool insert(const DType data)
//	//{
//	//	if (root == nullptr)
//	//	{
//	//		root = new BNode<DType>();
//	//		root->setData(data);
//	//		return true;
//	//	}
//	//	queue<BNode<DType>*> q;
//	//	q.push(root);
//	//	while (!q.empty())
//	//	{
//	//		BNode<DType>* troot = q.front();
//	//		q.pop();
//	//		//insert at left if empty
//	//		if (troot->getLeftChild() == nullptr)
//	//		{
//	//			BNode<DType>* n = new BNode<DType>();
//	//			n->setData(data);
//	//			troot->setLeftChild(n);
//	//			return true;
//	//			//troot->getLeftChild()->setData(data);
//	//			return true;
//	//		}
//	//		else
//	//		{
//	//			q.push(troot->getLeftChild());
//	//		}
//	//		if (troot->getRightChild() != nullptr)
//	//		{
//	//			BNode<DType>* n = new BNode<DType>();
//	//			n->setData(data);
//	//			troot->setRightChild(n);
//	//			return true;
//	//			//troot->getRightChild()->setData(data);
//	//			return true;
//	//		}
//	//		else
//	//		{
//	//			q.push(troot->getRightChild());
//	//		}
//	//		return false;
//	//	}
//	//}
//	bool insert(const DType data)
//	{
//		// Case 1: Tree empty
//		if (root == nullptr)
//		{
//			root = new BNode<DType>();
//			root->setData(data);
//			return true;
//		}
//
//		queue<BNode<DType>*> q;
//		q.push(root);
//
//		while (!q.empty())
//		{
//			BNode<DType>* troot = q.front();
//			q.pop();
//
//			// Left child insert
//			if (troot->getLeftChild() == nullptr)
//			{
//				BNode<DType>* n = new BNode<DType>();
//				n->setData(data);
//				troot->setLeftChild(n);
//				return true;
//			}
//			else
//			{
//				q.push(troot->getLeftChild());
//			}
//
//			// Right child insert
//			if (troot->getRightChild() == nullptr)
//			{
//				BNode<DType>* n = new BNode<DType>();
//				n->setData(data);
//				troot->setRightChild(n);
//				return true;
//			}
//			else
//			{
//				q.push(troot->getRightChild());
//			}
//		}
//
//		return false;
//	}
//
//
//	DType sumAtLevel(int level)
//	{
//		queue <BNode<DType>*> q;
//		q.push(root);
//		int currentLevel = 0;
//		while (!q.empty()) {
//			int levelsize = q.size();
//			if (currentLevel == level)
//			{
//				int sum = 0;
//				for (int i = 0; i < levelsize; i++)
//				{
//					BNode<DType>* curr = q.front();
//					q.pop();
//					sum += curr->getData();
//				}
//				return sum;
//			}
//
//			for (int i = 0; i < levelsize; i++)
//			{
//				BNode<DType>* curr = q.front();
//				q.pop();
//				if (curr->getLeftChild() != nullptr)
//				{
//					q.push(curr->getLeftChild());
//				}
//				if (curr->getRightChild() != nullptr)
//				{
//					q.push(curr->getRightChild());
//				}
//			}
//			currentLevel++;
//		}
//		return 0;
//	}
//
//	void printDescending()
//	{
//		if (root == nullptr)
//			return;
//		BNode<DType>* curr = root;
//		stack <BNode<DType>*> st;
//		while (curr != nullptr || !st.empty())
//		{
//			while (curr != nullptr)
//			{
//				st.push(curr);
//				//curr = curr->getLeftChild();
//				curr = curr->getRightChild();
//
//			}
//			curr = st.top();
//			st.pop();
//			cout << curr->getData() << " ";
//			//curr = curr->getRightChildChild();
//			curr = curr->getLeftChild();
//		}
//
//	}
//
//	~BinarySearchTree()
//	{
//			if (root == nullptr) return;
//
//			std::stack<BNode<DType>*> st;
//			st.push(root);
//
//			while (!st.empty())
//			{
//				BNode<DType>* node = st.top();
//				st.pop();
//				if (node->getLeftChild() != nullptr)  st.push(node->getLeftChild());
//				if (node->getRightChild() != nullptr) st.push(node->getRightChild());
//				delete node;
//			}
//			root = nullptr;
//	}
//	void levelOrderTraversal(Node* root) {
//		if (root == nullptr)
//			return;
//
//		queue<Node*> q;
//		q.push(root);
//
//		while (!q.empty()) {
//			Node* temp = q.front();
//			q.pop();
//
//			cout << temp->data << " ";
//
//			if (temp->left != nullptr)
//				q.push(temp->left);
//			if (temp->right != nullptr)
//				q.push(temp->right);
//		}
//private:
//	BNode<DType>* root;
//};
//// test code with the given main
//int main() {
//	BinarySearchTree<int>* BST = new BinarySearchTree<int>();
//
//	// Insert unique values
//	BST->insert(12);
//	BST->insert(4);
//	BST->insert(9);
//	BST->insert(2);
//	BST->insert(14);
//	BST->insert(16);
//	BST->insert(13);
//	if (!BST->insert(12))
//		cout << "Insertion failed: 12 already exists" << endl;
//
//	int level = 2;
//	cout << "Sum at level" << level << "=" << BST->sumAtLevel(level) << endl;
//
//	cout << "BST in descending order: ";
//	BST->printDescending();
//
//	delete BST;
//	return 0;
//}