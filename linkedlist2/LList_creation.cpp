#include <iostream>
#include <limits.h>
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

int count(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int Rcount(node *head)
{
    node *temp = head;
    if (temp == NULL)
    {
        return 0;
    }
    else
    {
        return Rcount(temp->next) + 1;
    }
}

int max(node *head)
{
    int max = INT_MIN;
    node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data > max)
        {
            max = temp->data;
        }
        temp = temp->next;
    }
    return max;
}

int Rmax(node *head)
{
    int x = INT_MIN;
    if (head == nullptr)
    {
        return INT_MIN;
    }
    else
    {
        x = Rmax(head->next);
        if (x > head->data)
        {
            return x;
        }
        else
        {
            return head->data;
        }
    }
}

int min(node *head)
{
    int min = INT_MAX;
    node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data < min)
        {
            min = temp->data;
        }
        temp = temp->next;
    }
    return min;
}

node *linearSearch(node *head, int key)
{
    node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == key)
        {
            return (temp);
        }
        temp = temp->next;
    }
    return nullptr;
}

node *RLinearSearch(node *head, int key)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (key == head->data)
    {
        return (head);
    }
    return RLinearSearch(head->next, key);
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
    node *false_head = nullptr;
    cout << Rcount(head) << endl;
    cout << RLinearSearch(head, 3)->data << endl;
    return 0;
}