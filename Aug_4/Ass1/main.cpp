#include"Linkedlist.h"

int main()
{
	cLinkedlist list1;
	int no;
	cout << "\n\n\t Enter no of nodes in linkrdlist :";
	cin >> no;

	list1.createLinklist(no);
	list1.Display();
}