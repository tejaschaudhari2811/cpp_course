#include <iostream>
using namespace std;

class node
{
public:
    node *lchild;
    int data;
    node *rchild;

    node(int value)
    {
        this->lchild = nullptr;
        this->data = value;
        this->rchild = nullptr;
    }
};

void Insert(node *t, int key)
{
    node *r = nullptr, *p;
    while (t != nullptr)
    {
        r = t;
        if (key == t->data)
        {
            return;
        }
        else if (key < t->data)
        {
            t = t->lchild;
        }
        else
        {
            t = t->rchild;
        }
    }
    p = new node(key);
    if (p->data < r->data)
    {
        r->lchild = p;
    }
    else
    {
        r->rchild = p;
    }
}

int main()
{
    // Create a binary Search Tree
    node *head = NULL;
    node *root = new node(30);
    head = root;
    node *l1_lchild = new node(15);
    node *l1_rchild = new node(50);

    // Connect the nodes.
    root->lchild = l1_lchild;
    root->rchild = l1_rchild;

    return 0;
}