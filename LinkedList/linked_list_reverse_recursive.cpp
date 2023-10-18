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

void RReverse(node* &head, node* q){
    node* temp = head;
    if(q!=NULL){
        RReverse(head, q->next);
        temp->next = q;
    }
    else{
        head = q;
    }
    
}

void RReverse(node* &head, node* q) {
    node* temp = head;
    if (q != NULL) {
        RReverse(head, q->next);
        q->next = temp;
        temp->next = NULL;
    } else {
        head = temp;
    }
}

int main(){
    node* head = NULL;
    node* one = new node(1);
    //create other nodes
    node* two = new node(3);
    node* three = new node(4);
    node* four = new node(5);
    node* five = new node(7);

    //connect the nodes to each other.
    head = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    RReverse(NULL, head);
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

    return 0;
}