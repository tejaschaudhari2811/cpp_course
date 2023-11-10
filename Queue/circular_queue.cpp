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
    if(front==rear)
    {
        cout<<"The Queue is full"<<endl;
    }
    else{
        rear++;
        Q[rear] = x;
    }
}

int Queue::dequeue()
{
    int x = -1;
}
int main()
{

    return 0;
}