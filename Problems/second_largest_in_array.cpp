#include<iostream>
using namespace std;

void secondLargest(int arr[], int arr_size)
{
    int first,second;
    first=second=INT_MIN;
    for(int i=0;i<arr_size;i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first=arr[i];
        }
        else if(arr[i] > second && arr[i] !=first)
        {
            second=arr[i];
        }
    }
    cout<<second<<endl;
}

int main()
{   
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    secondLargest(arr, n);
    return 0;
}