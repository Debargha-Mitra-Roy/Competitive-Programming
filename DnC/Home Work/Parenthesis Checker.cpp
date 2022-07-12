/*
	Parenthesis Checker:-
	
	LINK:	https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1

*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

/* function to check if brackets are balanced */
bool parenthesis_checker(string x)
{
	int n = x.length();
	stack<char> s;
	char flag;

	/* Traversing the Expression */
	for (int i = 0; i < n; i++)
	{
		if (x[i] == '(' || x[i] == '[' || x[i] == '{')
		{
			/* Push the element in the stack */
			s.push(x[i]);
			continue;
		}

		/* If current character is not opening bracket, then it must be closing. So stack cannot be empty at this point. */
		if (s.empty())
			return false;

		switch (x[i])
		{
		case ')':

			/* Store the top element in a */
			flag = s.top();
			s.pop();
			if (flag == '{' || flag == '[')
				return false;
			break;

		case '}':

			/* Store the top element in b */
			flag = s.top();
			s.pop();
			if (flag == '(' || flag == '[')
				return false;
			break;

		case ']':

			/* Store the top element in c */
			flag = s.top();
			s.pop();
			if (flag == '(' || flag == '{')
				return false;
			break;
		}
	}

	/* Check Empty Stack */
	return (s.empty());
}

int main()
{
	string x;
	cin >> x;

	/* Function call */
	if (parenthesis_checker(x))
		cout << "balanced\n";

	else
		cout << "not balanced\n";

	return 0;
}