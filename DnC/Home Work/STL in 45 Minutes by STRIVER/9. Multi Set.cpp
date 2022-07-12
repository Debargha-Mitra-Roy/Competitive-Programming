#include <iostream>
#include <set>
using namespace std;

void Explain_Multi_Set()
{
    /* Everything is same as set only stores duplicate elements also */

    multiset<int> ms; //allow to stores the duplicate elements in sorted order
    ms.insert(1);     // {1}
    ms.insert(1);     // {1, 1}
    ms.insert(1);     // {1, 1, 1}

    ms.erase(1); // all 1's erased

    int count = ms.count(1);

    /* only a single one erased */
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1) + 2);

    /* rest all function same as set */
}

int main()
{
    Explain_Multi_Set();

    return 0;
}