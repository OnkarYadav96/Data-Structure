#pragma once
#define _CRT_SECURE_NO_WARNINGS	
#include<iostream>
using namespace std;

class cNode
{
	int data;
	cNode *next;
public:
	cNode();
	cNode(int);
	void setData(int);
	void setNext(cNode*);
	int getData();
	cNode* getNext();

	void nodeDisplay();
};
