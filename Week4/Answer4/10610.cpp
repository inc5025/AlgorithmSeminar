// BOJ 10610
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num;
    int arr[10] = {0}, sum = 0;
    cin >> num;

    for(int i = 0; i < num.size(); i++){
        arr[num[i] - '0']++;
        sum += num[i] - '0';
    }

    if(sum % 3 != 0 || arr[0] == 0)
        cout << -1;
    else
        for(int i = 9; i >= 0; i--)
            for(int j = 0; j < arr[i]; j++)
                cout << i;

    return 0;
}