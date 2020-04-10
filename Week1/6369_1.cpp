#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, ret = 0;
        bool room[101];
        cin >> n;

        // init room
        for (int i = 0; i < 101; i++)
        {
            room[i] = false;
        }

        // open and close
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; i * j <= n; j++)
                room[i * j] = !room[i * j];
        }

        // count # of open doors
        for (int i = 0; i <= n; i++)
            if (room[i] == true)
                ret++;

        cout << ret << endl;
    }
}
