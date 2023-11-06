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

// Traverse a linkedlist
void Display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void insert(node* &head, int index, int data)
{
    node* new_node = new node(data);
    node* p = head;
    if(index == 0)
    {
        p->next = head;
        head = p;
        return
    }
    else
    {
        for(int i=0;i<index;i++)
        {
            p = p->next;
        }
        p->next = new_node
    }
}

int main()
{
    node *head;
    node *one = new node(1);
    node *two = new node(2);
    node *three = new node(3);

    head = one;
    one->next = two;
    two->next = three;

    Display(head);

    return 0;
}