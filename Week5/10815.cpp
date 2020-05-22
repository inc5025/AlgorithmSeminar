#include <iostream>
#include <algorithm>
using namespace std; 

bool binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
        if (arr[m] == x) 
            return true; 
        if (arr[m] < x) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
    return false; 
} 
  
int main(void) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int arr[n], m, t, ret;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> m;
    sort(arr, arr + n);
     
    for(int i = 0; i < m; i++){
        cin >> t;
        ret = binarySearch(arr, 0, n-1, t);
        if(ret)
            cout << "1 ";
        else
            cout << "0 "; 
    }
    return 0; 
} 