//#include <iostream>
//using namespace std;
//template <typename DT>
//class node
//{
//private:
//	Node* left;
//	Node* Right;
//	DT data;
//public:
//	node(DT val)
//	{
//		data = val;
//		left = NULL;
//		right = NULL;
//	}
//
//};
//
//template <typename DT>
//class BTsearch
//{
//private:
//	DT data;
//public:
//	BTsearch(DT val)
//	{
//		data = val;
//		left = NULL;
//		right = NULL;
//	}
//	BTsearch <DT>* insert(BTsearch<DT>* root, DT val)
//	{
//		//node* root = root;
//		if (root == nullptr)
//		{
//			return new BTnode<DT>*(val);
//		}
//		if (val < root->data)
//		{
//			root->left = insert(root->left, val);
//		}
//		else
//		{
//			root->right = insert(root->right, val);
//		}
//		return root;
//	}
//	bool Delete(DT val)
//	{
//		if (root == nullptr)
//		{
//			delete root;
//			return true;
//		}
//		while (root != value)
//		{
//			if (val < root->data)
//			{
//				root = root->left;
//			}
//			else
//			{
//				root = root->right;
//			}
//		}
//		if (root->left == nullptr && root->right == nullptr)
//		{
//			delete root;
//			root == nullptr;
//		}
//		if (root->left != nullptr || root->right != nullptr)
//		{
//			node* temp = root;
//			if (root->left != nullptr)
//			{
//				root = root->left;
//				delete temp;
//				return true
//			}
//		}
//	}
//};
//
//
//
//
//
//
//
//int main()
//{
//
//}