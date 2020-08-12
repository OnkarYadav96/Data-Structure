#include"Book.h"

#ifndef NODE_
#define NODE_

class node
{
	cBook data;
	node *next;
public:
	node();
	void setData(cBook&);
	void createnode(cBook&);
	node* getNext();
	void setNext(node*);
	cBook getData();
	void display();
};
#endif // !NODE_
