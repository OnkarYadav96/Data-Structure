#include"node.h"

#ifndef STK_
#define STK_
class cStack
{
	node* top;
public:
	cStack();
	void push(cBook&);
	cBook pop();
	int isEmpty();
	void display();
};
#endif