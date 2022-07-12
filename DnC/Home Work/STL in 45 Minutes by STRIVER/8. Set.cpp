#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

void Explain_Set()
{
    set<int> st; // stores only the unique elements

    st.insert(1);  // {1}
    st.emplace(2); // {1, 2}
    st.insert(2);  // {1, 2}
    st.insert(4);  // {1, 2, 4}
    st.insert(3);  // {1, 2, 3, 4}

    /* Functionality of insert in vector can be used also, that only increase efficiency*/

    /* begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as those of above */

    /* Take the set to be {1, 2, 3, 4, 5} */
    set<int> st = {1, 2, 3, 4, 5};

    auto it = st.find(3); // returns 3

    /* Take the set to be {1, 2, 3, 4, 5} */
    auto it = st.find(6); // returns the memory allocation after 5

    /* Take the set to be {1, 4, 5} */
    set<int> st = {1, 4, 5};

    st.erase(5); // erases 5, takes logarithmic time

    int count = st.count(1); // if the element exist it returns 1 else it returns 0

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    /* Take the set to be {1, 2, 3, 4, 5} */
    set<int> st = {1, 2, 3, 4, 5};

    auto it1 = st.find(2);
    auto it2 = st.find(4);

    st.erase(it1, it2); // after erase {1, 4, 5} [first, last)

    /* lower_bound() and upper_bound() function works in the same way as in vector it does. */

    /* This is the syntax */
    set<int> st = {1, 2, 3, 4, 5};

    auto it = st.lower_bound(2);

    auto it = st.upper_bound(3);
}

int main()
{
    Explain_Set();
    
    return 0;
}