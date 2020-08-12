#include"CircularQueue.h"


void main()
{
	cQueue q;
	int ele, ch;

	do
	{
		cout << "\n\n\t 1.Enqueue \
				\n\t 2.Dequeue \
				\n\t 3.Display \
				\n\t 0.Exit	\
			    \n\t Enter your choice : ";
		cin >> ch;

		switch (ch)
		{
		case 1:
			cout << "\n\t Enter data to insert :";
			cin >> ele;
			q.cEnqueue(ele);
			break;

		case 2:
			ele= q.cDequeue();
			if (ele == 0)
				cout << "\n\tQueue is Empty..\n";
			else
				cout << "\n\t" << ele << " is deleted\n";
			break;

		case 3:
			cout << "\n\t ********** Queue **********" << endl;
			q.Display();
			break;
		}
	} while (ch != 0);

	cout << "\n\n\t";
}