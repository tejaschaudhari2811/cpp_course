#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};
    int max = arr[0];
    int min = arr[0];
    int n = sizeof(arr) / sizeof(min);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] > max)
            max = arr[i];
    }
    cout << "Min element is " << min << endl;
    cout << "Max element in " << max << endl;

    return 0;
}