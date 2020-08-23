#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

class queue
{
	int front, rear, size;
	int *arr;
public:
	queue(int);
	void enqueue(int);
	int dequeue();
	int isFull();
	int isEmpty();
	void display();
};