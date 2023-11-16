#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int value)
    {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

int main()
{
    node *root = new node(1);

    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    /*
        1
       / \
      2   3
    */
    return 0;
};