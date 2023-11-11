// Reverse Linkedlist using link reversal
#include<iostream>
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

void Display(node *head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void Reverse(node* &head)
{
    node *p = head;
    node *q = NULL;
    node *r = NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next = r;
    }
    head = q;
}

int main()
{
    node *head = NULL;
    node *one = new node(1);
    node *two = new node(2);
    node *three = new node(3);
    node *four = new node(4);

    head = one;
    one->next = two;
    two->next = three;
    three->next = four;
    Reverse(head);
    Display(head);
    return 0;
}