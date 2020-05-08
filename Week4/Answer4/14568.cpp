// BOJ 14568
#include <iostream>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;

    for (int i = 2; i + 4 <= n; i += 2)
        c += (n - i - 2) / 2;

    cout << c;

    return 0;
}