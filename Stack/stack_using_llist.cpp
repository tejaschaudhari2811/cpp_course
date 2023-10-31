#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class Stack
{
private:
    node *top;

public:
    Stack()
    {
        top = NULL;
    }
    void push(int x);
    int pop();
    void display();
};

void Stack::push(int x)
{
    node *t = new node;
    if (t == nullptr)
    {
        t->data = x;
        top = t;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int Stack::pop()
{
    int x = -1;
    if (top == NULL)
    {
        return x;
    }
    else
    {
        node *temp = top;
        x = top->data;
        top = top->next;
        delete temp;
    }
}

void Stack::display()
{
    if (top == NULL)
    {
        cout << "The Stack is empty" << endl;
    }
    node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    Stack stk;
    stk.push(10);
    stk.push(30);
    stk.push(40);
    stk.display();
    return 0;
}