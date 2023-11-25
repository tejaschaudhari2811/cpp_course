#include <iostream>
using namespace std;

class Stack
{
private:
    int top;

public:
    int *A;
    int size;

    Stack(int size)
    {
        this->top = -1;
        this->size = size;
        this->A = new int[this->size];
    }
    void push(int item);
    int pop();
    bool isEmpty();
};

void Stack::push(int item)
{
    if (top >= size)
    {
        cout << "Stack overflow" << endl;
    }
    else
    {
        A[++top] = item;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    else
    {
        return A[top--];
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}
int main()
{
    class Stack st(5);
    st.isEmpty();
    return 0;
}