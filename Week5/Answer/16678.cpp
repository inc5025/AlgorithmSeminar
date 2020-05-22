#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    
    int low = 1;
    long long hacker = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < low) 
            continue;
        
        hacker += a[i] - low;
        low++;
    }
    
    cout << hacker;
    return 0;
}