#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#ifndef DQL_
#define DQL_

class Node
{
	int data;
	Node* next;
public:
	Node();
	Node(int);
	friend class cQueue;
};
#endif  //DQL!