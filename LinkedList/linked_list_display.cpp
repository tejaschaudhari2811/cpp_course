// Create a program to display a linkedlist.
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int main(){
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    //Allocate three nodes in the heap
    one = new Node();
    two = new Node();
    three = new Node();

    // Assign the values
    one->data = 1;
    two->data = 2;
    three->data = 3;

    //Connect the nodes
    head = one;
    one->next = two;
    two->next = three;
    three->next = NULL;

    //Display the linkedlist
    while(head != NULL){
        cout<<head->data<<endl;
        head=head->next;
    }

    return 0;
}