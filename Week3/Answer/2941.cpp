// BOJ 2941
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ret = 0;
    string str;
    cin >> str;

    for (int i = 0; str[i] != 0; i++){
        ret++;

        if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=')
            i += 2;
        if((str[i] == 'c' && str[i + 1] == '=')
        || (str[i] == 'c' && str[i + 1] == '-')
        || (str[i] == 'd' && str[i + 1] == '-')
        || (str[i] == 'l' && str[i + 1] == 'j')
        || (str[i] == 'n' && str[i + 1] == 'j')
        || (str[i] == 's' && str[i + 1] == '=')
        || (str[i] == 'z' && str[i + 1] == '='))
            i++;
    }

    cout << ret;
    return 0;
}
