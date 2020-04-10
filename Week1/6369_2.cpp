#include <iostream>
using namespace std;

int main()
{
    int t, n, ret;
    cin >> t;
    while (t--)
    {
        ret = 0;
        cin >> n;

        // count square num
        for (int i = 1; i * i <= n; i++)
            ret++;

        cout << ret << endl;
    }
}
