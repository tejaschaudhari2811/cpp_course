#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int x = arr[i];
        int j = i - 1;
        while (j > -1 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
}

int main()
{
    int arr[] = {5, 8, 3, 2};
    insertionSort(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}