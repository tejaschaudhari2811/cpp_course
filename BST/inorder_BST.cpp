#include<iostream>
using namespace std;

struct node
{
    int key;
    struct node *left, *right;
};

struct node* newNode(int item)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = nullptr;
    return temp;
}

struct node* insert(struct node* node, int key)
{
    if(node==nullptr)
    {
        return newNode(key);
    }
    if(key<node->key)
    {
        node->left = insert(node->left,key);
    }
    else if (key>node->key)
    {
        node->right = insert(node->right, key);
    }
    return node;
}

void inorder(struct node* node)
{
    if(node != nullptr)
    {
        inorder(node->left);
        cout<<node->key<<endl;
        inorder(node->right);
    }
}

// Driver Code
int main()
{
     
    /* Let us create following BST 
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80 
   */
    struct node* root = NULL;
 
    // Creating the BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
 
    // Function Call
    inorder(root);
 
    return 0;
}
 