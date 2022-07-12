/*
	Maximum Occuring Character:-
	
	LINK:	https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

*/

#include <iostream>
#include <string>
using namespace std;

/* function to find the maximum occurring character in an input string which is lexicographically first */
char maximum_occuring_character(string str)
{
	/* frequency[] used as hash table */
	int frequency[26] = {0};

	/* to count maximum frequency */
	int count = -1;

	/* to store the maximum occurring character */
	char result;

	/* length of 'str' */
	int n = str.length();

	/* get frequency of each character of 'str' */
	for (int i = 0; i < n; i++)
	{
		frequency[str[i] - 'a']++;
	}

	/* for each character, where character is obtained by (i + 'a') check whether it is the maximum character so far and accodingly update 'result' */
	for (int i = 0; i < 26; i++)
		if (count < frequency[i])
		{
			count = frequency[i];
			result = (char)(i + 'a');
		}

	return result;
}

int main()
{
	string str;
	cin >> str;

	cout << maximum_occuring_character(str) << "\n";

	return 0;
}