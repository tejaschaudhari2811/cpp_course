#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};
    int n = 12; // Number of first n natural elements.
    int diff = array[0] - 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    int sum_of_n = n * (n + 1) / 2;
    cout << sum_of_n - sum << endl;
    return 0;
}