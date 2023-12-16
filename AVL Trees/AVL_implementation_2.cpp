// AVL Tree implementation in C++: 2nd revision.
#include<iostream>
using namespace std;

class Node
{
    public:
    int key;
    Node *left;
    Node *right;
    int height;
};

// new Node Creation
Node *newNode(int key)
{
    Node *node = new Node();
    node->key = key;
    node->left=node->right=nullptr;
    node->height = 1;
    return (node);
}

int getBalanceFactor(Node *node)
{
    if(node == NULL)
    {
        return 0;
    }
    return height(node->left) - height(node->right);
}
int max(int a, int b)
{
    return (a>b)?a:b;
}

int height(Node* node)
{
    if(node == NULL){
        return 0;
    }
    return node->height;
}

// Insert a new node
Node *insertNode(Node *node, int key)
{
    if(node == NULL)
    {
        return (newNode(key));
    }
    if(key < node->key)
    {
        node->left = insertNode(node->left, key);
    }
    else if(key > node->key)
    {
        node->right = insertNode(node->right, key);
    }
    else
        return node;

    //Update Balance Factor of Each node to balance the tree
    node->height = 1 + max(height(node->left),height(node->right))
    int balancefactor = getBalanceFactor(node);
    if(balancefactor>1)
    {
        if(key)
    }
}

int main()
{
    Node *root = NULL;
    root = insertNode(root, 33);
    return 0;
}