#include"Queue.h"

queue::queue(int s)
{
	front = rear = -1;
	size = s;
	arr = new int[size];
}
void queue::enqueue(int d)
{
	if (!isFull())
	{
		if (front == -1)
			front = 0;
		rear++;
		arr[rear] = d;
	}
	else
	{
		cout << "\n\tQueue is full..\n";
	}
}
int queue::dequeue()
{
	int d = 9999;
	if (!isEmpty())
	{
		d = arr[front];
		if (front == rear)
		{
			front = -1;
			rear = -1;
			return d;
		}
		front++;
	}
	return d;
}
int queue::isFull()
{
	if (rear == size - 1)
		return 1;
	return 0;

}
int queue::isEmpty()
{
	if (front == -1 && rear == -1)
		return 1;
	return 0;
}


void queue::display()
{
	if (isEmpty())
	{
		cout << "\n\tQueue is Empty...";
		return;
	}
	for (int i = front; i <= rear; i++)
	{
		cout << "\t" << arr[i];
	}
}