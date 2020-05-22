#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int cnt[10] = {0}, ret = 0;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
        cnt[str[i] - '0']++;

    cnt[6] += cnt[9] + 1;
    cnt[6] /= 2;
    cnt[9] = 0;

    for (int i = 0; i < 9; i++)
        if (ret < cnt[i])
            ret = cnt[i];

    cout << ret;

    return 0;
}