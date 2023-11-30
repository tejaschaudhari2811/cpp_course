#include <iostream>
using namespace std;

int main()
{
    int arr[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                    count++;
                    arr[j]=-1;
            }
        }
        if(count > 1)
            cout<<count<<endl;
    }
    return 0;
}