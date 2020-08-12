#include"Book.h"

cBook::cBook()
{
	bid = 0;
	strcpy(bname, "NA");
	price = 0;
}
void cBook::accept()
{
	cout << "\n\tEnter Id ";
	cin >> bid;
	cout << "\n\tEnter Book Name ";
	cin >> bname;
	cout << "\n\tEnter price ";
	cin >> price;
}
void cBook::display()
{
	cout << "\n\t" << bid << "\t" << bname << "\t" << price;
}

int cBook::getId()
{
	return bid;
}