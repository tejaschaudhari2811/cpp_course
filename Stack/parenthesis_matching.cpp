#include <iostream>
using namespace std;

class node
{
public:
    char data;
    node *next;
};

class Stack
{
public:
    node *top;

    Stack()
    {
        top = NULL;
    }
    void push(char x);
    char pop();
    void display();
};

void Stack::push(char x){
    node* t = new node();
    if(t == nullptr){
        t->data = x;
        top=t;
    }
    else{
        t->data = x;
        t->next = t;
        top = t;
    }
}

char Stack::pop()
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
        return x;
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

int isBalanced(string &str)
{
    int n = str.length();
    Stack st;
    for(int i=0; i< n; i++)
    {
        if(str[i] == '(')
        {
            st.push(str[i]);
            continue;
        }
        else if(str[i] == ')')
        {
            st.pop();
        }
    }
    if(st.top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    string str = "(a+b)";
    cout<<isBalanced(str);
    return 0;
}