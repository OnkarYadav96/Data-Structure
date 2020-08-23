#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class cString
{
	char name[20];
public:
	cString();
	cString(const char*);
	void Accept();
	void Display();
}
