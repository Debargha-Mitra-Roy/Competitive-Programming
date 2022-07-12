/*
    LINK:   https://leetcode.com/problems/spiral-matrix/
*/

#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        vector<int>answer;

        int row=matrix.size();
        int column=matrix[0].size();

        int count=0;
        int total=row*column;

        /* index initialisation */
        int startingRow=0;
        int startingColumn=0;
        int endingRow=row-1;
        int endingColumn=column-1;

        
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        set<int> s ;

        for (int i = 1; i <= sqrt(n); i++)
        {
            long long int square = i * i;

            s.insert(square);
        }

        for (int i = 1; i * i * i <= n; i++)
        {
            long long int cube = i * i * i;

            s.insert(cube);
        }

        cout << s.size() << "\n";
    }

    return 0;
}

/*
    Time Complexity = O(N * M)
    Space Complexity = O(M * N)
*/