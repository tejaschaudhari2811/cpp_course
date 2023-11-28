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

int main()
{
    struct Array arr1, arr2;
    arr1.size = 5;
    arr1.length = 5;
    arr2.size = 5;
    arr2.length = 5;

    // Initialize the first array
    arr1.A = new int[arr1.length] {3,8,16,20,25};
    arr2.A = new int[arr2.length] {4,10,12,22,23};

    return 0;
}