#include<iostream>
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

int main()
{
    return 0;
}