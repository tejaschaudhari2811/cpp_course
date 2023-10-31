#include <iostream>
using namespace std;

const int MAX = 1000;

class Stack
{
    int top;

public:
    int mystack[MAX];

    Stack()
    {
        top = -1;
    }
    bool push(int x);
    int pop();
    bool isEmpty();
};

bool Stack::push(int item)
{
    if (top >= (MAX - 1))
    {
        cout << "Stack overflow!" << endl;
        return false;
    }
    else
    {
        mystack[++top] = item;
        cout << item << endl;
        return true;
    }
}

// Remove or pops elements out of the stack
int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack underflow!";
        return 0;
    }
    else
    {
        int item = mystack[top--];
        return item;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

int main()
{
    class Stack st;
    cout << "The stack push" << endl;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "The stack pop : " << endl;
    while (!st.isEmpty())
    {
        cout << st.pop() << endl;
    }
    return 0;
}
