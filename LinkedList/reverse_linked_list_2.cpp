// Program to reverse linkedlist 2nd practice.
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
        this->next = nullptr;
    }
};

node *head = nullptr;

void displayLinkedList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void reverseLinkedList(node *&head)
{
    node *p = head;
    node *q = NULL;
    node *r = NULL;

    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head = q;
}
int main()
{

    head = new node(1);
    node *two = new node(2);
    node *three = new node(3);
    node *four = new node(4);

    head->next = two;
    two->next = three;
    three->next = four;
    reverseLinkedList(head);
    displayLinkedList(head);
    return 0;
}