#include <iostream>
using namespace std;

void sort(int *array, int begin, int end)
{
    /*
    // Any kind of sort
    */

    for (int i = end; i > begin; --i)
    {
        bool is_done = true;
        for (int j = begin; j < i; ++j)
        {
            if (array[j] > array[j + 1])
            {
                is_done = false;
                int t = array[j];
                array[j] = array[j+1];
                array[j+1] = t;
            }
        }
        if(is_done == true) 
            break;
    }
}

int main(){
    int t, a[10];
    cin >> t;

    for(int j = 0; j < t; j++){
        for(int i = 0; i < 10; i++){
            cin >> a[i];
        }

        sort(a, 0, 9);
        cout << a[7] <<"\n";
    }

    return 0;
}