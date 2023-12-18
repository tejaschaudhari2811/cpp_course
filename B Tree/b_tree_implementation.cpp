// Search a key on a B-tree in C++

#include<iostream>
using namespace std;

class Node
{
    int *keys;
    int t;
    Node **C;
    int n;
    bool leaf;

    public:
    Node(int temp, bool bool_leaf);

    void insertNotFull(int k);
    void splitChild(int i, Node *y);
    void traverse;

    Node* search(int k);

    friend class Btree;
    
};

class Btree
{
    Node *root;
    int t;

    public:
    Btree(int temp)
    {
        root = NULL;
        t = temp;
    }
    void insert(int k);
};

void Btree::insert(int k)
{
    if(root == NULL)
    {
        root = new Node(t, true);
        root->keys[0] = k;
        root->n = 1;
    }
    else if(root->n == 2 * t - 1)
}

int main()
{
    Btree t(3);
    t.insert(8);
    return 0;
}