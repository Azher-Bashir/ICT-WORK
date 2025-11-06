//#include <iostream>
//
//using namespace std;
//
//// --- Forward Declarations ---
//class TreeNode;
//class TernaryNode;
//class ParentNode;
//
//// --- Node Classes ---
//
//// TreeNode Class (Used in BinaryTree, Stack, Queue)
//class TreeNode {
//public:
//    int key;
//    TreeNode* left;
//    TreeNode* right;
//
//    TreeNode(int val) : key(val), left(nullptr), right(nullptr) {}
//};
//
//// TernaryNode Class (For Problem 5)
//class TernaryNode {
//public:
//    int key;
//    TernaryNode* child1;
//    TernaryNode* child2;
//    TernaryNode* child3;
//
//    TernaryNode(int val) : key(val), child1(nullptr), child2(nullptr), child3(nullptr) {}
//};
//
//// ParentNode Class (For Problem 8)
//class ParentNode {
//public:
//    int key;
//    ParentNode* left;
//    ParentNode* right;
//    ParentNode* parent;
//
//    ParentNode(int val, ParentNode* p = nullptr) : key(val), left(nullptr), right(nullptr), parent(p) {}
//};
//
//
//// --- Auxiliary Data Structure Classes ---
//
//// Stack implementation for Binary Tree Nodes (For Problem 6)
//class Stack {
//private:
//    class StackNode {
//    public:
//        TreeNode* tree_node;
//        StackNode* next;
//        StackNode(TreeNode* node) : tree_node(node), next(nullptr) {}
//    };
//    StackNode* top;
//
//public:
//    Stack() : top(nullptr) {}
//    ~Stack() {
//        while (!isEmpty()) {
//            if (top != nullptr) {
//                StackNode* temp = top;
//                top = top->next;
//                delete temp;
//            }
//        }
//    }
//
//    void push(TreeNode* node) {
//        StackNode* newNode = new StackNode(node);
//        newNode->next = top;
//        top = newNode;
//    }
//
//    TreeNode* pop() {
//        if (isEmpty()) {
//            return nullptr;
//        }
//        StackNode* temp = top;
//        TreeNode* data = temp->tree_node;
//        top = top->next;
//        delete temp;
//        return data;
//    }
//
//    bool isEmpty() const {
//        if (top == nullptr) {
//            return true;
//        }
//        else {
//            return false;
//        }
//    }
//};
//
//// Queue implementation for Binary Tree Nodes (For Problem 6)
//class Queue {
//private:
//    class QueueNode {
//    public:
//        TreeNode* tree_node;
//        QueueNode* next;
//        QueueNode(TreeNode* node) : tree_node(node), next(nullptr) {}
//    };
//    QueueNode* front;
//    QueueNode* rear;
//
//public:
//    Queue() : front(nullptr), rear(nullptr) {}
//    ~Queue() {
//        while (!isEmpty()) {
//            if (front != nullptr) {
//                QueueNode* temp = front;
//                front = front->next;
//                if (front == nullptr) {
//                    rear = nullptr;
//                }
//                delete temp;
//            }
//        }
//    }
//
//    void enqueue(TreeNode* node) {
//        QueueNode* newNode = new QueueNode(node);
//        if (isEmpty()) {
//            front = rear = newNode;
//        }
//        else {
//            rear->next = newNode;
//            rear = newNode;
//        }
//    }
//
//    TreeNode* dequeue() {
//        if (isEmpty()) {
//            return nullptr;
//        }
//        QueueNode* temp = front;
//        TreeNode* data = temp->tree_node;
//        front = front->next;
//        if (front == nullptr) {
//            rear = nullptr;
//        }
//        delete temp;
//        return data;
//    }
//
//    bool isEmpty() const {
//        if (front == nullptr) {
//            return true;
//        }
//        else {
//            return false;
//        }
//    }
//};
//
//// Stack for Ternary Nodes (Renamed for Problem 5)
//class TNodeStack {
//private:
//    class TStackNode {
//    public:
//        TernaryNode* t_node;
//        TStackNode* next;
//        TStackNode(TernaryNode* node) : t_node(node), next(nullptr) {}
//    };
//    TStackNode* top;
//
//public:
//    TNodeStack() : top(nullptr) {}
//    ~TNodeStack() {
//        while (!isEmpty()) {
//            TStackNode* temp = top;
//            top = top->next;
//            delete temp;
//        }
//    }
//    void push(TernaryNode* node) {
//        TStackNode* newNode = new TStackNode(node);
//        newNode->next = top;
//        top = newNode;
//    }
//    TernaryNode* pop() {
//        if (isEmpty()) return nullptr;
//        TStackNode* temp = top;
//        TernaryNode* data = temp->t_node;
//        top = top->next;
//        delete temp;
//        return data;
//    }
//    bool isEmpty() const {
//        if (top == nullptr) {
//            return true;
//        }
//        else {
//            return false;
//        }
//    }
//};
//
//
//// --- Binary Tree Class (Implementation for Problems 2, 3, 4, 6, 7, 9, 10) ---
//class BinaryTree {
//public:
//    TreeNode* root;
//
//    BinaryTree() : root(nullptr) {}
//    ~BinaryTree() {
//        deleteTree(root);
//    }
//
//private:
//    void deleteTree(TreeNode* node) {
//        if (node == nullptr) return;
//        deleteTree(node->left);
//        deleteTree(node->right);
//        delete node;
//    }
//
//    // Problem 2 Helper
//    bool PrintAncestorsHelper(TreeNode* node, int value) {
//        if (node == nullptr) {
//            return false;
//        }
//        if (node->key == value) {
//            return true;
//        }
//        if (PrintAncestorsHelper(node->left, value) || PrintAncestorsHelper(node->right, value)) {
//            cout << node->key << " ";
//            return true;
//        }
//        return false;
//    }
//
//    // Problem 4 Helper
//    TreeNode* trimTreeHelper(TreeNode* node, int d, int current_level) {
//        if (node == nullptr) {
//            return nullptr;
//        }
//
//        if (current_level > d) {
//            deleteTree(node);
//            return nullptr;
//        }
//
//        if (current_level == d) {
//            deleteTree(node->left);
//            node->left = nullptr;
//            deleteTree(node->right);
//            node->right = nullptr;
//            return node;
//        }
//
//        node->left = trimTreeHelper(node->left, d, current_level + 1);
//        node->right = trimTreeHelper(node->right, d, current_level + 1);
//
//        return node;
//    }
//
//    // Problem 7 Helper
//    bool IsBSTHelper(TreeNode* node, int min, int max) {
//        if (node == nullptr) {
//            return true;
//        }
//        if (node->key <= min || node->key >= max) {
//            return false;
//        }
//
//        bool left_is_bst = IsBSTHelper(node->left, min, node->key);
//        bool right_is_bst = IsBSTHelper(node->right, node->key, max);
//
//        if (left_is_bst && right_is_bst) {
//            return true;
//        }
//        else {
//            return false;
//        }
//    }
//
//    // Problem 9 Helper
//    int NodesCountHelper(TreeNode* node, int d, int current_level) {
//        if (node == nullptr) {
//            return 0;
//        }
//
//        int count;
//        if (current_level >= d) {
//            count = 1;
//        }
//        else {
//            count = 0;
//        }
//
//        count += NodesCountHelper(node->left, d, current_level + 1);
//        count += NodesCountHelper(node->right, d, current_level + 1);
//        return count;
//    }
//
//    // Problem 3 Helper
//    int calculateDepthHelper(TreeNode* node) {
//        if (node == nullptr) {
//            return 0;
//        }
//        int left_depth = calculateDepthHelper(node->left);
//        int right_depth = calculateDepthHelper(node->right);
//
//        if (left_depth > right_depth) {
//            return 1 + left_depth;
//        }
//        else {
//            return 1 + right_depth;
//        }
//    }
//
//
//public:
//    // Problem 2: Print Ancestors (Recursive)
//    void PrintAncestors(int value) {
//        cout << "Ancestors of " << value << " are: ";
//        if (!PrintAncestorsHelper(root, value)) {
//            cout << "None (Value not found or is the root)." << endl;
//        }
//        else {
//            cout << "(Ancestors printed from nearest to root)." << endl;
//        }
//    }
//
//    // Problem 3: Calculate Depth (Recursive)
//    int calculateDepth() {
//        return calculateDepthHelper(root);
//    }
//
//    // Problem 4: trimTree (Recursive)
//    void trimTree(int d) {
//        root = trimTreeHelper(root, d, 1);
//    }
//
//    // Problem 6: Count Degree Two Nodes (Iterative with Queue)
//    int countDegreeTwoNodes() {
//        if (root == nullptr) {
//            return 0;
//        }
//        Queue q;
//        q.enqueue(root);
//        int count = 0;
//
//        while (!q.isEmpty()) {
//            TreeNode* current = q.dequeue();
//            if (current->left != nullptr && current->right != nullptr) {
//                count++;
//            }
//            if (current->left != nullptr) {
//                q.enqueue(current->left);
//            }
//            if (current->right != nullptr) {
//                q.enqueue(current->right);
//            }
//        }
//        return count;
//    }
//
//    // Problem 7: Is Binary Search Tree (Recursive)
//    bool IsBST() {
//        return IsBSTHelper(root, -2147483647, 2147483647);
//    }
//
//    // Problem 9: NodesCount (Recursive)
//    int NodesCount(int d) {
//        return NodesCountHelper(root, d, 1);
//    }
//
//    // Problem 10: Structural Intersection (Recursive)
//    TreeNode* structuralIntersection(TreeNode* rootA, TreeNode* rootB) {
//        if (rootA == nullptr || rootB == nullptr) {
//            return nullptr;
//        }
//
//        int new_key;
//        if (rootA->key < rootB->key) {
//            new_key = rootA->key;
//        }
//        else {
//            new_key = rootB->key;
//        }
//
//        TreeNode* new_node = new TreeNode(new_key);
//        new_node->left = structuralIntersection(rootA->left, rootB->left);
//        new_node->right = structuralIntersection(rootA->right, rootB->right);
//        return new_node;
//    }
//};
//
//// --- Ternary Tree Class (Implementation for Problem 5) ---
//class TernaryTree {
//public:
//    // Problem 5: PreOrderTernary (Non-recursive with Stack)
//    void PreOrderTernary(TernaryNode* root) {
//        if (root == nullptr) {
//            return;
//        }
//        TNodeStack s; // Renamed stack class used here
//        s.push(root);
//
//        while (!s.isEmpty()) {
//            TernaryNode* current = s.pop();
//            cout << current->key << " ";
//
//            // Push R, M, L in reverse order (LIFO) to achieve V, L, M, R traversal order
//            if (current->child3 != nullptr) {
//                s.push(current->child3);
//            }
//            if (current->child2 != nullptr) {
//                s.push(current->child2);
//            }
//            if (current->child1 != nullptr) {
//                s.push(current->child1);
//            }
//        }
//        cout << endl;
//    }
//};
//
//// --- Problem 8: Lowest Common Ancestor (Node with Parent Pointer) ---
//
//int getNodeDepth(ParentNode* node) {
//    int depth = 0;
//    while (node != nullptr) {
//        node = node->parent;
//        depth++;
//    }
//    return depth;
//}
//
//ParentNode* lowest_common_ancestor(ParentNode* a, ParentNode* b) {
//    if (a == nullptr || b == nullptr) return nullptr;
//
//    int depthA = getNodeDepth(a);
//    int depthB = getNodeDepth(b);
//
//    // Bring the deeper node up to the same level
//    if (depthA > depthB) {
//        while (depthA > depthB) {
//            a = a->parent;
//            depthA--;
//        }
//    }
//    else { // depthB >= depthA
//        while (depthB > depthA) {
//            b = b->parent;
//            depthB--;
//        }
//    }
//
//    // Traverse upwards simultaneously until the pointers meet
//    while (a != b) {
//        if (a == nullptr || b == nullptr) {
//            return nullptr;
//        }
//        a = a->parent;
//        b = b->parent;
//    }
//
//    return a;
//}