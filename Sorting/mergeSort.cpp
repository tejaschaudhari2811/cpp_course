#include <iostream>
using namespace std;

void Merge(int arr[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int B[h - l + 1];

    while (i <= mid && j <= h)
    {
        if (arr[i] < arr[j])
        {
            B[k++] = arr[i++];
        }
        else
        {
            B[k++] = arr[j++];
        }
    }

    for (; i <= mid; i++)
    {
        B[k++] = arr[i];
    }
    for (; j <= h; j++)
    {
        B[k++] = arr[j];
    }

    for (int i = l; i <= h; i++)
    {
        arr[i] = B[i];
    }
}
void IMergeSort(int arr[], int n)
{
    int p, i, l, h, mid;
    for (int p = 2; p <= n; p = p * 2)
    {
        for (i = 0; i + p - 1 < n; i = i + p)
        {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(arr, l, mid, h);
        }
    }
    if(p/2 < n)
    {
        Merge(arr,0,p/2,n-1);
    }
}
int main()
{
    int arr[] = {4, 3, 1, 2,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    IMergeSort(arr, n);
    cout << "Sorted Array\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}