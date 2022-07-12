// /*
//     LINK:   https://www.codechef.com/START26D/problems/SMOKE
// */

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n = 3;
//         // cin >> n;

//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         sort(arr, arr + n);

//         cout << arr[1] << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;

class Triangle
{
public:
    void triangle()
    {
        cout << "I am a triangle\n";
    }
};

class Isosceles : public Triangle
{
public:
    void isosceles()
    {
        cout << "I am an isosceles triangle\n";
    }

    void description()
    {
        cout << "In an isosceles triangle two sides are equal\n";
    }
};

int main()
{
    Isosceles isc;

    isc.isosceles();
    isc.description();
    isc.triangle();

    return 0;
}