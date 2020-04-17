#include <iostream>
using namespace std;

int calc(int x){
    int ret = x;
    while(x > 0){
        ret += x%10;
        x /= 10;
    }

    return ret;
}

int main(){
    bool num[10001] = {0};
    for(int i = 1; i < 10001; i++){
        if(!num[i]){
            cout << i << "\n";

            for(int j = i; j < 10001; j = calc(j))
                num[j] = true;
        }
    }

    return 0;
}