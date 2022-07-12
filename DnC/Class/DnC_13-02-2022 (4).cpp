#include <iostream>
using namespace std;

int main()
{
    /* Array */
    int arr[100], sum = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];

        sum = sum + arr[i];
    }

    cout << "Sum of all Array : " << sum << "\n";


    /* Character Array */
    char name[100];
    cin >> name;
    cout << "Name : " << name << "\n";

    /* String */
    string s;
    cin >> s;
    cout << "Name : " << s << "\n";


    return 0;
}