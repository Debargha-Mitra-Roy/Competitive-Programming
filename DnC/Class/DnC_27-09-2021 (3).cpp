#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, int> mpp;

    multimap<int, int>::reverse_iterator it;

    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;
        mpp.insert({x, y});
    }

    cout << "\n";

    for (it = mpp.rbegin(); it != mpp.rend(); it++)
    {
        cout << (*it).first << " " << it->second << "\n";
    }

    cout << "\n";

    for (auto it : mpp)
        cout << it.first << " " << it.second << "\n";

    auto itr2 = mpp.find(3);

    if (mpp.count(2))
    {
        cout << mpp.count(3);
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}

/*
    Answer: x2 y2
            x1 y1
            x3 y3
            
            x3 y3
            x1 y1
            x2 y2
            NO
*/