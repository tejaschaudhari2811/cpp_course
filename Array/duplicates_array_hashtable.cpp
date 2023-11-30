#include <iostream>
using namespace std;
// Finding duplicates in an array using hashtable.
int main()
{
    int arr[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int aux_arr[21] = {0};
    for (int i = 0; i < n; i++)
    {
        aux_arr[arr[i]]++;
    }
    for (int i = 0; i < 21; i++)
    {
        if (aux_arr[i] > 1)
        {
            cout << i << endl;
        }
    }
    return 0;
}