#include <iostream>
#include <queue>
using namespace std;

void Explain_Queue()
{
    queue<int> q;
    
    q.push(1);    // {1}
    q.push(2);    // {1, 2}
    q.emplace(4); // {1, 2, 4}

    /* q is {1, 2, 4} */
    q.back() = q.back() + 5;

    /* q is {1, 2, 9} */
    cout << q.back() << "\n"; // prints 9
    
    cout << q.front() << "\n"; // prints 1

    q.pop(); // {2, 9}

    cout << q.front() << "\n"; // prints 2

    /* size(), swap(), empty() same as stack */
}

int main()
{
    Explain_Queue();

    return 0;
}