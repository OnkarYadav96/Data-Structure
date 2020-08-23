#include"Stack.h"


cStack::cStack()
{
	size = 5;
	top = -1;
	arr = new char[size+1];
}

cStack::cStack(int sz)
{
	size = sz;
	top = -1;
	arr = new char[size+1];
}
char cStack::IsEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}
char cStack::IsFull()
{
	if (top == size - 1)
		return 1;
	else
		return 0;
}
void cStack::Push(char ele)
{
	if (!IsFull())
	{
		top++;
		arr[top] = ele;
	}
	else
	{
		cout << "\n\n\t stack is Full   !!!";
	}
}

char cStack::pop()
{
	char ch;
	if (!IsEmpty())
	{
		ch = arr[top];
		top--;
	}
	return ch;

}
