#include<iostream>
using namespace std;

//Circular queue implementationu using array.
class Queue
{
    int front,rear;
    int size;
    int *arr;

    public:
    Queue(int s)
    {
        front = rear = -1;
        size = s;
        arr = new int[s];
    }
    void enqueue(int value);
    int dequeue();
    void displayQueue();
}

//Function to create circular Queue
void Queue::enqueue(int value)
{
    if((front==0 && rear==size-1) || ((rear+1)%size == front))
    {
        cout<<"Queue is full"<<endl;
        return;
    }
    else if(front == -1)
    {
        front = rear = 0;
        arr[rear] = value;
    }
    else if(rear==size-1 and front !=0)
    {
        //move rear to 0.
        rear = 0;
        arr[rear] = 0;
    }
    else{
        rear++;
        arr[rear]=value;
    }
}
