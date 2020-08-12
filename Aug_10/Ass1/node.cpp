#include"node.h"

Node::Node()
{

}


void Node::setData(int data)
{
	this->data = data;
}

void Node::setNext(Node* next)
{
	this->next = next;
}

Node* Node::getNext()
{
	return next;
}

int Node::getData()
{
	return data;
}