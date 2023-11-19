#include <iostream>
#include <stack>
using namespace std;

struct node
{
    int data;
    node *lchild;
    node *rchild;

    node(int value)
    {
        this->data = value;
        this->lchild = NULL;
        this->rchild = NULL;
    }
};

void iterativePreorder(node *root)
{
    // Base case
    if (root == NULL)
    {
        return;
    }

    stack<node *> nodeStack;
    nodeStack.push(root);

    while (nodeStack.empty() == false)
    {
        struct node *node = nodeStack.top();
        cout << node->data << endl;
        nodeStack.pop();
        if (node->rchild)
        {
            nodeStack.push(node->rchild);
        }
        if (node->lchild)
        {
            nodeStack.push(node->lchild);
        }
        }
}

int main()
{
    struct node *root = new node(10);
    root->lchild = new node(8);
    root->rchild = new node(2);
    root->lchild->lchild = new node(3);
    root->lchild->rchild = new node(5);
    root->rchild->lchild = new node(2);
    iterativePreorder(root);
    return 0;
}