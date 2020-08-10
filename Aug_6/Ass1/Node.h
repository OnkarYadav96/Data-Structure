#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Node
{
	int data;
	Node *next, *prev;
public:
	void SetData(int);
	void SetNext(Node*);
	void SetPrev(Node*);
	int GetData();
	Node* GetNext();
	Node* GetPrev();
};
