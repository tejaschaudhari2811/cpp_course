#include<iostream>
#include<limits.h>
using namespace std;

//Program to display linked list
class node
{
    public:
    int data;
    node *next;

    node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

void Display(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void Rdisplay(node *head)
{
    node *temp = head;
    if(temp!=NULL)
    {
        cout<<temp->data<<endl;
        Rdisplay(temp->next);
    }
}

int Count(node *head)
{
    node *temp = head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

int Rcount(node *head)
{
    node* temp = head;
    if(temp==NULL){
        return 0;
    }
    else{
        return Rcount(temp->next)+1;
    }
}

int Sum(node *head)
{
    node *temp = head;
    int sum=0;
    while(temp!=NULL)
    {
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
}

int Rsum(node *head)
{
    node *temp = head;
    if(temp == NULL)
    {
        return 0;
    }
    else{
        return Rsum(temp->next)+temp->data;
    }
}

int maxElement(node *head)
{
    int max = INT_MIN;
    node *temp = head;
    while(temp!=NULL)
    {
        if(temp->data > max)
        {
            max = temp->data;
        }
        temp = temp->next;
    }
    return max;
}

int minElement(node *head)
{
    int min = INT_MAX;
    node *temp = head;
    while(temp!=NULL)
    {
        if(temp->data < min)
        {
            min = temp->data;
        }
        temp = temp->next;
    }
    return min;
}

node* search(node* head, int key)
{
    while(head!=NULL)
    {
        if(key == head->data)
        {
            return (head);
        }
        else{
            head = head->next;
        }
    }
    return NULL;
}

int main()
{
    node *head = NULL;
    node *first = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *fourth = new node(4);
    
    head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    cout<<maxElement(head)<<endl;
    cout<<search(head, 5)<<endl;
    return 0;
}