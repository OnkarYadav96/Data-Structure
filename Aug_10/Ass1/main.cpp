#include"StackL.h"

void main()
{
	Stack s1;
	int ele, ch;
	do
	{
		cout<<"\n\n\t\t 1.Push\
				\n\t\t 2.POP\
				\n\t\t 3.Display\
				\n\t\t 0.Exit\
				\n\t Enter your choice:";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\n\n\t Enter data to insert :";
			cin >> ele;
			s1.push(ele);
			break;
		case 2:
			ele = s1.pop();
			if (ele == ERROR)
				cout << "\n\n\t Stack is Empty...!!!";
			else
				cout << "\n\n\t Delected element is " << ele;
			break;
		case 3:
			s1.Display();

		}
	} while (ch != 0);

	cout << "\n\n\t";
}