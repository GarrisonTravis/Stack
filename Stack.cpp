#include <iostream>
#include <stdexcept>
#include "Stack.h"
using namespace std;

//Pushes the new value onto the stack
//Post: The new value will be on top of the stack
//O(1)
template <class Type>
void Stack<Type>::push(Type val) {
	Node<Type>* newNode = new Node<Type>(val);

	if (top == NULL) {
		top = newNode;
	}
	else {
		newNode->next = top;
		top = newNode;
	}
	s++;
}

//Pops off the top element on the stack
//Post: The stack will no longer contain the top element
//O(1)
template <class Type>
Type Stack<Type>::pop() {
	
	if (top) {
		Type val;
		Node<Type>* temp = top;

		top = top->next;

		val = temp->val;
		delete temp;

		s--;

		return val;
	}
	else {
		throw runtime_error("Stack is Empty.");
	}
}

//Returns true if the stack is empty
//Returns false if the stack is not empty
template <class Type>
bool Stack<Type>::empty() {
	if (top)
		return false;
	else
		return true;
}

//Returns the size of the stack
template <class Type>
int Stack<Type>::size() {
	return s;
}

//Outputs the current stack to the screen
template <class Type>
void Stack<Type>::print() {
	Node<Type>* current = top;

	cout << "Stack (First Element is the Top) : " << endl;
	cout << "----------------------------------" << endl;
	while (current) {
		cout << current->val << endl;
		current = current->next;
	}
}
