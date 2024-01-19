#include <iostream>
using namespace std;

class node
{
public:
    node *prev;
    int data;
    node *next;

    node(int value)
    {
        this->prev = nullptr;
        this->data = value;
        this->next = nullptr;
    }
};

void Display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

node *Create(int arr[], int n)
{
    // This function creates a doubly linkedlist from the given array.
    node *head = new node(arr[0]);
    node *last = head;
    for (int i = 1; i < n; i++)
    {
        node *t = new node(arr[i]);
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
    return (head);
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    node *head = Create(A, 5);
    Display(head);
    return 0;
}