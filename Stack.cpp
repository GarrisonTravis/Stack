#include <iostream>
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
}

//Outputs the current stack to the screen
template <class Type>
void Stack<Type>::print() {
	Node<Type>* current = top;

	cout << "Stack (First Element in Top) : " << endl;
	cout << "------------------------------" << endl;
	while (current) {
		cout << current->val << endl;
		current = current->next;
	}
	cout << endl;
}
