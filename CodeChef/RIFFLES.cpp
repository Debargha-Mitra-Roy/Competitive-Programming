#include <iostream>
#include <vector>
using namespace std;

vector<int> applyPermutation(vector<int> sequence, vector<int> permutation)
{
    vector<int> newSequence(sequence.size());
    for (int i = 0; i < sequence.size(); i++)
        newSequence[i] = sequence[permutation[i]];
    return newSequence;
}

vector<int> permute(vector<int> sequence, vector<int> permutation, int k)
{
    while (k)
    {
        if (k & 1)
            sequence = applyPermutation(sequence, permutation);
        permutation = applyPermutation(permutation, permutation);
        k >>= 1;
    }
    return sequence;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> sequence(n), permutation(n);
        for (int i = 0; i < n; i++)
            sequence[i] = i;
        for (int j = 0; j < n / 2; j++)
            permutation[j] = j * 2;
        for (int j = n / 2; j < n; j++)
            permutation[j] = j * 2 - n + 1;
        sequence = permute(sequence, permutation, k);
        for (int i = 0; i < n; i++)
            cout << sequence[i] + 1 << " ";
        cout << "\n";
    }
}