#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int n)
    {
        this->data = n;
        this->next = nullptr;
    }
};

class Stack
{
    Node *top;

public:
    Stack(){
        top = NULL;
    }

    void push(int data)
    {
        Node* temp = new Node(data);
    }
}

int main()
{
    return 0;
}