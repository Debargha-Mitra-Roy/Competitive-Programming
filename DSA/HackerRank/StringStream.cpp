#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> parseInts(string str) {

    stringstream ss(str);

    int n;
    vector<int> temp;

    char ch = ',';

    while (ss >> n)
    {
        temp.push_back(n);
        ss >> ch;
    }

    return temp;
}

int main()
{
    string str;
    cin >> str;

    vector<int> integers = parseInts(str);

    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}