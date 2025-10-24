//#include <iostream>
//#include <fstream>
//using namespace std;
//
//class queueNode
//{
//public:
//    int value;
//    queueNode* nextQueueNode;
//
//    queueNode(int v = 0)
//    {
//        value = v;
//        nextQueueNode = nullptr;
//    }
//
//    void pushBack(int val)
//    {
//        queueNode* cur = this;
//        while (cur->nextQueueNode != nullptr)
//        {
//            cur = cur->nextQueueNode;
//        }
//        queueNode* node = new queueNode(val);
//        cur->nextQueueNode = node;
//    }
//};
//
//template <typename T>
//class stackNode
//{
//public:
//    T* value;
//    stackNode* nextStackNode;
//
//    stackNode(T* v = nullptr)
//    {
//        value = v;
//        nextStackNode = nullptr;
//    }
//};
//
//class stack
//{
//public:
//    stackNode<queueNode>* stackHead;
//
//    stack()
//    {
//        stackHead = nullptr;
//    }
//
//    void pushBack(queueNode* value)
//    {
//        if (stackHead == nullptr)
//        {
//            stackHead = new stackNode<queueNode>(value);
//        }
//        else
//        {
//            stackNode<queueNode>* temp = stackHead;
//            while (temp->nextStackNode != nullptr)
//            {
//                temp = temp->nextStackNode;
//            }
//            temp->nextStackNode = new stackNode<queueNode>(value);
//        }
//    }
//
//    void reverseStack()
//    {
//        stackNode<queueNode>* prev = nullptr;
//        stackNode<queueNode>* curr = stackHead;
//        stackNode<queueNode>* next = nullptr;
//
//        while (curr != nullptr)
//        {
//            next = curr->nextStackNode;
//            curr->nextStackNode = prev;
//            prev = curr;
//            curr = next;
//        }
//        stackHead = prev;
//    }
//
//    void flipStack()
//    {
//        stackNode<queueNode>* r = stackHead;
//        while (r != nullptr)
//        {
//            queueNode* prev = nullptr;
//            queueNode* cur = r->value;
//            queueNode* next = nullptr;
//
//            while (cur != nullptr)
//            {
//                next = cur->nextQueueNode;
//                cur->nextQueueNode = prev;
//                prev = cur;
//                cur = next;
//            }
//            r->value = prev;
//            r = r->nextStackNode;
//        }
//    }
//};
//
//class Matrix
//{
//private:
//    stack* m;
//
//public:
//    Matrix()
//    {
//        m = new stack();
//    }
//
//    void setMatrix(stack* mm)
//    {
//        m = mm;
//    }
//
//    stack* addition(stack* mm);
//    stack* subtraction(stack* mm);
//    stack* multiplication(stack* mm);
//    stack* divsion(stack* mm);
//    stack* transpose(stack* mm);
//    void subMatrix(int rowStart, int rowEnd, int colStart, int colEnd);
//};
//
//stack* Matrix::addition(stack* mm)
//{
//    if (m == nullptr || mm == nullptr)
//    {
//        return nullptr;
//    }
//
//    stack* res = new stack;
//    stackNode<queueNode>* r1 = m->stackHead;
//    stackNode<queueNode>* r2 = mm->stackHead;
//
//    while (r1 && r2)
//    {
//        queueNode* q1 = r1->value;
//        queueNode* q2 = r2->value;
//
//        queueNode* rowHead = new queueNode(q1->value + q2->value);
//        queueNode* curNew = rowHead;
//
//        q1 = q1->nextQueueNode;
//        q2 = q2->nextQueueNode;
//
//        while (q1 && q2)
//        {
//            curNew->pushBack(q1->value + q2->value);
//            curNew = curNew->nextQueueNode;
//            q1 = q1->nextQueueNode;
//            q2 = q2->nextQueueNode;
//        }
//
//        res->pushBack(rowHead);
//
//        r1 = r1->nextStackNode;
//        r2 = r2->nextStackNode;
//    }
//
//    return res;
//}
//
//stack* Matrix::subtraction(stack* mm)
//{
//    if (m == nullptr || mm == nullptr)
//    {
//        return nullptr;
//    }
//
//    stack* res = new stack;
//    stackNode<queueNode>* r1 = m->stackHead;
//    stackNode<queueNode>* r2 = mm->stackHead;
//
//    while (r1 && r2)
//    {
//        queueNode* q1 = r1->value;
//        queueNode* q2 = r2->value;
//
//        queueNode* rowHead = new queueNode(q1->value - q2->value);
//        queueNode* curNew = rowHead;
//
//        q1 = q1->nextQueueNode;
//        q2 = q2->nextQueueNode;
//
//        while (q1 && q2)
//        {
//            curNew->pushBack(q1->value - q2->value);
//            curNew = curNew->nextQueueNode;
//            q1 = q1->nextQueueNode;
//            q2 = q2->nextQueueNode;
//        }
//
//        res->pushBack(rowHead);
//
//        r1 = r1->nextStackNode;
//        r2 = r2->nextStackNode;
//    }
//
//    return res;
//}
//
//stack* Matrix::transpose(stack* mm)
//{
//    if (mm == nullptr)
//    {
//        return nullptr;
//    }
//
//    int A[100][100];
//    int rows = 0, cols = 0;
//
//    for (stackNode<queueNode>* r = mm->stackHead; r; r = r->nextStackNode)
//    {
//        int c = 0;
//        for (queueNode* q = r->value; q; q = q->nextQueueNode)
//        {
//            A[rows][c++] = q->value;
//        }
//        cols = c;
//        rows++;
//    }
//
//    stack* res = new stack;
//    for (int j = 0; j < cols; ++j)
//    {
//        queueNode* rowHead = nullptr;
//        queueNode* cur = nullptr;
//
//        for (int i = 0; i < rows; ++i)
//        {
//            if (rowHead == nullptr)
//            {
//                rowHead = new queueNode(A[i][j]);
//                cur = rowHead;
//            }
//            else
//            {
//                cur->pushBack(A[i][j]);
//                cur = cur->nextQueueNode;
//            }
//        }
//        res->pushBack(rowHead);
//    }
//
//    return res;
//}
//
//stack* Matrix::multiplication(stack* mm)
//{
//    if (m == nullptr || mm == nullptr)
//    {
//        cout << "Error: One or both matrices are empty.\n";
//        return nullptr;
//    }
//
//    int A[100][100], B[100][100];
//    int rowsA = 0, colsA = 0, rowsB = 0, colsB = 0;
//
//    for (stackNode<queueNode>* r = m->stackHead; r; r = r->nextStackNode)
//    {
//        int c = 0;
//        for (queueNode* q = r->value; q; q = q->nextQueueNode)
//        {
//            A[rowsA][c++] = q->value;
//        }
//        colsA = c;
//        rowsA++;
//    }
//
//    for (stackNode<queueNode>* r = mm->stackHead; r; r = r->nextStackNode)
//    {
//        int c = 0;
//        for (queueNode* q = r->value; q; q = q->nextQueueNode)
//        {
//            B[rowsB][c++] = q->value;
//        }
//        colsB = c;
//        rowsB++;
//    }
//
//    if (colsA != rowsB)
//    {
//        cout << "Error: Multiplication not possible.\n";
//        return nullptr;
//    }
//
//    stack* result = new stack;
//
//    for (int i = 0; i < rowsA; i++)
//    {
//        queueNode* rowHead = nullptr;
//        queueNode* cur = nullptr;
//
//        for (int j = 0; j < colsB; j++)
//        {
//            int sum = 0;
//            for (int k = 0; k < colsA; k++)
//            {
//                sum += A[i][k] * B[k][j];
//            }
//
//            if (!rowHead)
//            {
//                rowHead = new queueNode(sum);
//                cur = rowHead;
//            }
//            else
//            {
//                cur->pushBack(sum);
//                cur = cur->nextQueueNode;
//            }
//        }
//        result->pushBack(rowHead);
//    }
//    return result;
//}
//
//stack* Matrix::divsion(stack* mm)
//{
//    if (m == nullptr || mm == nullptr)
//    {
//        return nullptr;
//    }
//
//    stack* res = new stack;
//    stackNode<queueNode>* r1 = m->stackHead;
//    stackNode<queueNode>* r2 = mm->stackHead;
//
//    while (r1 && r2)
//    {
//        queueNode* q1 = r1->value;
//        queueNode* q2 = r2->value;
//        queueNode* rowHead = new queueNode((q2->value != 0) ? (q1->value / q2->value) : 0);
//        queueNode* cur = rowHead;
//
//        q1 = q1->nextQueueNode;
//        q2 = q2->nextQueueNode;
//
//        while (q1 && q2)
//        {
//            int v = (q2->value != 0) ? (q1->value / q2->value) : 0;
//            cur->pushBack(v);
//            cur = cur->nextQueueNode;
//            q1 = q1->nextQueueNode;
//            q2 = q2->nextQueueNode;
//        }
//
//        res->pushBack(rowHead);
//        r1 = r1->nextStackNode;
//        r2 = r2->nextStackNode;
//    }
//
//    return res;
//}
//
//void Matrix::subMatrix(int rowStart, int rowEnd, int colStart, int colEnd)
//{
//    if (m == nullptr)
//    {
//        return;
//    }
//
//    stack* res = new stack;
//    int rowIdx = 0;
//
//    for (stackNode<queueNode>* r = m->stackHead; r; r = r->nextStackNode)
//    {
//        if (rowIdx < rowStart || rowIdx > rowEnd)
//        {
//            rowIdx++;
//            continue;
//        }
//
//        queueNode* q = r->value;
//        int colIdx = 0;
//        queueNode* newRow = nullptr;
//        queueNode* cur = nullptr;
//
//        while (q)
//        {
//            if (colIdx >= colStart && colIdx <= colEnd)
//            {
//                if (!newRow)
//                {
//                    newRow = new queueNode(q->value);
//                    cur = newRow;
//                }
//                else
//                {
//                    cur->pushBack(q->value);
//                    cur = cur->nextQueueNode;
//                }
//            }
//            q = q->nextQueueNode;
//            colIdx++;
//        }
//
//        if (newRow)
//        {
//            res->pushBack(newRow);
//        }
//        rowIdx++;
//    }
//
//    m = res;
//    cout << "\nSubmatrix Extracted:\n";
//    for (stackNode<queueNode>* rr = m->stackHead; rr; rr = rr->nextStackNode)
//    {
//        for (queueNode* qq = rr->value; qq; qq = qq->nextQueueNode)
//        {
//            cout << qq->value << " ";
//        }
//        cout << endl;
//    }
//}
//
//void printMatrix(stack* m)
//{
//    if (!m)
//    {
//        cout << "Matrix is null.\n";
//        return;
//    }
//
//    for (stackNode<queueNode>* row = m->stackHead; row; row = row->nextStackNode)
//    {
//        for (queueNode* q = row->value; q; q = q->nextQueueNode)
//        {
//            cout << q->value << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main()
//{
//    ifstream file1("matrix1.txt");
//    ifstream file2("matrix2.txt");
//
//    if (!file1.is_open() || !file2.is_open())
//    {
//        cout << "Error: Unable to open one or both matrix files.\n";
//        return 1;
//    }
//
//    int rows1, cols1, rows2, cols2;
//
//    // Read dimensions for Matrix 1
//    file1 >> rows1 >> cols1;
//    stack* m1 = new stack;
//
//    for (int i = 0; i < rows1; i++)
//    {
//        queueNode* rowHead1 = nullptr;
//        queueNode* cur1 = nullptr;
//
//        for (int j = 0; j < cols1; j++)
//        {
//            int val;
//            file1 >> val;
//
//            if (j == 0)
//            {
//                rowHead1 = new queueNode(val);
//                cur1 = rowHead1;
//            }
//            else
//            {
//                cur1->pushBack(val);
//                cur1 = cur1->nextQueueNode;
//            }
//        }
//        m1->pushBack(rowHead1);
//    }
//
//    // Read dimensions for Matrix 2
//    file2 >> rows2 >> cols2;
//    stack* m2 = new stack;
//
//    for (int i = 0; i < rows2; i++)
//    {
//        queueNode* rowHead2 = nullptr;
//        queueNode* cur2 = nullptr;
//
//        for (int j = 0; j < cols2; j++)
//        {
//            int val;
//            file2 >> val;
//
//            if (j == 0)
//            {
//                rowHead2 = new queueNode(val);
//                cur2 = rowHead2;
//            }
//            else
//            {
//                cur2->pushBack(val);
//                cur2 = cur2->nextQueueNode;
//            }
//        }
//        m2->pushBack(rowHead2);
//    }
//
//    file1.close();
//    file2.close();
//
//    Matrix matrixOp;
//    matrixOp.setMatrix(m1);
//
//    int choice;
//
//    do
//    {
//        cout << "\n--- Matrix Operations Menu ---\n";
//        cout << "1. Addition\n";
//        cout << "2. Subtraction\n";
//        cout << "3. Multiplication\n";
//        cout << "4. Division\n";
//        cout << "5. Transpose\n";
//        cout << "6. Reverse Both Stack\n";
//        cout << "7. Flip Both Stack\n";
//        cout << "8. Submatrix\n";
//        cout << "9. Display Matrices\n";
//        cout << "0. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        stack* result = nullptr;
//
//        switch (choice)
//        {
//        case 1:
//            result = matrixOp.addition(m2);
//            cout << "\nAddition Result:\n";
//            printMatrix(result);
//            break;
//
//        case 2:
//            result = matrixOp.subtraction(m2);
//            cout << "\nSubtraction Result:\n";
//            printMatrix(result);
//            break;
//
//        case 3:
//            result = matrixOp.multiplication(m2);
//            if (result != nullptr)
//            {
//                cout << "\nMultiplication Result:\n";
//                printMatrix(result);
//            }
//            break;
//
//        case 4:
//            result = matrixOp.divsion(m2);
//            if (result != nullptr)
//            {
//                cout << "\nDivision Result:\n";
//                printMatrix(result);
//            }
//            break;
//
//        case 5:
//        {
//            cout << "\nTranspose of Matrix 1:\n";
//            stack* t1 = matrixOp.transpose(m1);
//            printMatrix(t1);
//            m1 = t1;
//
//            cout << "\nTranspose of Matrix 2:\n";
//            stack* t2 = matrixOp.transpose(m2);
//            printMatrix(t2);
//            m2 = t2;
//
//            cout << "\nBoth matrices have been transposed and updated.\n";
//        }
//        break;
//
//        case 6:
//            m1->reverseStack();
//            m2->reverseStack();
//            cout << "\nBoth matrices reversed (row order).\n";
//            break;
//
//        case 7:
//            m1->flipStack();
//            m2->flipStack();
//            cout << "\nBoth matrices flipped (each row reversed).\n";
//            break;
//
//        case 8:
//        {
//            int rStart, rEnd, cStart, cEnd;
//            cout << "Enter row start (0-based): ";
//            cin >> rStart;
//            cout << "Enter row end (0-based): ";
//            cin >> rEnd;
//            cout << "Enter col start (0-based): ";
//            cin >> cStart;
//            cout << "Enter col end (0-based): ";
//            cin >> cEnd;
//
//            matrixOp.subMatrix(rStart, rEnd, cStart, cEnd);
//        }
//        break;
//
//        case 9:
//            cout << "\nMatrix 1:\n";
//            printMatrix(m1);
//            cout << "\nMatrix 2:\n";
//            printMatrix(m2);
//            break;
//
//        case 0:
//            cout << "Exiting program...\n";
//            break;
//
//        default:
//            cout << "Invalid choice!\n";
//            break;
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}