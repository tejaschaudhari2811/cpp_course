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

void DisplayList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

node *mergeLinkedLists(node *&head1, node *&head2)
{
    node *head3 = NULL;
    node *last = NULL;

    if (head1->data < head2->data)
    {
        head3 = last = head1;
        head1 = head1->next;
        last->next = NULL;
    }
    else
    {
        head3 = last = head2;
        head2 = head2->next;
        last->next = NULL;
    }

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            last->next = head1;
            last = head1;
            head1 = head1->next;
            last->next = NULL;
        }
        else
        {
            last->next = head2;
            last = head2;
            head2 = head2->next;
            last->next = NULL;
        }

        if (head1)
        {
            last->next = head1;
        }

        if (head2)
        {
            last->next = head2;
        }
    }
    return head3;
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

    node *head3 = mergeLinkedLists(head, head2);
    DisplayList(head3);
    return 0;
}