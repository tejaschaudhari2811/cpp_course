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

    Display(arr);
    return 0;
}