#include"node.h"

Node::Node()
{
	next = NULL;
}

Node::Node(int data)
{
	this->data = data;
	next = NULL;
}