#include <iostream>
using namespace std;

long long len[10000];
int main()
{
    long long n, k, i, hi, lo, md, sm, ret = 0;
    cin >> n >> k;
    for (i = 0; i < n; i++)
        cin >> len[i];

    hi = 2147483647;
    lo = 1;
    while (hi >= lo)
    {
        md = (hi + lo) / 2;

        for (sm = 0, i = 0; i < n; i++)
            sm += len[i] / md;

        if (sm >= k)
        {
            ret = ret < md ? md : ret;
            lo = md + 1;
        }
        else
        {
            hi =  md - 1;
        }
    }

    cout << ret;

    return 0;
}
