#include"Queue.h"

void main()
{
	cQueue q;
	int data,ch;

	do
	{
		cout << "\n\n\t 1.Enqueue \
			\n\n\t 2.Dequeue \
			\n\n\t 3.Display \
			\n\n\t 0.Exit \
			\n\n\t Enter your choice: ";
		cin >> ch;

		switch (ch)
		{
		case 1:
			cout << "\n\n\t Enter data wats to add :";
			cin >> data;
			q.Enqueue(data);
			break;
		case 2:
			q.Dequeue();
			cout << "Data are Dequeued..!!";
			break;
		case 3:
			cout << " ********** Queue ********* \n\n\t";
			q.Display();
			break;
		default:
			cout << "\n\n\t Please enter valis choice...!!!";
		}
	} while (ch != 0);
}