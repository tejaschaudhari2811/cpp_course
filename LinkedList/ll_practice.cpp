#include <iostream>
using namespace std;

// Linkedlist Practice code file for 2nd iteration.

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        this->data = value;
        this->next = nullptr;
    }
};

void Display(node *head)
{
    node* temp = head;
    while(temp !=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

int main()
{
    node *head = nullptr;
    node *one = new node(1);
    node *two = new node(2);
    node *three = new node(3);

    // Connect the nodes
    one->next = two;
    two->next = three;    

    head = one;
    Display(head);
    return 0;
}