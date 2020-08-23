#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


int BinarySearch(int arr[], int left, int right, int k)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] == k)
		{
			return mid+1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
}

int main()
{
	int key;
	int myarr[10];
	int output;

	cout << "\n\n\t Enter 10 integer in ASCENDING Order :";
	for (int i = 0; i < 10; i++)
	{
		cin >> myarr[i];
	}

	cout << "\n\n\t Enter key you want to search :";
	cin >> key;

	output = BinarySearch(myarr, 0, 9, key);
	if (output == -1)
	{
		cout << "\n\n\t No match found";
	}
	else
		cout << "\n\n\t Match found at " << output << endl;

	cout << "\n\n\n";
}