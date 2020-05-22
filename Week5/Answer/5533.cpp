#include <iostream>
using namespace std;

int main()
{
    int n, score[200][3], total[200] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> score[i][j];

    for (int t = 0; t < 3; t++)
    {
        int cnt[101] = {0};
        for (int i = 0; i < n; i++)
            cnt[score[i][t]]++;

        for (int i = 0; i < n; i++)
            if (cnt[score[i][t]] == 1)
                total[i] += score[i][t];
    }

    for (int i = 0; i < n; i++)
        cout << total[i] << "\n";

    return 0;
}