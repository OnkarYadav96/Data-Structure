#include"Queue.h"
	

cQueue::cQueue(int size)
{
	this->size = size;
	front = rear = 0;
	queue = new int;
}


cQueue::~cQueue() 
{ 
	delete[] queue; 
}

void cQueue::EnQueue(int data)
{
	if (size==rear)
	{
		cout << "\n\t Queue is full...!!!";
		return;
	}
	else
		queue[rear] = data;
		rear++;
	return;
}


void  cQueue::DeQueue()
{
	if (rear == front)
	{
		cout << "\n\n Queue is empty...!!!";
	}
	else
	{
		for (int i = 0; i < rear - 1; i++) {
			queue[i] = queue[i + 1];
		}

		// decrement rear 
		rear--;
	}
	return;	
}


void cQueue::Display()
{
	if (front == rear)
	{
		cout << "\n\t Queue is empty...!!!";
		return;
	}
	else
		for (int i = 0; i < rear; i++)
		{
			
			cout <<"\n\n\t<--" << queue[i];
		}
	return;
}

