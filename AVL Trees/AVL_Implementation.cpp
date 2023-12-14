// AVL Tree implementation 1st Session.
#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    int height;

    node(int value)
    {
        this->data = value;
        this->left = this->right = nullptr;
        this->height = 1;
    }
};

//Calculate height
int height(node* N)
{
    if(N==nullptr)
    {
        return 0;
    }
    return N->height;
}

int getBalanceFactor(node* node)
{
    if(node == nullptr)
    {
        return 0;
    }
    return height(node->left) - height(node->right);
}


//Insert node
node* insertNode(node* node, int key)
{
    if(node == nullptr)
    {
        node * new_node = new node(key);
        return new_node;
    }
    if(key < node->data)
    {
        node->left = insertNode(node->left, key);
    }
    else if(key > node->data)
    {
        node->right = insertNode(node->right, key);
    }
    else{
        return node;
    }
}
int main()
{
    return 0;
}