#include"Node.h"

int Node::GetData()
{
	return data;
}

Node* Node::GetNext()
{
	return next;
}

Node* Node::GetPrev()
{
	return prev;
}

void Node::SetData(int data)
{
	this->data = data;
}

void Node::SetNext(Node* ne)
{
	next = ne;
}

void Node::SetPrev(Node* pr)
{
	prev = pr;
}
