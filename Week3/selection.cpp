#include <iostream>
using namespace std;

void selection_sort(int *array, int begin, int end){
    for (int i = begin; i < end; ++i)
    {
        int imin = i;
        for (int j = i + 1; j <= end; ++j)
        {
            if (array[imin] > array[j]) imin = j;
        }
        if (imin != i)
        {
            int t = array[imin];
            array[imin] = array[i];
            array[i] = t;
        }
    }
}

int main(){
    int a[10] = {3, 1, 4, 2, 7, 6, 8, 9, 10, 5};
    selection_sort(a, 0, 9);

    for(int i = 0; i < 10; i++)
        cout << a[i] << " ";

    return 0;
}