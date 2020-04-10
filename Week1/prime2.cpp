#include <iostream>
using namespace std;

int main()
{
    bool check[1001];
    int cnt = 0;

    for (int i = 0; i < 1001; i++)
    {
        check[i] = true;
    }

    check[0] = false;
    check[1] = false;

    // check if i is prime num
    for (int i = 2; i < 1001; i++)
    { 
        if (check[i] == false)
        {
            continue;
        }

        for (int j = i * i; j < 1001; j += i)
        {
            check[j] = false;
        }
    }

    // count prime num
    for (int i = 2; i < 1001; i++)
    { 
        if (check[i] == true)
        {
            cnt++;
        }
    }

    cout << cnt;
}
