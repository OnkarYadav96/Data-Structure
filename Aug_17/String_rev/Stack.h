#define _CRT_SECURE_NO_WARNINGS	
#include<iostream>
using namespace std;
using namespace std;
#define ERROR -9999

class cStack
{
	int size, top;
	char *arr;
public:
	cStack();
	cStack(int);
	char IsEmpty();
	char IsFull();
	void Push(char);
    char pop();
};