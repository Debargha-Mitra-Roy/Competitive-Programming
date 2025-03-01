#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int countA = 0, countD = 0;
    for (int i = 0; i < n; i++)
        str[i] == 'A' ? countA++ : countD++;
    countA == countD ? cout << "Friendship\n" : countA > countD ? cout << "Anton\n" : cout << "Danik\n";
    return 0;
}