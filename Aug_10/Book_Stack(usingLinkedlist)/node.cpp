#include"node.h"

node::node()
{
	next = NULL;
}
void node::setData(cBook &d)
{
	data = d;
}
void node::createnode(cBook& data)
{
	this->data = data;
	this->next = NULL;
}
node* node::getNext()
{
	return next;
}
void node::setNext(node* next)
{
	this->next = next;
}
cBook node::getData()
{
	return data;
}
void node::display()
{
	data.display();
}