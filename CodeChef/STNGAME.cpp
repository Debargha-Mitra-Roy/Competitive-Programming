#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int size = 2 * n;
        vector<char> ans(size);
        int front = 0, back = (size)-1;
        int startA = 0, endA = n - 1;
        int startB = 0, endB = n - 1;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());
        for (int i = 0; i < size; i++)
        {
            if ((i % 2) == 0)
                (startB <= endB && a[startA] >= b[startB]) ? ans[back--] = a[endA--] : ans[front++] = a[startA++];
            else
                (startA <= endA && a[startA] < b[startB]) ? ans[front++] = b[startB++] : ans[back--] = b[endB--];
        }
        for (char ch : ans)
            cout << ch;
        cout << "\n";
    }
    return 0;
}