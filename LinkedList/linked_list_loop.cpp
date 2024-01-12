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


int detectLoop(node *head)
{
    node* slow = head;
    node* fast = head;
    while(slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return true;
    }
    return false;
}

int main()
{
    //Create head for linkedlist
    node* head = NULL;
    node *one = new node(1);
    node *two = new node(2);
    node *three = new node(3);
    node *four = new node(4);
    node *five = new node(5);

    //Connect the nodes
    head = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = three;

    int found = detectLoop(head);
    cout<<found<<endl;

    return 0;
}