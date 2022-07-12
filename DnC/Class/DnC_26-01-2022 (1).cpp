#include <iostream>
using namespace std;

int main()
{
    // Swap two numbers using extra variable :-

    int a, b, c = 0; // here c stores some garbage value so we initialise it with
    cin >> a >> b;

    cout << "#1 -> " << a << " " << b << " " << c << "\n";

    c = a;
    a = b;
    b = c;

    cout << "#2 -> " << a << " " << b << " " << c << "\n\n";

    // Swap two numbers without using extra variable :-

    int x, y;
    cin >> x >> y;

    cout << "#1 -> " << x << " " << y << "\n";

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "#2 -> " << x << " " << y << "\n\n";

    // if-else statement :-

    int marks;
    cin >> marks;

    if (marks > 90)
    {
        cout << "A";
    }

    else if (marks > 80 && marks <= 90)
    {
        cout << "B";
    }

    else if (marks > 70 && marks <= 80)
    {
        cout << "D";
    }

    else if (marks > 60 && marks <= 70)
    {
        cout << "D";
    }

    else
    {
        cout << "E";
    }

    cout << "\n\n";

    // multiple if statement :-

    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << "EVEN\n\n";

    if (n % 2 == 1)
        cout << "ODD\n\n";

    if (n % 5 == 0)
        cout << "Divisible by 5\n\n";

    // for loop :-

    int sum = 0, i, j;

    for (i = 0; i <= 10; i++) // increament operation
    {
        cout << i << " ";
        sum = sum + i;
    }
    cout << "\nSum = " << sum << "\n\n";

    for (j = 20; j > 14; j--) // decrement operation
    {
        cout << j << " ";
    }
    cout << "\n\n";

    // pre increment
    int p = 5, q;
    q = ++p;

    cout << p << " " << q << "\n\n"; // p = 6 and q = 6

    // post increment
    p = 5, q;
    q = p++; // q = p + 1

    cout << p << " " << q << "\n\n"; // p = 6 and q = 5

    // ternary operator
    a = 10, b = 20, c;
    c = (a < b) ? a : b; // condition ? value_if_true : value_if_false

    cout << c << "\n";

    return 0;
}