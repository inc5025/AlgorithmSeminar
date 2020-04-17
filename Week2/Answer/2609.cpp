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
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << "\n" << a * b / gcd(a, b);

    return 0;
}