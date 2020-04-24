// BOJ 1789
#include <iostream>
using namespace std;

int main(){
    long long input, n = 1;
    cin >> input;

    while(input >= n*(n+1)/2)
        n++;

    cout << n-1;

    return 0;
}