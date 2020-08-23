#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isOperand(char c)
{
	if ((c >= 'a' || c <= 'z') && (c >= 'A' || c <= 'Z'))
		return true;
	else
		return false;
}

string PrefixToPostfix(string Prefix)
{
	stack <string> s;
	for (int i = Prefix.length() - 1; i >= 0; i--)
	{
		if (isOperand(Prefix[i]))
		{
			string op(1, Prefix[i]);
			s.push(op);
		}
		else
		{
			string op1 = s.top();
			s.pop();

			string op2 = s.top();
			s.pop();

			s.push("("  + op1  + op2 + Prefix[i]+")");
		}
	}

	return s.top();
}



void main()
{
	string Prefix, Postfix;
	cout << "\n\n\t Enter the prefix expression : ";
	cin >> Prefix;

	Postfix = PrefixToPostfix(Prefix);

	cout << "\n\n\t Infix expression is : " << Postfix;
	cout << "\n\n\t";
}
