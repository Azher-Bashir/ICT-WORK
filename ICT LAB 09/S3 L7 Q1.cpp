//#include <iostream>
// #include <algorithm>
//using namespace std;
//template<class DT>
//class BNode
//{
//public:
//	BNode() : data(NULL), leftchild(nullptr), rightchild(nullptr)
//	{
//	}
//	void setLeftChild(BNode<DT>* n)
//	{
//		leftchild = n;
//	}
//	BNode<DT>* getLeftChild()
//	{
//		return leftchild;
//	}
//	void setRightChild(BNode<DT>* n)
//	{
//		rightchild = n;
//	}
//	BNode<DT>* getRightChild()
//	{
//		return rightchild;
//	}
//	void setData(DT pdate)
//	{
//		data = pdate;
//	}
//	DT getData()
//	{
//		return data;
//	}
//private:
//	DT data;
//	BNode* leftchild;
//	BNode* rightchild;
//};
//template<class DT>
//class BinaryTree
//{
//public:
//	//part1: constructor
//	BinaryTree()
//	{
//		root = nullptr;
//	}
//	//part 2:
//	//Build the binary tree from the data given in the array.
//	//If a node doesn't exist the array element is 0
//	void BuildTree(DT* Arr, int Size)
//	{
//		if (Size <= 1 || Arr == nullptr) return; // Safety check
//
//		BNode<DT>** child = new BNode<DT>*[Size];
//
//		for (int i = 1; i < Size; ++i)
//		{
//			if (Arr[i] != 0) // Only allocate if data is non-zero
//			{
//				child[i] = new BNode<DT>();
//				child[i]->setData(Arr[i]);
//			}
//			else
//			{
//				child[i] = nullptr;
//			}
//		}
//
//		for (int i = 1; i < Size; ++i)
//		{
//			if (child[i] != nullptr)
//			{
//				int left_index = 2 * i;
//				int right_index = 2 * i + 1;
//
//				if (left_index < Size && child[left_index] != nullptr)
//				{
//					child[i]->setLeftChild(child[left_index]);
//				}
//				if (right_index < Size && child[right_index] != nullptr)
//				{
//					child[i]->setRightChild(child[right_index]);
//				}
//			}
//		}
//
//		if (child[1] != nullptr)
//		{
//			root = child[1]; // Assign root properly
//		}
//
//		// Optional: delete[] newNode if not needed after tree is built
//	}
//
//	//part3: post order traversal (recursive)
//	//you may call any other function with parameters which might be needed
//
//	void PostOrder()
//	{
//		postOrder(root);
//	}
//	
//	//part4: pre order traversal (recursive)
//	// you may call any other function with parameters which might be needed
//	//
//	void PreOrder()
//	{
//		preOrder(root);
//	 }
//	
//	//part5: in order traversal (recursive)
//	// you may call any other function with parameters which might be needed
//	//
//	void InOrder()
//	{
//		inOrder(root);
//	 }
//	
//	// part6: prints the height of the binary tree, you may pass any parameters needed
//	
//	int calculateDepth()
//	{
//		return CalculateHeight(root);
//	}
//private:
//	// you may add any other private members which might be needed by recursive functions
//	BNode<DT>* root;
//	void inOrder(BNode<DT>* node)
//	{
//		if (node != nullptr)
//		{
//			inOrder(node->getLeftChild());
//			cout << node->getData() << " ";
//			inOrder(node->getRightChild());
//		}
//	}
//	void preOrder(BNode<DT>* node)
//	{
//		if (node != nullptr)
//		{
//			cout << node->getData() << " ";
//			preOrder(node->getLeftChild());
//			preOrder(node->getRightChild());
//		}
//	}
//	void postOrder(BNode<DT>* node)
//	{
//		if (node != nullptr)
//		{
//			postOrder(node->getLeftChild());
//			postOrder(node->getRightChild());
//			cout << node->getData() << " ";
//		}
//	}
//
//	int CalculateHeight(BNode<DT>* node)
//	{
//		if (node == nullptr)
//			return 0;
//		else
//		{
//			int leftHeight = CalculateHeight(node->getLeftChild());
//			int rightHeight = CalculateHeight(node->getRightChild());
//			return max(leftHeight, rightHeight) + 1;
//		}
//	}
//	
//};
//int main()
//{
//	//creating an object of binary tree
//	BinaryTree<int>* BT = new BinaryTree<int>();
//	//array to pass, 0 means no node exists
//	int Arr[15] = { 0,1,2,3,4,5,6,7,8,9,10,0,12,13,14 };
//	cout << "***************************************************" << endl;
//	BT->BuildTree(Arr, 15); //building the tree from the array
//	cout << endl << "***************************************************" << endl;
//	cout << "Preorder Traversal(Recursive) is: " << endl;
//	BT->PreOrder();
//	cout << endl << "***************************************************" << endl;
//	cout << "Post order Traversal(Recursive) is: " << endl;
//	BT->PostOrder();
//	cout << endl << "***************************************************" << endl;
//	cout << "Inorder Traversal(Recursive) is: " << endl;
//	BT->InOrder();
//	cout << endl << "***************************************************" << endl;
//	cout << "Height of the Binary Tree is: ";
//	cout << BT->calculateDepth();
//	cout << endl << "***************************************************" << endl;
//	return 0;
//}