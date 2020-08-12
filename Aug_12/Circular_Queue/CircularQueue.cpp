#include"CircularQueue.h"

cQueue::cQueue()
{
	size = 5;
	rear = front = -1;
	arr = new int;
}
cQueue::cQueue(int sz)
{
	size = sz;
	front = rear = -1;
	arr =new int [sz];
}

int cQueue::isFull()
{	
	 if (front == (rear + 1) % size)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int cQueue::isEmpty()
{
	if (rear == -1 && front == -1)
	{
		return 1;
	}
	return 0;
}

void cQueue::cEnqueue(int data)
{
	if (!isFull())
	{
		if (front == -1)
		{
			front = 0;
			rear = 0;
			arr[rear] = data;
		}
		else
		{
			rear = (rear + 1) % size;
			arr[rear] = data;
		}
	}
	else
		cout << "\n\n\t Queue is Full...!!!";
}

int cQueue::cDequeue()
{
	int data = ERROR;
	if (!isEmpty())
	{
		data = arr[front];
		front = (front + 1) % size;
	}
	return data;
}

void cQueue::Display()
{
	int i;
	if (front == -1)
		cout << "\n\n\t Queue is Empty...!!1";
	else
		cout << "\n\n\t ********* Queue *************\n\n\t <--";
	for (i = front; i != rear; i = (i + 1) % size)
		cout << " " << arr[i];
	if (i == rear)
		cout << " " << arr[i] << "<--";
}

cQueue::~cQueue()
{
	delete[] arr;
}