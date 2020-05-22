#include <iostream>
#include <algorithm>
using namespace std;

bool func(int a, int b)
{
    return a > b;
}

int main()
{
    int n, ret = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n, func);

    for (int i = 0; i < n; i++)
    {
        if (ret < a[i] + i + 2)
            ret = a[i] + i + 2;
    }

    cout << ret;

    return 0;
}