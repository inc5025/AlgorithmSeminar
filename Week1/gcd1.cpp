#include <iostream>
using namespace std;

int main()
{
    int a, b, gcd;
    cin >> a >> b;

    // swap if a > b
    if (a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    // find gcd
    for (gcd = a; gcd > 1; gcd--)
        if (a % gcd == 0 && b % gcd == 0)
            break;

    cout << gcd;
    return 0;
}
