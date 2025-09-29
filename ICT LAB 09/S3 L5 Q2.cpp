////A postfix expression is an expression in which each operator follows its operands.The advantage of
////this form is that there is no need to group sub - expressions in parentheses or to consider operator
////precedence.Stack can be used to evaluate a postfix(or prefix) expression.Please implement the
////pseudo code given below to evaluate a postfix expression.
////1. Make a left to right scan of the postfix expression
////2. If the element is an operand Push it on Stack
////3. If the element is operator, evaluate it using as operands the correct number from stack and
////Pushing the result onto the stack
//#include <iostream>
//
//#include "Stack.h"
//using namespace std;
//int evaluatePostfix(string exp)
//{
//	Stack<int>* stack = new Stack<int>();
//	for (int i = 0; i < exp.length(); i++)
//	{
//		char c = exp[i];
//		if (isdigit(c))
//			stack->Push(c - '0');
//		else
//		{
//			int val1 = stack->Pop();
//			int val2 = stack->Pop();
//			switch (c)
//			{
//			case '+':
//				stack->Push(val2 + val1);
//				break;
//			case '-':
//				stack->Push(val2 - val1);
//				break;
//			case '*':
//				stack->Push(val2 * val1);
//				break;
//			case '/':
//				stack->Push(val2 / val1);
//				break;
//			}
//		}
//	}
//	return stack->Pop();
//}
//int main()
//{
//	string exp = "231*+9-";
//		cout << "postfix evaluation: " << evaluatePostfix(exp) << endl;
//	return 0;
//}
//
