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