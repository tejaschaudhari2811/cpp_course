#include<iostream>
using namespace std;

int Partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low-1);
    for(int j=low; j < high;j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}

void quicksort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi=Partition(arr, low, high);
        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}

int main()
{
    int arr[]  = {10,2,4,523,5,32,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    cout<<"Sorted Array\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}