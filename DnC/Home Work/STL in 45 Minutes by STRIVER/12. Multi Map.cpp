#include <iostream>
#include <map>
using namespace std;

void Explain_Multi_Map()
{
    map<int, int> mpp; // ie.- {1, 2}

    mpp.emplace({1, 3}); // 1 is key, 3 is value

    mpp.insert({1, 4}); // 1 is key, 4 is value

    /* mpp stores as - key is same but value is different */
    // {1, 2}
    // {1, 3}
    // {1, 4}

    /* everything same as map, only it can store multiple keys only mpp[key] cannot be used here */
}

int main()
{
    Explain_Multi_Map();

    return 0;
}