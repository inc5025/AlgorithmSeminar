// BOJ 3036
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int gcd(int a, int b)
{
    if (a < b)
        swap(a, b);

    int t;
    while (a % b > 0)
    {
        t = a;
        a = b;
        b = t % a;
    }

    return b;
}

int main()
{
    int n, first;
    cin >> n >> first;

    for (int i = 1, t; i < n; i++)
    {
        cin >> t;
        int g = gcd(t, first);

        cout << first / g << "/" << t / g << "\n";
    }

    return 0;
}