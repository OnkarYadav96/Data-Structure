#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void LinearSearch(int arr[],int k)
{
	int temp = -1;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == k)
		{
			cout << "\n\n\t Key element found at location " << i + 1;
			temp = 0;
			break;
		}
	}
		if (temp == -1)
			cout << "\n\n\t No Element is Found" << endl;
	
}


void main()
{
	int arr[5],key;
	cout << "\n\n\t Please 5 element of array :";
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	cout << "\n\n\t Enter key you want to search : ";
	cin >> key;

	LinearSearch(arr, key);

	cout << "\n\n\n";

}
