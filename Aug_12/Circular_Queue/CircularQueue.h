#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#define ERROR -9999
#ifndef CRLQ_
#define CRLQ_

class cQueue
{
	int size, front, rear;
	int *arr;
public:
	cQueue();
	cQueue(int);
	int isFull();
	int isEmpty();
	void cEnqueue(int);
	int cDequeue();
	void Display();
	~cQueue();

};
#endif
