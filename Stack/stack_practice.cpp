// First Revision of Stack Data Structure
#include <iostream>
using namespace std;

const int MAX = 1000;

class stack
{
private:
    int top;

public:
    int a[MAX]; // Declare an array of max size 1000;

    stack()
    {
        top = -1;
    }

    void push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

void stack::push(int x)
{
    if (top >= (MAX - 1))
    {
        cout<<"Stack Overflow";
    }
    else{
        a[top++] = x;
    }
}

int stack::pop()
{
    if(top == -1)
    {
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    else{
        return a[top--];
    }
}

int stack::peek()
{
    if(top < 0)
    {
        cout<<"The stack is empty"<<endl;
        return -1;
    }
    else{
        return a[top];
    }
}


int main()
{
    return 0;
}