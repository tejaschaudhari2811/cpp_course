/*
Program to find pair of elements in an array with sum k.*/
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    int sum = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == sum)
        {
            cout << arr[i] << " " << arr[j] << endl;
            i++;
            j++;
        }
        else if (arr[i] + arr[j] < sum)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}