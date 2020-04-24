// BOJ 10989
#include <iostream>
using namespace std;

int total, input, count[10001];

int main()
{
    // disable sync btw C and C++ standard streams.
    ios::sync_with_stdio(0);

    cin >> total;
    for (int i = 0; i < total; i++)
    {
        cin >> input;
        count[input]++;
    }

    for (int i = 0; i < 10001; i++)
        for (int j = 0; j < count[i]; j++)
            cout << i << "\n";

    return 0;
}