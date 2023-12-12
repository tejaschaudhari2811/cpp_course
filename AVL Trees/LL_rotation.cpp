#include <iostream>
// Program to perform LL Rotation on AVL Tree.

struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
    int height;
};

struct node *Rinsert(struct node *p, int key)
{
    struct node *t = NULL;
    if (p == NULL)
    {
        t = new node;
        t->data = key;
        t->lchild = t->rchild = nullptr;
        t->height = 0;
        return t;
    }
    if (key < p->data)
    {
        p->lchild = Rinsert(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->rchild = Rinsert(p->rchild, key);
    }
    return p;
}

int main()
{
    struct node *root = NULL;
    std::cout << "Program Compiled." << std::endl;
    root = Rinsert(root, 10);
    Rinsert(root, 5);
    Rinsert(root, 2);
    return 0;
}