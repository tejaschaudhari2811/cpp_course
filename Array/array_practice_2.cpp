#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

int main()
{
    // Insert and display elements in an array
    struct Array arr;
    arr.size = 5;
    arr.length = 5;
    arr.A = new int[arr.size];
    for (int i = 0; i < arr.length; i++)
    {
        cin >> arr.A[i];
    }
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << endl;
    }

    return 0;
}