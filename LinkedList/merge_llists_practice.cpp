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

node *mergeLLists(node *first, node *second)
{
    node *third = NULL, *last = NULL;
    if (first->data < second->data)
    {
        third = last = first;
        first = first->next;
        last->next = NULL;
    }
    else
    {
        third = last = second;
        second = second->next;
        last->next = NULL;
    }

    while (first != NULL && second != NULL)
    {
        if (first->data < second->data)
        {
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }
        else
        {
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
        }
        if (first != NULL)
        {
            last->next = first;
        }
        else
        {
            last->next = second;
        }
    }
    return (third);
}

void Display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    // Create first linkedlist
    node *first = NULL;
    node *fone = new node(1);
    node *ftwo = new node(3);
    node *fthree = new node(5);

    // Link first LList nodes together
    first = fone;
    fone->next = ftwo;
    ftwo->next = fthree;

    // Create Second linkedlist
    node *second = NULL;
    node *sone = new node(2);
    node *stwo = new node(4);
    node *sthree = new node(6);

    // Link second LList nodes together
    second = sone;
    sone->next = stwo;
    stwo->next = sthree;

    node *thirst = mergeLLists(first, second);
    Display(thirst);
    return 0;
}