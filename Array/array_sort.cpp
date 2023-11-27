#include<iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

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
    arr.length = 5;
    arr.size = 5;
    arr.A = new int[arr.size] {1,2,3,4,5};
    cout<<isSorted(arr)<<endl;
    return 0;
}