#include <iostream>
using namespace std;

// This program implements array ADT with basic functions.
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

void add(struct Array &arr, int element)
{
    if (arr.length == arr.size)
    {
        cout << "The array is already full" << endl;
    }
    else
    {
        arr.A[arr.length] = element;
        arr.length++;
    }
}

void insert(struct Array &arr, int index, int element)
{
    // This program adds an element after the last element already present in the array.
    if (index > arr.length)
    {
        cout << "This is not a valid index" << endl;
        return;
    }

    else
    {
        int i;
        for (i = arr.length; i > index; i--)
        {
            arr.A[i] = arr.A[i - 1];
        }
        arr.A[index] = element;
        arr.length++;
    }
}

void Delete(struct Array &arr, int index)
{
    if (index >= arr.length || arr.length == 0)
    {
        cout << "Invalid index or array is empty" << endl;
    }
    else
    {
        for (int i = index; i < arr.length - 1; i++)
        {
            arr.A[i] = arr.A[i + 1];
        }
        arr.length--;
    }
}

int main()
{
    struct Array arr;
    cout << "Enter the size of array ";
    cin >> arr.size;
    int n;

    arr.A = new int[arr.size];
    cout << "Enter the number of elements in array ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr.A[i];
    }
    arr.length = n;

    insert(arr, 2, 15);
    Display(arr);
    return 0;
}