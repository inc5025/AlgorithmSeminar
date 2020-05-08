// BOJ 2959
#include <iostream>
using namespace std;

void sort(int *array, int begin, int end){
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
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a, 0, 3);

    cout << a[0] * a[2];
    return 0;
}