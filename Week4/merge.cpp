#include <iostream>
using namespace std;

void merge(int *arr, int l, int m, int r)
{
    int i = 0, j = 0, k = l;
    int n1 = m - l + 1, n2 = r - m;
    int L[n1], R[n2];

    for (int idx = 0; idx < n1; idx++)
        L[idx] = arr[l +idx];
    for (int idx = 0; idx < n2; idx++)
        R[idx] = arr[m + 1 + idx];

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};

    merge_sort(arr, 0, 5);

    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";

    return 0;
}