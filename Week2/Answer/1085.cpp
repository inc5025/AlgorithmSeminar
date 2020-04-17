#include <iostream>
using namespace std;

int main(){
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int up, down, right, left, ret;
    up = h - y;
    down = y;
    right = w - x;
    left = x;

    ret = up;
    if(ret > down)
        ret = down;
    if(ret > right)
        ret = right;
    if(ret > left)
        ret = left;

    cout << ret;

    return 0;
}