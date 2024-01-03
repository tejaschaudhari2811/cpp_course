#include <iostream>
using namespace std;
// Use recursion to sort an array

void Merge(int arr[], int l, int m, int h)
{
    int i = l, j = m + 1, k = l;
    int B[h - l + 1];

    while (i <= m && j <= h)
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

    for (; i <= m; i++)
    {
        B[k++] = arr[i];
    }

    for (; j <= h; j++)
    {
        B[k++] = arr[j];
    }

    for (int i = 0; i <= h; i++)
    {
        arr[i] = B[i];
    }
}

void RMergeSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        RMergeSort(arr, l, mid);
        RMergeSort(arr, mid + 1, h);
        Merge(arr, l, mid, h);
    }
}

int main()
{
    int arr[] = {2, 35, 1, 2, 4, 2, 5, 2, 86};
    RMergeSort(arr, 0, 8);
    cout << "Sorted Array\n";
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}