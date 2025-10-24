#include <iostream>
#include <stack>
#include <queue>
using namespace std;
template<class DT>
class BNode
{
public:
	BNode() : data(NULL), leftchild(nullptr), rightchild(nullptr)
	{
	}
	void setLeftChild(BNode<DT>* n)
	{
		leftchild = n;
	}
	BNode<DT>* getLeftChild()
	{
		return leftchild;
	}
	void setRightChild(BNode<DT>* n)
	{
		rightchild = n;
	}
	BNode<DT>* getRightChild()
	{
		return rightchild;
	}
	void setData(DT pdate)
	{
		data = pdate;
	}
	DT getData()
	{
		return data;
	}
private:
	DT data;
	BNode* leftchild;
	BNode* rightchild;
};
template<class DT>
class BinaryTree
{
public:
	//part1: constructor
	BinaryTree()
	{
		root = nullptr;
	}
	//part 2:
	//Build the binary tree from the data given in the array.
	//If a node doesn't exist the array element is 0
	void BuildTree(DT* Arr, int Size)
	{
		if (Size <= 1 || Arr == nullptr) return; // Safety check

		BNode<DT>** child = new BNode<DT>*[Size];

		for (int i = 1; i < Size; ++i)
		{
			if (Arr[i] != 0) // Only allocate if data is non-zero
			{
				child[i] = new BNode<DT>();
				child[i]->setData(Arr[i]);
			}
			else
			{
				child[i] = nullptr;
			}
		}

		for (int i = 1; i < Size; ++i)
		{
			if (child[i] != nullptr)
			{
				int left_index = 2 * i;
				int right_index = 2 * i + 1;

				if (left_index < Size && child[left_index] != nullptr)
				{
					child[i]->setLeftChild(child[left_index]);
				}
				if (right_index < Size && child[right_index] != nullptr)
				{
					child[i]->setRightChild(child[right_index]);
				}
			}
		}

		if (child[1] != nullptr)
		{
			root = child[1]; // Assign root properly
		}

		// Optional: delete[] newNode if not needed after tree is built
	}

	//part3: post order traversal (recursive)
	//you may call any other function with parameters which might be needed

	void PostOrder()
	{
		postOrder(root);
	}

	//part4: pre order traversal (recursive)
	// you may call any other function with parameters which might be needed
	//
	void PreOrder()
	{
		preOrder(root);
	}

	//part5: in order traversal (recursive)
	// you may call any other function with parameters which might be needed
	//
	void InOrder()
	{
		inOrder(root);
	}

	// part6: prints the height of the binary tree, you may pass any parameters needed
	void LevelOrder()
	{
		levelOrder(root);
	}
	int calculateDepth()
	{
		return CalculateHeight(root);
	}
private:
	// you may add any other private members which might be needed by recursive functions
	BNode<DT>* root;
	//void inOrder(BNode<DT>* node)
	//{
	//	if (node != nullptr)
	//	{
	//		inOrder(node->getLeftChild());
	//		cout << node->getData() << " ";
	//		inOrder(node->getRightChild());
	//	}
	//}

	void inOrder(BNode<DT>* node)
	{
		if (node != nullptr)
		{
			if (root == nullptr)
				return;
			stack<BNode<DT>*> s;
			BNode<DT>* current = root;
			while (current != nullptr || s.empty() != true)
			{
				while (current != nullptr)
				{
					s.push(current);
					current = current->getLeftChild();
				}
				current = s.top();
				s.pop();
				cout << current->getData() << " ";
				current = current->getRightChild();

			}
		}
	}
	void preOrder(BNode<DT>* node)
	{
		if (node != nullptr)
		{
			if (root == nullptr)
				return;
			stack<BNode<DT>*> s;
			BNode<DT>* current = root;
			while (current != nullptr || s.empty() != true)
			{
				while (current != nullptr)
				{
					s.push(current);
					cout << current->getData() << " ";
					current = current->getLeftChild();
				}
				current = s.top();
				s.pop();
				current = current->getRightChild();

			}
		}
	}
	void postOrder(BNode<DT>* node)
	{
		if (node == nullptr) return;

		stack<BNode<DT>*> s1;
		stack<BNode<DT>*> s2;

		s1.push(node);
		while (!s1.empty())
		{
			BNode<DT>* curr = s1.top();
			s1.pop();
			s2.push(curr);

			// push left then right so that right is processed before left
			if (curr->getLeftChild() != nullptr)
				s1.push(curr->getLeftChild());
			if (curr->getRightChild() != nullptr)
				s1.push(curr->getRightChild());
		}

		// s2 contains nodes in reverse-postorder: pop to print postorder
		while (!s2.empty())
		{
			cout << s2.top()->getData() << " ";
			s2.pop();
		}
	}
	int levelOrder(BNode<DT>* node)
	{
		if (node == nullptr)
			return 0;
		queue<BNode<DT>*> q;
		q.push(node);
		while (!q.empty())
		{
			BNode<DT>* current = q.front();
			q.pop();
			cout << current->getData() << " ";
			if (current->getLeftChild() != nullptr) {
				q.push(current->getLeftChild());
			}
			if (current->getRightChild() != nullptr) {
				q.push(current->getRightChild());
			}
		}
		return 0;
	}


	int CalculateHeight(BNode<DT>* node)
	{
		if (node == nullptr) return 0;

		queue<BNode<DT>*> q;
		q.push(node);
		int height = 0;

		while (!q.empty())
		{
			// use size_t (no cast) and a simple countdown loop
			int nodes = q.size();
			//while (nodes-- > 0)
			//while (!q.empty())
			for(int i = 0; i < nodes; i++)
			{
				BNode<DT>* curr = q.front();
				q.pop();
				if (curr->getLeftChild() != nullptr)
					q.push(curr->getLeftChild());
				if (curr->getRightChild() != nullptr)
					q.push(curr->getRightChild());
			}
			++height;
		}

		return height;
	}

};
int main()
{
	//creating an object of binary tree
	BinaryTree<int>* BT = new BinaryTree<int>();
	//array to pass, 0 means no node exists
	int Arr[15] = { 0,1,2,3,4,5,6,7,8,9,10,0,12,13,14 };
	cout << "***************************************************" << endl;
	BT->BuildTree(Arr, 15); //building the tree from the array
	cout << endl << "***************************************************" << endl;
	cout << "Preorder Traversal(Iterative) is: " << endl;
	BT->PreOrder();
	cout << endl << "***************************************************" << endl;
	cout << "Post order Traversal(Iterative) is: " << endl;
	BT->PostOrder();
	cout << endl << "***************************************************" << endl;
	cout << "Inorder Traversal(Iterative) is: " << endl;
	BT->InOrder();
	cout << endl << "***************************************************" << endl;
	cout << "Height of the Binary Tree (Iterative) is: ";
	cout << BT->calculateDepth();
	cout << endl << "***************************************************" << endl;
	BT-> LevelOrder();
	cout << endl << "***************************************************" << endl;
	return 0;
}