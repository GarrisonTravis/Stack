#include <iostream>
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
}
