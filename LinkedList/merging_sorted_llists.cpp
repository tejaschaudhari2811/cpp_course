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

void displayList(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

node *mergeLists(node *head1, node *head2)
{
    node *third, *last;
    if (head1->data < head2->data)
    {
        third = last = head1;
        head1 = head1->next;
    }
    else
    {
        third = last = head2;
        head2 = head2->next;
    }

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            last = head1;
            head1 = head1->next;
        }
        else
        {
            last = head2;
            head2 = head2->next;
        }
    }

    if (head1 != NULL)
    {
        while (head1->next != NULL)
        {
            head1 = head1->next;
        }
        last = head1;
    }

    if (head2 != NULL)
    {
        while (head2->next != NULL)
        {
            head2 = head2->next;
        }
        last = head2;
    }

    return (third);
}
int main()
{
    // Create head for first list
    node *head = NULL;
    node *one = new node(1);
    node *three = new node(3);
    node *five = new node(5);
    node *seven = new node(7);

    // connect the fist linkedlist
    head = one;
    one->next = three;
    three->next = five;
    five->next = seven;

    // Create head for second linked list
    node *head2 = NULL;
    node *two = new node(2);
    node *four = new node(4);
    node *six = new node(6);
    node *eight = new node(8);

    // Connect the second linked list
    head2 = two;
    two->next = four;
    four->next = six;
    six->next = eight;

    node *third = mergeLists(head, head2);
    displayList(third);
    return 0;
}