#include <iostream>
using namespace std;

void swap(int& a, int& b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int gcd(int a, int b){
    if(a < b)
        swap(a, b);

    int t;
    while(a%b > 0){
        t = a;
        a = b;
        b = t%a;
    }

    return b;
}

int main(){
    int ax, ay, bx, by, X, Y, g, G;
    cin >> ax >> ay >> bx >> by;

    g = gcd(ay, by);
    X = ax * (by/g) + bx * (ay/g);
    Y = ay*by/g;
    G = gcd(X, Y);
    cout << X/G << " " << Y/G;

    return 0;
}