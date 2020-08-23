#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class cStack
{
	int top, size;
	int *arr;
	int isFull();
	int isEmpty();
public:
	cStack(int);
	void Push(int);
	int Pop();
	void Display();
};
