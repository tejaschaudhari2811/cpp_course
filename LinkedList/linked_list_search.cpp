#include<iostream>
using namespace std;

// Create a node
class Node{
    public:
    int data;
    Node* next;
};

Node* Search(Node *head, int key){
    Node* temp = head;
    while(temp!=NULL){
        if(key==temp->data){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}

int main(){

    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;
    Node* four = NULL;

    // Allocate three nodes in heap
    one = new Node();
    two = new Node();
    three = new Node();
    four = new Node();

    // Add data to nodes
    one->data = 1;
    two->data = 2;
    three->data = 3;
    four->data = 4;

    // Connect the nodes together
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    head = one;
    cout<<"The key is at position "<<Search(head,3)->data<<endl;
    // Free the allocated memeory
    delete one;
    delete two;
    delete three;
    delete four;

    return 0;
}