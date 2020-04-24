#include <iostream>
using namespace std;

void bubble_sort(int *array, int begin, int end){
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
    int a[10] = {3, 1, 4, 2, 7, 6, 8, 9, 10, 5};
    bubble_sort(a, 0, 9);

    for(int i = 0; i < 10; i++)
        cout << a[i] << " ";

    return 0;
}