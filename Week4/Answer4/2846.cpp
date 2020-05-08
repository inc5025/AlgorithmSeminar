// BOJ 2846
#include <iostream>
using namespace std;

int max(int a, int b){
    if(a > b)
        return a;
    return b;
}

int main()
{
    int n, prev = 1001, gap = 0, minh = 0;
    cin >> n;

    for(int i = 0, t; i < n; i++){
        cin >> t;
        if(t > prev){
            gap = max(gap, t - minh);
            prev = t;
        }
        else{
            prev = t;
            minh = t;
        }
    }

    cout << gap;

    return 0;
}