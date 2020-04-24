// BOJ 2292
#include <iostream>
using namespace std;

int main(){
    int num, sum = 1, i = 1;
    cin >> num;

    while(num > sum){
        sum += 6 * i;
        i++;
    }

    cout << i;

    return 0;
}