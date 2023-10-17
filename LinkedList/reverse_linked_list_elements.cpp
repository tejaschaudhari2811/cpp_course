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

void Reverse(node* head, int size){
    int arr[size];
    int i=0;
    node* temp=head;
    while(temp!=NULL){
        arr[i] = temp->data;
        temp=temp->next;
        i++;
    }
    temp=head;
    while(temp!=NULL){
        temp->data = arr[--i];
        temp=temp->next;
    }
}

int main(){
    node* head = NULL;
    node* one = new node(1);
    node* two = new node(3);
    node* three = new node(5);

    head = one;
    one->next = two;
    two->next = three;

    Reverse(head, 3);
    //Display the linkedlist
    while(head != NULL){
        cout<<head->data<<endl;
        head=head->next;
    }

    return 0;
}