#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, n;
    string s;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> s;

        for (int j = 0; j < s.size(); j++)
            for (int k = 0; k < n; k++)
                cout << s[j];

        cout << "\n";
    }

    return 0;
}
