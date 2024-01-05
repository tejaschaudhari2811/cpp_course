/*
Chaining is an open hashing method with variable space.
The hashing array is limited to size 10 in this case.
*/
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = nullptr;
    }
};

int Chaining(int arr[], int n)
{
    Node **HashMap[10];
    for (int i = 0; i < 10; i++)
    {
        HashMap[i] = nullptr;
    }
    for (int i = 0; i < n; i++)
    {
        index = arr[i] % 10;
        if (HashMap[index] == nullptr)
        {  
            HashMap[index]->next = arr[i];
        }
        else{
            Node *temp = HashMap[index];
        }
    }
}

int main()
{
    int arr[] = {16, 12, 25, 39, 5};

    return 0;
}