#include"Linkedlist.h"

cLinkedlist::cLinkedlist()
{
	head = NULL;
}

cNode* cLinkedlist::createNode(int data)
{
	cNode *record;
	record = new cNode();
	record->setData(data);
	record->setNext(NULL);
	return record;
}

void cLinkedlist::createLinklist(int no)
{

	int i, data;
	cNode *newnode, *move;
	for (int i = 0; i < no; i++)
	{
		cout << "\n\n\t Enter interger data to insert :";
		cin >> data;
		newnode = createNode(data);
		//  check if it is first node or not
		if (head == NULL)
		{
			head = newnode;
			//cout << "\n\n\t ROOT Node Created !! ";
		}
		else
		{
			//link the node to linklist
			move = head;
			while (move->getNext() != NULL)
			{
				move = move->getNext();
			}
			move->setNext(newnode);
			//cout << "\n\t New Node Added !!! ";
		}

	}
}


void cLinkedlist::Display()
{
	cNode *move;
	move = head;
	cout << "here is linked list;";
	while (move != NULL)
	{
		cout << "\n\n\t"<<move << "\t" << move->getData() << "\t" << move->getNext();
		move = move->getNext();
	}
}