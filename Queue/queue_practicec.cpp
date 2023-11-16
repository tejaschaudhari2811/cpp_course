#include <iostream>
using namespace std;

// Queue using Linkedlist.

// Create a linkedlist node.
class node
{
public:
    int data;
    node *next = NULL;

    node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

class Queue
{
public:
    node *front, *rear;
    Queue()
    {
        this->front = this->rear = NULL;
    }
    void enqueue(int x);
    void dequeue();
};

void Queue::enqueue(int x)
{
    node *temp = new node(x);
    if (rear == NULL)
    {
        front = rear = NULL;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void Queue::dequeue()
{
    if (front == NULL)
    {
        return;
    }
    node *temp = front;
    front = front->next;
    delete (temp);
}

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.dequeue();
    return 0;
}