#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

void CountNodes(node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    cout << count << endl;
}

void RDisplay(node *head)
{
    ;
    if (head == NULL)
    {
        return;
    }
    else
    {
        cout << head->data << endl;
        RDisplay(head->next);
    }
}
int main()
{
    node *head = NULL;
    node *first = new node(1);
    node *two = new node(2);
    node *three = new node(3);

    head = first; // Point head to first.

    // Conncet the nodes to each other.
    first->next = two;
    two->next = three;

    // display the linked list.
    CountNodes(head);
    return 0;
}