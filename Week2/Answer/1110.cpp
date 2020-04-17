#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int t = n, i = 0;
    do{
        t = (t%10)*10 + (t/10 + t%10)%10;
        i++;
    }while(n != t);
    
    cout << i;

    return 0;
}