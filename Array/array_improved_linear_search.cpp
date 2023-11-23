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

void Swap(int *element1, int *element2)
{
    int temp = *element1;
    *element1 = *element2;
    *element2 = temp;
}

int LinearSearch(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            Swap(&arr->A[i],&arr->A[i-1]);
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
    arr.A = new int[arr.size]{1, 2, 3, 4, 5};

    cout << LinearSearch(&arr, 3) << endl;
    Display(arr);

    return 0;
}
