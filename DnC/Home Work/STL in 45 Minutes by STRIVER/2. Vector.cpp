#include <iostream>
#include <vector>
using namespace std;

void Explain_Vector()
{
    /* A empty vector */
    vector<int> v; // {}

    v.push_back(1);    // {1}
    v.emplace_back(2); // {1, 2}
    
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2); // does not require the {}

    /* Vector of size 5 with every element as 100 */
    vector<int> v(5, 100); // {100, 100, 100, 100, 100}

    /* A vector of size 5, initialized with 0, might take garbage value, dependent on the vector */
    vector<int> v(5); // {0, 0, 0, 0, 0}

    vector<int> v1(5, 20); // {20, 20, 20, 20, 20}
    vector<int> v2(v1);    // {20, 20, 20, 20, 20}

    /* Take the vector to be {10, 20, 30, 40} */
    vector<int> v = {10, 20, 30, 40};

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << "\n"; // prints 20

    it = it + 2;
    cout << *(it) << "\n"; // prints 40

    vector<int>::iterator it = v.end(); // Address a memory allocation after 40, not adress 40

    vector<int>::iterator it = v.rend(); // Address a memory allocation begin 10, not 10

    vector<int>::iterator it = v.rbegin(); // Address 40

    cout << v[0] << " " << v.at(0) << "\n"; // prints {10 10}

    cout << v.back() << "\n"; // print the last element

    /*  Ways to print the vector */
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "\n";

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "\n";

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";

    /* Take the vector to be {10, 20, 12, 23} */
    vector<int> v = {10, 20, 12, 23};

    v.erase(v.begin() + 1); // Erase 20

    /* Take the vector to be {10, 20, 12, 23, 35} */
    vector<int> v = {10, 20, 12, 23, 35};

    // Erase {12, 23}
    v.erase(v.begin() + 2, v.begin() + 4); // {10, 20, 35} [start, end)

    /* Insert function */
    vector<int> v(2, 100);          // {100, 100}
    v.insert(v.begin(), 300);       // {300, 100, 100};
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50);                       // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    /* Take the vector to be {10, 20} */
    vector<int> v = {10, 20};
    cout << v.size(); // 2

    /* Take the vector to be {10, 20} */
    vector<int> v = {10, 20};
    v.pop_back(); // {10}, removes the last element

    /* Take the vector v1 to be v1 -> {10, 20} */
    /* Take the vector v2 to be v2 -> {30, 40} */
    vector<int> v1 = {10, 20};
    vector<int> v2 = {30, 40};
    v1.swap(v2); // v1 -> {30, 40} , v2 -> {10, 20}

    v.clear(); // erases the entire vector

    cout << v.empty(); // Returns true or false
}

int main()
{
    Explain_Vector();

    return 0;
}