// C++ program to implement iterative preorder traversal.
#include<iostream>
#include<stack>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int value)
    {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

void iterativePreorder(node *root)
{
    // Base case
    if(root == NULL)
    {
        return;
    }

    // Create an empty stack and push root to it.
    stack<node*> nodeStack;

}


int main()
{

    return 0;
}