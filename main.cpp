#include <iostream>
#include <exception>
#include "Stack.cpp"

using namespace std;

int main() {

	Stack<int> stack1;

	if (stack1.empty())
		cout << "Stack is empty." << endl;
	else
		cout << "Stack is not empty." << endl;
	cout << endl;

	cout << "Size of stack: " << stack1.size() << endl << endl;

	cout << "Pushing: 1, 2, 3, 4, 5" << endl;
	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);
	stack1.push(5);
	stack1.print();
	cout << "Size of stack: " << stack1.size() << endl << endl;

	cout << "Popped: " << stack1.pop() << endl;
	stack1.print();
	cout << "Size of stack: " << stack1.size() << endl << endl;

	cout << "Popped: " << stack1.pop() << endl;
	stack1.print();
	cout << "Size of stack: " << stack1.size() << endl << endl;

	cout << "Popped: " << stack1.pop() << endl;
	stack1.print();
	cout << "Size of stack: " << stack1.size() << endl << endl;

	cout << "Popped: " << stack1.pop() << endl;
	stack1.print();
	cout << "Size of stack: " << stack1.size() << endl << endl;

	cout << "Popped: " << stack1.pop() << endl;
	stack1.print();
	cout << "Size of stack: " << stack1.size() << endl << endl;

	try {
		cout << "Popped: " << stack1.pop() << endl;
		stack1.print();
		cout << "Size of stack: " << stack1.size() << endl << endl;
	}
	catch(exception &e) {
		cout << "Exception caught! " << e.what() << endl;
	}
}
