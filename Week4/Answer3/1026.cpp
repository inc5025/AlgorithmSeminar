// BOJ 1026
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, a[50], b[50], ret = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];

    sort(a, a+n);
    sort(b, b+n);

    for(int i = 0; i < n; i++)
        ret += a[i] * b[n-i-1];

    cout << ret;
    
    return 0;
}
