#include"Stack.h"

cStack::cStack()
{
	top = NULL;
}
void cStack::push(cBook &b1)
{
	node *newnode = new node;
	newnode->createnode(b1);
	if (top == NULL)
	{
		top = newnode;
	}
	else
	{
		newnode->setNext(top);
		top = newnode;
	}
}
cBook cStack::pop()
{
	cBook ele;
	if (isEmpty())
	{
		return ele;
	}
	else
	{
		node* del;
		del = top;
		top = top->getNext();
		ele = del->getData();
		delete del;
	}
	return ele;
}
int cStack::isEmpty()
{
	if (top == NULL)
		return 1;
	return 0;
}
void cStack::display()
{
	if (isEmpty())
	{
		cout << "\n\tStack is Empty...\n";
		return;
	}
	node* move;
	for (move = top; move != NULL; move = move->getNext())
	{
		move->display();
	}
	cout << "\n";
}