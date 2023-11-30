/*Code for finding pair of elements that has a sum k.
1. Method 1:
    Time complexity O(n^2)
2. Method 2:
    Using Hash Table
    Time complexity O(n)*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int sum = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((sum - arr[i]) == arr[j])
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }

    int hash[17] = {0};
    for (int i = 0; i < n; i++)
    {
        if (hash[sum - arr[i]] != 0)
        {
            cout << arr[i] << " " << sum - arr[i] << endl;
        }
        hash[arr[i]]++;
    }
    return 0;
}