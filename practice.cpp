#include <iostream>
#include<limits.h>
using namespace std;

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
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void RDisplay(node *head)
{
    node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    else
    {
        cout << temp->data << endl;
        RDisplay(temp->next);
    }
}

int Count(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int Rcount(node *head)
{
    node *temp = head;
    if (temp == NULL)
    {
        return 0;
    }
    else
    {
        return Rcount(temp->next) + 1;
    }
}

int SumLList(node* head)
{
    node* temp = head;
    int sum = 0;
    while(temp!=NULL)
    {   
        sum = sum + temp->data;
        temp = temp->next;
    }
    return sum;
}

int Rsum(node* head)
{
    node* temp = head;
    if(temp==NULL){
        return 0;
    }
    else{
        return Rsum(temp->next)+temp->data;
    }
}

int MaxElement(node* head)
{
    int max = INT_MIN;
    node* temp = head;
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

int MinElement(node* head)
{
    int min = INT_MAX;
    node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data<min)
        {
            min = temp->data;
        }
        temp = temp->next;
    }
    return min;

}

//LinearSearch in a Linked list
bool Search(node* head, int key)
{
    node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    node *head = NULL;
    node *first = new node(1);
    node *two = new node(2);

    node *three = new node(3);

    node *four = new node(4);

    node *five = new node(5);

    head = first;

    first->next = two;
    two->next = three;
    three->next = four;
    four->next = five;

    // Display(head);
    // RDisplay(head);
    cout << SumLList(head) << endl;
    cout << Rsum(head) << endl;
    cout << MaxElement(head) << endl;
    cout << MinElement(head) << endl;
    cout<<Search(head,3)<<endl;
    return 0;
}