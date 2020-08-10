#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

class cStack
{
	int top, size;
	char **arr;
	int ifEmpty();
	int ifFull();

public:
	cStack();
	cStack(int);
	void Push(const char*);
	char* Pop();
	void Display()const;
};