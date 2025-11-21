//#include <iostream>
//#include <stack>
//using namespace std;
//template <class DT>
//class BT
//{
//private:
//	node* root;
//public:
//	BT();
//	bool insert(DT data)
//	{
//
//	}
//
//};
//template <class DT>
//class node {
//public:
//	int data;
//	node* left;
//	node* right;
//	node(int val) {
//		data = val;
//		left = nullptr;
//		right = nullptr;
//	}
//	void inorderTraversal(node* root)
//	{
//		node* curr = root;
//		stack<node*> st;
//		while (curr != nullptr || st.empty())
//		{
//			while (curr != nullptr)
//			{
//				st.push(curr);
//				curr = curr->left;
//			}
//			curr = st.top();
//			st.pop();
//			cout << curr->data << " ";
//			curr = curr->right;
//		}
//	}
//	void preorderTraversal(node* root)
//	{
//		node* curr = root;
//		stack<node*> st;
//		st.push(curr);
//		while (!st.empty()) {
//			curr = st.top();
//			st.pop();
//			cout << curr->data << " ";
//			if (right)
//			{
//				st.push(curr->right);
//			}
//			
//			if (left)
//			{
//				st.push(curr->left);
//			}
//		}
//	}
//	void postorderTraversal(node* root)
//	{
//		node* curr = root;
//		stack<node*> st1, st2;
//		st1.push(curr);
//		while (!st1.empty()) {
//			curr = st1.top();
//			st1.pop();
//			st2.push(curr);
//			//cout << curr->data << " ";
//			if (right)
//			{
//				st1.push(curr->right);
//			}
//
//			if (left)
//			{
//				st1.push(curr->left);
//			}
//		}
//		while (!st2.empty())
//		{
//			cout << st2.top()->data << " ";
//			st2.pop();
//		}
//	}
//	bool search(DT data)
//	{
//
//		if(data < )
//	}
//};
