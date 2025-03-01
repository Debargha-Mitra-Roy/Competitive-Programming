#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nitin, sobhagya, ritik, satyarth;
        cin >> nitin >> sobhagya >> ritik >> satyarth;
        nitin >= sobhagya ? sobhagya = sobhagya + ritik : nitin = nitin + ritik;
        nitin >= sobhagya ? sobhagya = sobhagya + satyarth : nitin = nitin + satyarth;
        nitin >= sobhagya ? cout << "N\n" : cout << "S\n";
    }
    return 0;
}