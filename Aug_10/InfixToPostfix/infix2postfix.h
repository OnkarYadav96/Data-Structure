#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

class cStack
{
	int top, size;
	char *arr;
public:
	cStack();
	cStack(int);
	void Push(char);
	char Pop();
	char Peek();
	int IsEmpty();
	int IsFull();
	void Display();
};