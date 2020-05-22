#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;

    int idx = 0;
    while(true){
        if(idx + 10 < str.size()){
            for(int i = 0; i < 10; i++)
                cout << str[idx+i];
            cout << "\n";
            idx+=10;
        }
        else{
            for(; idx < str.size(); idx++)
                cout << str[idx];
            break;
        }
    }

    return 0;
}