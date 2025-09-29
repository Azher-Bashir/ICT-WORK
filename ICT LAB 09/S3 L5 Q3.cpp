////Write a program to convert the infix expression to postfix expression by using Stack.
//#include <iostream>
//#include <cctype>
//#include <string>
//#include "Stack.h"
//using namespace std;
//int precedence(char op) {
//	if (op == '+' || op == '-') return 1;
//	if (op == '*' || op == '/') return 2;
//	return 0;
//}
//string infixToPostfix(const string& infix) {
//	Stack<char>* stack = new Stack<char>();
//	string postfix;
//	for (char c : infix) {
//		if (isalnum(c)) {
//			postfix += c;
//		}
//		else if (c == '(') {
//			stack->Push(c);
//		}
//		else if (c == ')') {
//			while (!stack->IsEmpty() && stack->Pop() != '(') {
//				postfix += stack->Pop();
//			}
//		}
//		else {
//			while (!stack->IsEmpty() && precedence(stack->Pop()) >= precedence(c)) {
//				postfix += stack->Pop();
//			}
//			stack->Push(c);
//		}
//	}
//	while (!stack->IsEmpty()) {
//		postfix += stack->Pop();
//	}
//	return postfix;
//}
//int main() {
//	string infix = "a+b*(c^d-e)^(f+g*h)-i";
//	cout << "Infix Expression: " << infix << endl;
//	string postfix = infixToPostfix(infix);
//	cout << "Postfix Expression: " << postfix << endl;
//	return 0;
//}