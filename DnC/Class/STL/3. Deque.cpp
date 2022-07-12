#include <iostream>
#include <deque> // uses array
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(5);
    d.push_back(6);

    d.push_front(3);
    d.push_front(1);

    for (auto i : d)
        cout << i << " ";
    cout << "\n";

    cout << d[1] << "\n";
    cout << d.at(2) << "\n";

    d.pop_back();

    for (auto i : d)
        cout << i << " ";
    cout << "\n";

    d.pop_front();

    for (auto i : d)
        cout << i << " ";
    cout << "\n";

    cout << "Size: " << d.size() << "\n";

    cout << "First element: " << d.front() << "\n";
    cout << "Last element: " << d.back() << "\n";

    d.clear();
    cout << "Empty the deque: " << d.empty() << "\n";

    return 0;
}