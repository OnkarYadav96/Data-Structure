#include"StackL.h"

Stack::Stack()
{
	top = NULL;
}

Node* Stack::createnode(int data)
{
	Node *record;
	record = new Node();
    record->setData(data);
	record->setNext(NULL);
	return record;
}

void Stack::push(int data)
{
	Node *newnode;
	newnode = createnode(data);
	if (top == NULL)
		top = newnode;
	else
	{
		newnode->setNext(top);
		top = newnode;
	}
}


int Stack::pop()
{
	int ele = ERROR;
	Node *del;
	if (!isEmpty())
	{
		del = top;
		top = top->getNext();
		ele = del->getData();
		delete del;
	}
	return ele;
}

int Stack::isEmpty()
{
	if (top == NULL)
		return 1;
	else
		return 0;
}

void Stack::Display()
{

	Node *move;
	move = top;
	cout << "\n\n\t ********** Stack ************\n";
	for (move = top; move != NULL; move = move->getNext())
		cout << "\n\n\t" << move->getData();
}


