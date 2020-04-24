#include <iostream>
using namespace std;

void sort(int* array, int begin, int end){
    /*
    ** Any kind of sort
    */

   	for (int i = begin + 1; i <= end; i++)
	{
		int j, v = array[i];
		for (j = i; j > begin && array[j - 1] > v; j--)
			array[j] = array[j - 1];
		if (i != j) 
            array[j] = v;
	}
}

int main(){
    int a[10] = {3, 1, 4, 2, 7, 6, 8, 9, 10, 5};
    sort(a, 0, 9);

    for(int i = 0; i < 10; i++)
        cout << a[i] << " ";

    return 0;
}
