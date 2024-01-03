#include <iostream>
using namespace std;

void countSort(int arr[], int n)
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int B[max] = {0};

    for (int i = 0; i < n; i++)
    {
        B[arr[i]]++;
    }

    int k = 0;
    for (int j = 0; j < max; j++)
    {
        if (B[j] > 0)
        {
            while (B[j]--)
            {
                arr[k] = j;
                k++;
            }
        }
    }
}

int main()
{
    int arr[] = {2, 35, 1, 2, 4, 2, 5, 2, 86};
    countSort(arr, 9);
    cout << "Sorted Array\n";
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}