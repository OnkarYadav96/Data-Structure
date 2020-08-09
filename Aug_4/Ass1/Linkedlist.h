#pragma once
#include"Node.h"

class cLinkedlist
{
	cNode *head;
public:
	cLinkedlist();
	cNode *createNode(int);
	void createLinklist(int);

	void Display();
};
