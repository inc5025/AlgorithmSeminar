// BOJ 10174
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin.ignore();

    while(n--){
        bool is_p = true;
        getline(cin, s);

        for(int i = 0; i < s.size()/2; i++){
            if(toupper(s[i]) != toupper(s[s.size()-1-i])){
                is_p = false;
                break;
            }
        }

        if(is_p == true)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
