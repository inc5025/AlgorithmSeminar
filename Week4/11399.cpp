// BOJ 11399
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], sum = 0, ret = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        ret += sum;
    }

    cout << ret;

    return 0;
}