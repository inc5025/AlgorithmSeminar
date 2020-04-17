#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n[26];
    string s;
    cin >> s;

    for(int i = 0; i < 26; i++) 
        n[i] = -1;

    for(int i = 0; i < s.size(); i++){
        int idx = s[i] -'a';
        if(n[idx] == -1)
            n[idx] = i; 
    }

    for(int i = 0; i < 26; i++)
        cout << n[i] << " ";

    return 0;
}
