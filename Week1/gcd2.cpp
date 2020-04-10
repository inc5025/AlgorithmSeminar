#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b)
        swap(a, b);

    // find gcd
    while (b % a > 0)
    {
        b = b % a;
        swap(a, b);
    }

    cout << a;
    return 0;
}
