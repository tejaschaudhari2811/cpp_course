#include<iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

int Get(struct Array arr, int index)
{
    if(index>=0 && index<arr.length)
        return arr.A[index];
}

void Set(struct Array *arr, int index, int new_element)
{
    if(index>=0 && index<arr->length)
        arr->A[index] = new_element;
    return;
}

int Min(struct Array arr)
{
    int min = arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]<min){
            min = arr.A[i];
        }
    }
    return min;
}

int Max(struct Array arr)
{
    int max = arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]>max){
            max = arr.A[i];
        }
    }
    return max;
}

int Sum(struct Array arr)
{
    int sum = 0;
    for(int i=0;i<arr.length;i++)
    {
        sum = sum + arr.A[i];
    }
    return sum;
}

int RecursiveSum(struct Array arr, int n)
{
    //Note: For this function, the n passed should be arr.length - 1;
    if(n < 0)
    {
        return 0;
    }
    else
    {
        return arr.A[n] + RecursiveSum(arr, n-1);
    }
}

int Average(struct Array arr)
{
    int sum = 0;
    for(int i=0;i<arr.length;i++)
    {
        sum = sum + arr.A[i];
    }
    return sum/arr.length;
}


void Display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<endl;
    }
}

int main()
{
    struct Array arr;
    arr.size = 5;
    arr.length = 5;
    arr.A = new int[arr.length] {1,2,3,4,5};
    cout<<Average(arr)<<endl;
    return 0;
}