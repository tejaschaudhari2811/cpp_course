#include <iostream>
using namespace std;

struct node
{
    int data;
    node *lchild;
    node *rchild;
    node(int value) : data(value), lchild(nullptr), rchild(nullptr) {}
};

// A simple stack implementation
struct Stack
{
    node **array;
    int capacity;
    int top;

    Stack(int size) : capacity(size), top(-1)
    {
        array = new node *[size];
    }

    ~Stack()
    {
        delete[] array;
    }

    void push(node *item)
    {
        if (top == capacity - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        array[++top] = item;
    }

    node *pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
            return nullptr;
        }
        return array[top--];
    }

    bool isEmpty()
    {
        return top == -1;
    }
};

void iterativeInorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }

    Stack customStack(100);

    customStack.push(root);

    
}
int main()
{
    node *root = new node(1);
    root->lchild = new node(8);
    root->rchild = new node(2);
    root->lchild->lchild = new node(3);
    root->lchild->rchild = new node(5);
    root->rchild->lchild = new node(2);

    iterativeInorder(root);
}