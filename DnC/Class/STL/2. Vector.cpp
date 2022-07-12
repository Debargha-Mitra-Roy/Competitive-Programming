#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /* Basic defination */
    vector<int> v;

    cout << v.empty() << "\n";

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);
    v.push_back(90);

    cout << "Pushing elements:-\n";

    cout << "Size: " << v.size() << "\n";
    cout << "Capacity: " << v.capacity() << "\n";

    for (auto i : v) // auto iterator
    {
        cout << i << " ";
    }
    cout << "\n";

    cout << "Front element: " << v.front() << "\n";
    cout << "Last element: " << v.back() << "\n";

    cout << v.at(2) << "\n";
    cout << v.at(10) << "\n"; // runtime error

    cout << "Poping elements:-\n";
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout << "Size: " << v.size() << "\n";
    cout << "Capacity: " << v.capacity() << "\n";

    v.clear();
    cout << "Clearing the vector: " << v.empty();

    /* STL */
    vector<int> a(10, 0);
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << "\n";

    vector<int> b(a); // deep copy
    for (auto i : b)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}