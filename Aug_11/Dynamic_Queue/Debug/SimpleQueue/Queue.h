#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#define ERROR -9999
#ifndef QUE_
#define QUE_

class cQueue
{
	int size, front, rear;
	int* queue;
public:

	cQueue(int);
	void EnQueue(int);
	void DeQueue();
	void Display();
    ~cQueue();
};

#endif // !QUE_
