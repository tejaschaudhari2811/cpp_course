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

struct Array *Merge(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = new struct Array;
    arr3->size = arr1->size + arr2->size;
    arr3->length = arr1->length + arr2->length;
    arr3->A = new int[arr3->length];
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else
        {
            arr3->A[k++] = arr2->A[j++];
        }
    }

    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }

    for (; j < arr2->length; j++)
    {
        arr3->A[k++] = arr2->A[j];
    }

    return (arr3);
}
int main()
{
    struct Array arr1, arr2;
    arr1.size = 5;
    arr1.length = 5;
    arr2.size = 5;
    arr2.length = 5;

    // Initialize the first array
    arr1.A = new int[arr1.length]{3, 8, 12, 20, 25};
    arr2.A = new int[arr2.length]{4, 10, 12, 22, 23};

    struct Array *arr3;
    arr3 = Merge(&arr1, &arr2);
    Display(*arr3);
    return 0;
}