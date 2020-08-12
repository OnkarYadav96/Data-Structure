#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

#ifndef BOOK_
#define BOOK_
class cBook
{
	int bid;
	char bname[20];
	float price;
public:
	cBook();
	void accept();
	void display();
	int getId();
};
#endif // !BOOK_

