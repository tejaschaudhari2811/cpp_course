#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << endl;
    }
}

int BinarySearch(struct Array arr, int low, int high, int key)
{
    
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int RBinarySearch(struct Array arr, int low, int high, int key)
{
    if(low<=high)
    {
        int mid = (low+high)/2;
        if(key == arr.A[mid])
        {
            return mid;
        }
        else if(key < arr.A[mid])
        {
            return RBinarySearch(arr, low, mid - 1, key);
        }
        else
        {
            return RBinarySearch(arr, mid+1, high, key);
        }
    }
    return -1;

    
}
int main()
{
    struct Array arr;
    arr.size = 10;
    arr.length = 10;
    arr.A = new int[arr.size]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout<<RBinarySearch(arr, 0, 9, 3);

    return 0;
}