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

void InsertAtTail(node* head, int element)
{
    // Here assume that node is inserted at end
    node * new_node = new node(element);
    node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
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
    InsertAtTail(head, 20);
    Display(head);
    return 0;
};