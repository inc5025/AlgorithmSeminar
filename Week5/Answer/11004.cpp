#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(a, a + n);
    printf("%d", a[k-1]);
    
    return 0;
}