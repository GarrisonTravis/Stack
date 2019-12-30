#include <iostream>
#include <exception>
#include "Stack.cpp"

using namespace std;

int main() {

	Stack<int> stack1;

	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);
	stack1.push(5);
	stack1.print();

	cout << "Popped: " << stack1.pop() << endl;
	stack1.print();

	cout << "Popped: " << stack1.pop() << endl;
	stack1.print();

	cout << "Popped: " << stack1.pop() << endl;
	stack1.print();

	cout << "Popped: " << stack1.pop() << endl;
	stack1.print();

	cout << "Popped: " << stack1.pop() << endl;
	stack1.print();

	try {
		cout << "Popped: " << stack1.pop() << endl;
		stack1.print();
	}
	catch(exception &e) {
		cout << "Exception caught! " << e.what() << endl;
	}
}
