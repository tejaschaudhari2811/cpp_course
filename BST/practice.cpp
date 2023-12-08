#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;

    node(int value)
    {
        this->data = value;
        this->left = this->right = nullptr;
    }
};

// Implement recursive search on BST
node *RSearch(node *root, int key)
{
    if (root == nullptr)
    {
        return nullptr;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (key < root->data)
    {
        RSearch(root->left, key);
    }
    else
    {
        RSearch(root->right, key);
    }
}

node* Search(node *root, int key)
{
    node *temp = root;
    while (temp != nullptr)
    {
        if (key == temp->data)
        {
            return temp;
        }
        else if(key < temp->data)
        {
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }
    }
    return nullptr;

}

int main()
{
    node *root = nullptr;
    node *one = new node(1);
    node *two = new node(2);
    node *three = new node(3);

    root = two;
    two->left = one;
    two->right = three;

    node *node_found = Search(root, 2);
    cout << node_found->data << endl;
    return 0;
}