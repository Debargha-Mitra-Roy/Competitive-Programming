#include <iostream>
#include <algorithm>
using namespace std;

bool comparative(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }

    else if (p1.second == p2.second)
    {
        if (p1.first > p2.second)
            return true;
    }

    return false;
}

void Explain_Extra()
{
    sort(a + 2, a + 4); // [first, last), sort as ascending order

    sort(a, a + n, greater<int>); // sort as descending order

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    /*
        # sort it according to second element
        # if second element is same, then sort
        # it according to first element but in descending
    */

    sort(a, a + n, comparative);

    // {{4, 1}, {2, 1}, {1, 2}}

    /* __builtin_popcount() function count the numbers of "1" in a binary representation of a number according to set bit */
    int num = 7;                         // 111
    int count = __builtin_popcount(num); // works for int
    cout << count << "\n";               // prints 3

    long long int num = 165786578687;
    int count = __builtin_popcountll(num); // works for long long int
    cout << count << "\n";

    /* next_permutation() function set the number according to dictionary format */
    string s = "123";

    do
    {
        cout << s << "\n";
    } while (next_permutation(s.begin(), s.end()));

    // 123
    // 132
    // 213
    // 231
    // 312
    // 321

    int max = *max_element(a, a + n);
    cout << max << "\n";
}

int main()
{
    Explain_Extra();

    return 0;
}