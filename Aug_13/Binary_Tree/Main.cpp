#include"Node.h"

void main()
{
	BinaryTree b;

	int data, ch;

	do
	{
		cout << "\n\n\t 1.Add Node \
				\n\n\t 2.Display \
				\n\n\t 0.Exit\
				\n\n\t Enter your choice :";
		cin >> ch;

		switch (ch)
		{
		case 1:
			cout << "\n\n\t ENTER NEW NODE DATA : ";
			cin >> data;
			b.AddNode(data);
			break;
		case 2:
			b.Display();
			break;
		}
	} while (ch != 0);

	cout << "\n\n\n";
}