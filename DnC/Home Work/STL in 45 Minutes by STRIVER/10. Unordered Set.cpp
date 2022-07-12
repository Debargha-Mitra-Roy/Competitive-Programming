#include <iostream>
#include <set>
using namespace std;

void Explain_Unordered_Set()
{
    unordered_set<int> st;
    /*
        1. does not store the elements in a sorted fashion, but stores the unique element
        2. lower_bound and upper_bound function does not works
        3. rest all functions are same as above
        4. it does not stores in any particular order
        5. it has a better complexity than set in most cases, except some when collision happens
    */
}

int main()
{
    Explain_Unordered_Set();

    return 0;
}