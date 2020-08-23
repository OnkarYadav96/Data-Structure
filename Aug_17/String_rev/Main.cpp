#include"Stack.h"

void main()
{
	int i;
	char str[20];
	cout << "\n\n\t Enter the string :";
	cin >> str;

	cStack s(strlen(str));

	char *rev = new char[strlen(str) + 1]	;

	for (i = 0; i < strlen(str); i++)
	{
		s.Push(str[i]);
	}

	for (i = 0; i < strlen(str); i++)
	{
		rev[i]=s.pop();
	}

	rev[i] = '\0';
	cout << "\n\n\t Reversr string : " << rev;

	cout << "\n\n\t";
}
