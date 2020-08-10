#include"Striing.h"

cStack::cStack()
{
	size = 5;
	top = -1;
	arr = new char*[size];
}

cStack::cStack(int size)
{
	this->size = size;
	top = -1;
	arr = new char*[this->size];
}

int cStack::ifFull()
{
	if (top == size - 1)
		return 1;
	else
		return 0;
}

int cStack::ifEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}

void cStack::Push(const char* ele)
{
	if (!ifFull())
	{
		top++;
		arr[top] = new char[strlen(ele) + 1];
		strcpy(arr[top], ele);
	}
	else
	{
		cout << "\n\n\t**** Stack Is Full !!! ****";
	}
}

char* cStack::Pop()
{
	char ele[20] = "ERROR";

	if (!ifEmpty())
	{
		strcpy(ele, arr[top--]);
	}

	return ele;
}

void cStack::Display()const
{
	int i;
	cout << "\n\n\t**** Stack Elements ****" << endl;
	for (i = top; i >= 0; i--)
	{
		cout << "\n\t" << arr[i];
	}
}

