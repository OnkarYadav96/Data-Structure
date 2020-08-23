#include"Stack.h"
#include"Queue.h"

int main()
{
	int check;
	int evenodd[20];
	for (int i = 0; i < 20; i++)
	{
		cout << "\n\n\t Enter " << i + 1 << " element : ";
		cin >> evenodd[i];
	}

	int even = 0,odd = 0;
	for (int i = 0; i < 20; i++)
	{
		if (evenodd[i] % 2 == 0)
		{
			even++;
		}
		if (evenodd[i] % 2 != 0)
		{
			odd++;
		}
	}

	cStack s(odd);
	queue q(even);

	for (int i = 0; i < 20; i++)
	{
		if (evenodd[i] % 2 !=0)
		{
			s.Push(evenodd[i]);
		}
		if (evenodd[i] % 2 == 0)
		{
			q.enqueue(evenodd[i]);
		}
	}

	cout << "\n\n\t Even :";
	q.display();
	cout << "\n\n\t Odd :";
	s.Display();

	cout << "\n\n\n";
}