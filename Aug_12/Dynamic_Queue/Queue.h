#include"node.h"

class cQueue
{
	Node *front, *rear;
public:
	cQueue();
	Node * createNode(int);
	void Enqueue(int);
	void Dequeue();
	void Display();
};
