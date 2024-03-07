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
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void Rdisplay(node *head)
{
    node *temp = head;
    if (temp != NULL)
    {
        cout << temp->data << endl;
        Rdisplay(temp->next);
    }
}

int sum(node *head)
{
    int sum = 0;
    node *temp = head;
    while (temp != nullptr)
    {
        sum = sum + temp->data;
        temp = temp->next;
    }
    return sum;
}

int main()
{
    node *head;
    node *one = new node(1);
    node *two = new node(2);
    node *three = new node(3);
    node *four = new node(4);

    head = one;
    one->next = two;
    two->next = three;
    three->next = four;

    Rdisplay(head);
    cout<<sum(head)<<endl;
    return 0;
}