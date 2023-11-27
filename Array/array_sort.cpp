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

void insertInSortedArray(struct Array *arr, int element)
{
    int i = arr->length - 1;
    arr->length++;
    while (element < arr->A[i])
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = element;
}

bool isSorted(struct Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i + 1] < arr.A[i])
        {
            return false;
        }
    }
    return true;
}

void negativeOnLeft(struct Array *arr)
{
    int i = 0, j = arr->length-1;
    while (i < j)
    {

        while (arr->A[i] < 0)
        {
            i++;
        }
        while (arr->A[j] >= 0)
        {
            j--;
        }
        if (i < j)
        {
            int temp = arr->A[i];
            arr->A[i] = arr->A[j];
            arr->A[j] = temp;
        }
    }
}

int main()
{
    struct Array arr;
    arr.length = 10;
    arr.size = 10;
    arr.A = new int[arr.size]{-6, 3, -8, 10, 5, -7, -9, 12, -4, 2};
    negativeOnLeft(&arr);
    Display(arr);
    return 0;
};