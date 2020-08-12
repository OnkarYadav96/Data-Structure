#include"node.h"
#define ERROR -9999
class Stack
{
	Node *top;
	Node* createnode(int);
public:
	Stack();
	void push(int);
	int pop();
	void Display();
	int isEmpty();
};
