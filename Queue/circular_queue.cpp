#include <iostream>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int size;
    int *Q;

public:
    Queue()
    {
        front=rear=0;
        size=5;
        Q = new int[size];
    }

    Queue(int size)
    {
        front = rear =0;
        this->size = size;
        this->Q = new int[this->size];
    }
    void enqueue(int x);
    int dequeue();
    void Display();
};

void Queue::enqueue(int x)
{
    if((rear+1)%size == front)
    {
        cout<<"The Queue is full"<<endl;
    }
    else{
        rear = (rear+1)%size;
        Q[rear] = x;
    }
}

int Queue::dequeue()
{
    int x = -1;
    if(front==rear)
    {
        cout<<"The Queue is Empty"<<endl;
    }
    else
    {
        front = (front+1)%size;
        x = Q[front];
    }
    return x;

}
int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    return 0;
}