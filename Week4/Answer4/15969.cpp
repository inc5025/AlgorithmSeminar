// BOJ 15969
#include <iostream>
using namespace std;

int main()
{
    int n, a = 1000, b = 0, t;
    cin >> n;

    while (n--)
    {
        scanf("%d", &t);
        if (a > t)
            a = t;
        if (b < t)
            b = t;
    }

    cout << b - a;
    return 0;
}