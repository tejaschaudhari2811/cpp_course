#include <iostream>
// File to practice linkedlist for 2nd time.
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        this->data = value;
        this->next = nullptr;
    }
};

void Display(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void RDisplay(Node *head)
{
    // Function to display linkedlist recursively.
    Node *temp = head;
    if (temp != nullptr)
    {
        cout << temp->data << endl;
        RDisplay(temp->next);
    }
}
int Count(Node *head)
{
    // Function to count nodes in a linkedlist.
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int RCount(Node *head)
{
    Node *temp = head;
    if (temp == nullptr)
    {
        return 0;
    }
    else
    {
        return RCount(temp->next) + 1;
    }
}

int Sum(Node *head)
{
    int sum = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        sum = sum + temp->data;
        temp = temp->next;
    }
    return sum;
}

int RSum(Node *head)
{
    // Function to calculate sum of nodes recursively.
    Node *temp = head;
    if(temp == nullptr)
    {
        return 0;
    }
    else{
        return RSum(temp->next) + temp->data;
    }
}
int main()
{
    Node *head = nullptr;
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);

    // Connect nodes
    head = first;
    first->next = second;
    second->next = third;

    RDisplay(head);
    cout << "The number of nodes in the linkedlist are " << RCount(head) << endl;
    cout << "The sum of the nodes in linkedlist is " << RSum(head) << endl;
    return 0;
}