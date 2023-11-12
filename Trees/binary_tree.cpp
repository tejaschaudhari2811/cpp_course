// Binary Tree in C++
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

// Create a new node
struct node *newNode(int value)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));

    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
int main()
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    return 0;
}