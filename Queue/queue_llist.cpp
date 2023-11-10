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

class Queue
{
public:
    node *front, *rear;
    Queue()
    {
        front = rear = NULL;
    }

    void enqueue(int x)
    {
        node *temp = new node(x);
        cout << "Node added " << temp->data << endl;
        if (rear == NULL)
        {
            front = rear = temp;
        }
        rear->next = temp;
        rear = temp;
    }

    void dequeue()
    {
        if (front == NULL)
        {
            return;
        }
        node *temp = front;
        front = front->next;
        delete (temp);
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    return 0;
}