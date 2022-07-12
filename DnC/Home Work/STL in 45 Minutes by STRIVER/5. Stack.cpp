#include <iostream>
#include <stack>
using namespace std;

void Explain_Stack()
{
    stack<int> st;
    
    st.push(1);    // {1}
    st.push(2);    // {2, 1}
    st.push(3);    // {3, 2, 1}
    st.push(3);    // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top() << "\n"; // prints 5  "** st[2] is invalid **"

    st.pop(); // st looks like {3, 3, 2, 1}

    cout << st.top() << "\n"; // 3

    cout << st.size() << "\n"; // 4

    cout << st.empty() << "\n";

    stack<int> st1, st2;
    st1.swap(st2);
}

int main()
{
    Explain_Stack();

    return 0;
}