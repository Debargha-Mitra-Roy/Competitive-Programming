#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    cin >> x >> y;
    if (x > y)
        swap(&x, &y);
    x % 2 == 0 ? cout << "Malvika\n" : cout << "Akshat\n";
    return 0;
}