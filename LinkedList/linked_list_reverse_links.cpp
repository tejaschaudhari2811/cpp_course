#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int value){
        data = value;
        next = NULL;
    }
};

void Reverse(node* &head){
    node* p = head;
    node* q = NULL;
    node* r = NULL;

    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
}
int main(){
    node* head;
    node* one = new node(1);
    head = one;

    //create other nodes
    node* two = new node(3);
    node* three = new node(4);
    node* four = new node(5);
    node* five = new node(7);

    //connect the nodes to each other.
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;

    Reverse(head);
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

    return 0;
}