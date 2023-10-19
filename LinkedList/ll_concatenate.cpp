#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};


int main(){
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    //Allocate three nodes in the heap
    one = new Node(1);
    two = new Node(2);
    three = new Node(3);

    //Connect the nodes
    head = one;
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Create second Linkedlist
    Node* second_head;
    Node* four = new Node(4);
    Node* five = new Node(5);
    Node* six = new Node(6);

    second_head = four;
    four->next = five;
    five->next = six;

    //merge two linked lists
    Node* temp = head;
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=second_head;
    second_head=NULL;

    while(temp != NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

    return 0;
}