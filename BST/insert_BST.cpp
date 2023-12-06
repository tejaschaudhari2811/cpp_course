// Program to insert node in a BST.
#include <iostream>
using namespace std;

struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp = new node();
    temp->key = item;
    temp->left = temp->right = nullptr;
    return temp;
}

// FUnction to insert a new node with given key.
struct node *Insert(struct node *node, int key)
{
    if (node == nullptr)
    {
        return newNode(key);
    }
    if (key < node->key)
    {
        node->left= Insert(node->left, key);
    }
    else if(key > node->key)
    {
        node->right= Insert(node->right, key);
    }

    //return the node pointer.
    return node;
}

void Inorder(struct node* root)
{
    if(root != nullptr)
    {
        Inorder(root->left);
        cout<<root->key<<endl;
        Inorder(root->right);
    }
}

int main()
{
    struct node* root = nullptr;
    root = Insert(root, 50);
    Insert(root, 30);
    Insert(root, 20);
    Insert(root, 40);
    Insert(root, 70);
    Insert(root, 60);
    Insert(root, 80);
    Inorder(root);

    return 0;
}