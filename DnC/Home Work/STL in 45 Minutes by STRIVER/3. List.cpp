#include <iostream>
#include <list>
using namespace std;

void Explain_List()
{
    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4};

    ls.emplace_front(); // {2, 4};

    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << "\n";

    /* rest functions same as vector */
    /* begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap() */
}

int main()
{
    Explain_List();

    return 0;
}