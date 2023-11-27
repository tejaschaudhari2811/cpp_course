#include <iostream>
using namespace std;
/*
Code for reversing an array using following 2 methods
1. Auxillary array
2. Swapping*/

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

void Reverse(struct Array *arr)
{
    int *B = new int[arr->length];
    for (int i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = arr->A[i];
    }
    for (int i = 0; i < arr->length; i++)
    {
        arr->A[i] = B[i];
    }
}

void Reverse2(struct Array *arr)
{
    int temp;
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {   
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}
int main()
{
    struct Array arr;
    arr.size = 5;
    arr.length = 5;
    arr.A = new int[arr.size]{1, 2, 3, 4, 5};

    Reverse2(&arr);
    Display(arr);
    return 0;
}