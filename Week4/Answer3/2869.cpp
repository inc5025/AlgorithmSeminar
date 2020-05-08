// BOJ 2869
#include <iostream>
using namespace std;

int main(){
    int a, b, v, cnt, sub;
    cin >> a >> b >> v;

    v -= a;
    sub = a - b;
    cnt = v / sub;

    if(v % sub)
        cnt++;

    cout << cnt + 1;
    return 0;
}