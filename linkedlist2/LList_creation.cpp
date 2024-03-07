#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        this->data = value;
        this->next = nullptr;
    }
};

int main()
{
    node* p = new node(2);
    cout << p->data <<" "<< p->next << endl;
    return 0;
}