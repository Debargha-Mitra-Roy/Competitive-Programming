#include <iostream>
#include <deque>
using namespace std;

void Explain_Deque()
{

    deque<int> dq;
    
    dq.push_back(1);     // {1}
    dq.emplace_back(2);  // {1, 2}
    dq.push_front(4);    // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back();  // {3, 4, 1}
    dq.pop_front(); // {4, 1}

    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << "\n";

    cout << dq.back() << "\n"; // prints 1

    cout << dq.front() << "\n"; // prints 4

    /* rest functions same as vector */
    /* begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap() */
}

int main()
{
    Explain_Deque();

    return 0;
}