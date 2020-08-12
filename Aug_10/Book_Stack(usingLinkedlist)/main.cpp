#include"Stack.h"

int main()
{
	cStack s1;
	cBook b1, ele;
	int ch;
	do {
		cout << "\n\tEnter your choice";
		cout << "\n\t1.push\
               \n\t2.pop\
               \n\t3.display\
               \n\t0.Exit\n\t";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\n\tEnter Data to push ";
			b1.accept();
			s1.push(b1);
			break;
		case 2:
			ele = s1.pop();
			if (ele.getId() == 0)
			{
				cout << "\n\tStack is Empty..\n";
			}
			else
			{
				ele.display();
				cout << "\n\tIs poped\n";
			}
			break;
		case 3:
			cout << "\n\t******Stack******";
			s1.display();
			break;
		case 0:
			cout << "\n\tSuccessfully exited....\n";
			break;
		default:
			cout << "\n\tplease enter correct option..\n";
		}
	} while (ch != 0);
	cout << "\n\n\n";
}