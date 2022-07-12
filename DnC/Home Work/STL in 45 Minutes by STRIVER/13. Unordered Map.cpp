#include <iostream>
#include <unordered_map>
using namespace std;

void Explain_Unordered_Map()
{
    unordered_map<int, int> mpp;

    /* same as set and unordered_set difference. */

    /*
        1. lower_bound and upper_bound function does not works
        2. rest all functions are same as above
        3. it does not stores in any particular order
        4. it has a better complexity than map in most cases, except some when collision happens
    */
}

int main()
{
    Explain_Unordered_Map();

    return 0;
}