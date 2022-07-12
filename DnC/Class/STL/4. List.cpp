#include <iostream>
#include <list> // doubly linked list
#include <algorithm>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    for (auto i : l)
        cout << i << " ";
    cout << "\n";

    list<int> ls(5, 1);

    for (auto i : ls)
        cout << i << " ";
    cout << "\n";

    cout << "Empty the list: " << ls.empty() << "\n";

    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);

    for (auto i : ls)
        cout << i << " ";
    cout << "\n";

    ls.pop_back();

    for (auto i : ls)
        cout << i << " ";
    cout << "\n";

    ls.pop_front();

    for (auto i : ls)
        cout << i << " ";
    cout << "\n";

    auto it = ls.begin();

    ls.erase(++it);

    for (auto i : ls)
        cout << i << " ";
    cout << "\n";

    ls.erase(++it);
    ls.clear();

    auto itr = find(ls.begin(), ls.end(), 3); // used only in algorithm
    ls.erase(itr);

    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);

    for (auto itr : ls)
        cout << itr << " ";
    cout << "\n";

    return 0;
}