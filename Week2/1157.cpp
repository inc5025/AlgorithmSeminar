#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n[26];
    string s;
    cin >> s;

    for (int i = 0; i < 26; i++)
        n[i] = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if ('a' <= s[i])
            n[s[i] - 'a']++;
        else
            n[s[i] - 'A']++;
    }

    int mv = -1, mi = -1, num = 0;
    for (int i = 0; i < 26; i++)
    {
        if (mv < n[i])
        {
            mv = n[i];
            mi = i;
            num = 1;
        }
        else if (mv == n[i])
            num++;
    }

    if (num > 1)
        cout << "?";
    else
        cout << (char)(mi + 'A');

    return 0;
}
