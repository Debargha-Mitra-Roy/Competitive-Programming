#include <bits/stdc++.h>
using namespace std;

void f(int n)
{
    if (n < 0)
        return;

    cout << n << " ";
    f(n - 1);
    f(n - 3);
    cout << n << " ";
}

int main()
{
    f(4);

    return 0;
}

/*
    Answer: 4 3 2 1 0 0 1 2 0 0 3 1 0 0 1 4 
*/