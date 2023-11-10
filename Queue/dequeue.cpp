// DEqueue implementation in C++.
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

class DEQueue
{
public:
    node *front, *rear;
    DEQueue()
    {
        front = rear = NULL;
    }

    void enqueueFront(int x)
    {
        node *temp = new node(x);
        if (front == NULL && rear == NULL)
        {
            front = rear = temp;
        }
        else
        {
            temp->next = front;
            front = temp;
        }
    }

    void enqueueRear(int x)
    {
        node *temp = new node(x);
        if (front == NULL && rear == NULL)
        {
            front = rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
    }

    void dequeueFront()
    {
        if (front == NULL)
        {
            cout << "The queue is empty" << endl;
            return;
        }
        else
        {
            node *temp = front;
            front = front->next;
            delete (temp);
        }
    }

    void dequeueRear()
    {
        if (rear == NULL)
        {
            cout << "The queue is empty" << endl;
            return;
        }

        // a temp pointer to loop through.
        node *temp = front;
        while (temp->next != rear)
        {
            temp = temp->next;
        }
        node *p = temp->next;
        rear = temp;
        delete (p);
    }
};

int main()
{
    DEQueue q;
    q.enqueueFront(1);
    return 0;
}