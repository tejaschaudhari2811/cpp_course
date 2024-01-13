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

void display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

void RecursiveDisplay(node *p)
{
    node *head = p;
    static int flag = 0;
    if (p != head || flag == 0)
    {
        flag = 1;
        cout << p->data << " ";
        RecursiveDisplay(p->next);
    }
}

int main()
{
    // Create head for circular linked list
    node *head = NULL;
    node *one = new node(8);
    node *two = new node(3);
    node *three = new node(9);
    node *four = new node(6);
    node *five = new node(2);

    // Connect the nodes together
    head = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = one;

    display(head);
    return 0;
}