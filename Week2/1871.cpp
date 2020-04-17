#include <iostream>
#include <string>
using namespace std;

int abs(int a)
{
    if (a > 0)
        return a;

    return -a;
}

int main()
{
    int n, ls, rs;
    string s;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        ls = (s[0] - 'A') * 26 * 26 + (s[1] - 'A') * 26 + s[2] - 'A';
        rs = (s[4] - '0') * 1000 + (s[5] - '0') * 100 + (s[6] - '0') * 10 + s[7] - '0';
        if (abs(ls - rs) <= 100)
            cout << "nice\n";
        else
            cout << "not nice\n";
    }

    return 0;
}
