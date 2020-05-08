// BOJ 1427
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a[10] = {0};
    string str;
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        a[str[i]-'0']++;
    }

    for(int i = 9; i >= 0; i--)
        for(int j = 0; j < a[i]; j++)
            cout << i;

    return 0;
}
