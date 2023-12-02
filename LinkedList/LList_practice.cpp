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

    Display(head);

    return 0;
}