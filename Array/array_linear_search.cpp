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

int LinearSearch(struct Array arr, int key)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(key==arr.A[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    struct Array arr;
    arr.size = 5;
    arr.length = 5;
    arr.A = new int[arr.size] {1,2,3,4,5};

    cout<<LinearSearch(arr, 30)<<endl;

    return 0;
}
