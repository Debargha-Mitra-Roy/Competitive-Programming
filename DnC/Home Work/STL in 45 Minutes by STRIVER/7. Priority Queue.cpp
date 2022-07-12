#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void Explain_Priority_Queue()
{
    priority_queue<int> pq; // stores as decending order fashion

    pq.push(5);     // {5}
    pq.push(2);     // {5, 2}
    pq.push(8);     // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top() << "\n"; // prints 10

    pq.pop(); // {8, 5, 2}

    cout << pq.top() << "\n"; // prints 8

    /* size(), swap(), empty() function same as others */

    /* Minimum Heap */
    priority_queue<int, vector<int>, greater<int>> pqr; // stores as ascending order fashion
    pqr.push(5);                                        // {5}
    pqr.push(2);                                        // {2, 5}
    pqr.push(8);                                        // {2, 5, 8}
    pqr.emplace(10);                                    // {2, 5, 8, 10}

    cout << pqr.top() << "\n"; // prints 2
}

int main()
{
    Explain_Priority_Queue();

    return 0;
}