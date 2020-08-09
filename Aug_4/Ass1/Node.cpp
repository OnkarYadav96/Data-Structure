#include"node.h"

cNode::cNode()
{
	data = 0;
	next = NULL;
}

cNode::cNode(int data)
{
	this->data = data;
}

void cNode::setData(int data)
{
	this->data = data;
}

void cNode::setNext(cNode* next)
{
	this->next = next;
}

int cNode::getData()
{
	return data;
}

cNode* cNode::getNext()
{
	return next;
}

void cNode::nodeDisplay()
{
	cout << "\n\n\t " << this << "\t" << data << "t" << this->next;
}