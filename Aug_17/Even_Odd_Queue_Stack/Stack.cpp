#include"Stack.h"

cStack::cStack(int sz)
{
	size = sz;
	arr = new int[size];
	top = -1;	
}

int cStack::isFull()
{
	if (top == size - 1)
		return 1;
	else
		return 0;
}

int cStack::isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}


void cStack::Push(int data)
{
	if (!isFull())
	{
		top++;
		arr[top] = data;
	}
	else
		cout << "\n\n\t Stak is Full...!!!";
}

int cStack::Pop()
{
	int da=9999;
	if (!isEmpty())
	{
		da = arr[top];
		top--;
	}
	else
		cout << "\n\n\t Stack is Emptyt...!!!";
	return da;
}

void cStack::Display()
{

	for (int i = 0; i <= top; i++)
	{
		cout << "\t" << arr[i];
	}
}
