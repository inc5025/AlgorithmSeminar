#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    char c;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        sum += (int)c - 'A' + 1;
    }

    cout << sum;

    return 0;
}