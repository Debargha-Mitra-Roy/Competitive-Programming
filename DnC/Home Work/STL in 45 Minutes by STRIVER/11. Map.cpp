#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

void Explain_Map()
{
    /* {key, value} */
    map<int, int> mpp; // ie.- {1, 2}

    map<int, pair<int, int>> mpp; // ie.- {1, {2, 3}}

    map<pair<int, int>, int> mpp; // ie.- {{2, 3}, 1}

    /* key values can be anything */

    mpp[1] = 2;
    mpp.emplace({3, 1}); // 3 is key, 1 is value

    mpp.insert({2, 4}); // 2 is key, 4 is value

    /* mpp stores as */
    // {1, 2}
    // {2, 4}
    // {3, 1}

    mpp[{2, 3}] = 10; // {2, 3} is key, value is 10

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << "\n";
    }

    /* same options for using iterators as we did in vector for the insert function */

    cout << mpp[1] << "\n"; // prints 2
    cout << mpp[3] << "\n"; // prints 4
    cout << mpp[5] << "\n"; // prints 0, since it does not exists

    auto it = mpp.find(3); // points to the position where 3 is found
    cout << *(it).second << "\n";

    auto it = mpp.find(5); // points to the end of the map since 5 not there

    /* lower_bound and upper_bound works exactly in the same way */

    /* This is the syntax */
    auto it = mpp.lower_bound(2); // mpp.lower_bound(key), here 2 is the key

    auto it = mpp.upper_bound(3); // mpp.upper_bound(key), here 3 is the key

    /* erase(), swap(), size(), empty() are same as above */
}

int main()
{
    Explain_Map();

    return 0;
}