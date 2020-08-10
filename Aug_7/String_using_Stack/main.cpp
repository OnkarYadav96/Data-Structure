#include"Striing.h"

int main()
{
	cStack s1;
	int choice;
	char ele[20];

	do
	{
		cout << "\n\n\t 1. Push \
				   \n\t 2. Pop \
				   \n\t 3. Display \
				   \n\t 0. Exit \
				   \n\t    Enter Your Choice : ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "\n\n\t Enter the Element to Push : ";
			cin >> ele;
			s1.Push(ele);
			break;

		case 2:
			strcpy(ele, s1.Pop());
			if (strcmp(ele, "ERROR") == 0)
			{
				cout << "\n\n\t**** Stack Is Empty !!! ****";
			}
			else
			{
				cout << "\n\n\t Popped Element is : " << ele;
			}
			break;

		case 3:
			s1.Display();
			break;
		}
	} while (choice != 0);
}