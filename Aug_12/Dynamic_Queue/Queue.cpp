#include"Queue.h"
cQueue::cQueue()
{
	rear = front = NULL;
}
Node* cQueue::createNode(int val)
{
	Node* newnode = new Node(val);
	return newnode;
}
void cQueue::Enqueue(int val)
{
	Node* newnode = createNode(val);
	if (front == NULL)
	{
		front = newnode;
		rear = front;
	}
	else
	{
		rear->next = newnode;
		rear = newnode;
	}
	cout << "\n-->Front::" << front;
	cout << "\n-->rear::" << rear;
	cout << endl;
}
void cQueue::Dequeue()
{
	Node *temp;
	if (front == NULL)
	{
		cout << "\nQueue is Empty...!!!!!!\n";
		rear = NULL;
	}
	else
	{
		temp = front;
		front = front->next;
		delete temp;
	}
	cout << "\n-->FRONT::" << front;
	cout << "\n-->REAR::" << rear;
	cout << endl;
}
void cQueue::Display()
{
	Node* temp;
	if (front == NULL)
	{
		cout << "\nQueue is Empty...!!!!!!\n";
	}
	else
	{
		temp = front;
		while (temp != NULL)
		{
			cout << "--->" << temp->data;
			temp = temp->next;
		}
		cout << endl;
	}
}