// BOJ 7567
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int ret = 0;
    char prev = ' ';

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] != prev)
            ret += 10;
        else
            ret += 5;

        prev = str[i];
    }

    cout << ret;
    return 0;
}