#include <iostream>
using namespace std; 

int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
        if (arr[m] == x) 
            return m; 
        if (arr[m] < x) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
    return -1; 
} 
  
int main(void) 
{ 
    int arr[] = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91 }, x, n = 10; 
    cin >> x;
     
    int result = binarySearch(arr, 0, n - 1, x); 
    if(result != -1)
        cout << "arr[" << result << "] : " << x <<"\n";
    else
        cout << x << " is not in array\n"; 
    return 0; 
} 