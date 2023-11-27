#include<iostream>
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

void insertInSortedArray(struct Array *arr, int element)
{
    int i = arr->length-1;
    arr->length++;
    while(element < arr->A[i]){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = element;
    
}

bool isSorted(struct Array arr)
{
    for(int i=0;i<arr.length-1;i++)
    {
        if(arr.A[i+1]<arr.A[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    struct Array arr;
    arr.length = 4;
    arr.size = 6;
    arr.A = new int[arr.size] {1,2,3,5};
    insertInSortedArray(&arr, 4);
    Display(arr);
    return 0;
}