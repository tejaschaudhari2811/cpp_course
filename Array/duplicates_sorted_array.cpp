#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};

    // elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Find duplicates in the array.
    int lastDuplicate = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1] && lastDuplicate != arr[i])
        {
            cout << arr[i] << endl;
            lastDuplicate = arr[i];
        }
    }

    // Counting duplicates in an array
    int j;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            j = i + 1;
            while (arr[i] == arr[j])
            {
                j++;
            }
            cout << "The number of duplicates for elemennt " << arr[i] << " are " << j - i << endl;
            i = j - 1;
        }
    }
    return 0;
}