#include <iostream>
using namespace std;

int main(){
    int n, k;
    bool num[1001] = {0};

    cin >> n >> k;

    for(int i = 2; i <= n; i++){
        if(!num[i]){
            for(int j = i; j <= n; j += i){
                if(!num[j]){
                    num[j] = true;
                    k--;

                    if(k == 0){
                        cout << j;
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}