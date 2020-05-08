// BOJ 1076
#include <iostream>
#include <string>
using namespace std;

const string color[] = {"black","brown","red","orange","yellow","green","blue","violet","grey","white"};

int calc(string s){
    for(int i = 0; i < 10; i++)
        if(s == color[i])
            return i;

    return -1;
}

int main()
{
    string a, b, c;
    long long ret;
    cin >> a >> b >> c;
    
    ret = 10 * calc(a) + calc(b);
    for(int i = 0; i < calc(c); i++)
        ret *= 10;

    cout << ret;
    return 0;
}