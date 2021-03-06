#ifndef STACK_H
#define STACK_H

template <class Type>
struct Node {
	Type val;
	Node<Type>* next;
	
	Node() : val(0), next(NULL) {}

	Node(Type val) {
		this->val = val;
		next = NULL;
	}
};

template <class Type>
class Stack {
private:
	int s;
	Node<Type>* top;

public:
	Stack() : s(0), top(NULL) {};
	void push(Type);
	Type pop();
	bool empty();
	int size();
	void print();
};

#endif
