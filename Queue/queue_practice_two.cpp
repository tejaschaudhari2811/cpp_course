// Code to practice queue for 2nd revision.
#include<iostream>
using namespace std;

class Queue
{
public:
    int size;
    int front;
    int rear;
    int *Q;

    Queue(int size)
    {
        this->size = size;
        this->front=this->rear=-1;
        this->Q = new int[this->size];
    }

    void enqueue(int element);
    int dequeue();
    bool isEmpty();
    bool isFull();
    int first();
    int last();
    void Display();
};

void Queue::enqueue(int element)
{
    if(rear == size -1)
    {
        cout<<"The Queue is full."<<endl;
    }
    else{
        Q[++rear] = element;
    }
    return;
}

int Queue::dequeue()
{
    int x = -1;
    if(front == rear)
    {
        cout<<"The Queue is Empty"<<endl;
        return -1;
    }
    else{
        return Q[++front];
    }
}

void Queue::Display()
{
    for (int i = front + 1; i <= rear; i++)
    {
        cout << Q[i] << endl;
    }
}


int main()
{
    Queue q(5);
    q.enqueue(2);
    q.dequeue();
    q.Display();
    return 0;
}