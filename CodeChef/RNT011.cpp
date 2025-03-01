#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool areBracketsBalanced(string expr)
{
	stack<char> st;
	for (char ch : expr)
	{
		if (ch == '(' || ch == '{' || ch == '[')
			st.push(ch);
		else
		{
			if (st.empty())
				return false;
			char top = st.top();
			if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
				st.pop();
			else
				return false;
		}
	}
	return st.empty();
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		areBracketsBalanced(str) ? cout << "YES\n" : cout << "NO\n";
	}
	return 0;
}
