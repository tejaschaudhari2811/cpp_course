#include <iostream>
#include <limits.h>
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
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void InsertAtTail(node *head, int element)
{
    // Here assume that node is inserted at end
    node *new_node = new node(element);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void InsertAtHead(node *&head, int element)
{
    node *new_node = new node(element);
    new_node->next = head;
    head = new_node;
}

void InsertSorted(node *&head, int element)
{
    node *new_node = new node(element);
    node *temp = head;
    while (temp->next->data < new_node->data)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    return;
}

void Delete(node *head)
{
    node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = nullptr;
}

bool isSorted(node *head)
{
    node *temp = head;
    int x = INT_MIN;
    while(temp!=NULL)
    {
        if(temp->data < x)
        {
            return false;
        }
        x = temp->data;
        temp = temp->next;
    }
    return true;
}


int main()
{
    node *head = nullptr;
    node *one = new node(2);
    node *two = new node(4);
    node *three = new node(6);

    // Connect the nodes
    one->next = two;
    two->next = three;

    head = one;
    cout<<isSorted(head)<<endl;
    Display(head);
    return 0;
};