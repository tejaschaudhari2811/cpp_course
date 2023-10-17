#include<iostream>
#include<limits.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int value){
        data=value;
        next=NULL;
    }
};

bool Sorted(node* head){
    int x = INT_MIN;
    while(head!=NULL){
        if(head->data<x){
            return false;
        }
        x=head->data;
        head = head->next;
    }
    return true;
}
int main(){
    node* head;
    node* one = new node(1);
    node* two = new node(5);
    node* three = new node(3);
    node* four = new node(4);

    head=one;
    one->next=two;
    two->next=three;
    three->next=four;

    if(Sorted(head)){
        cout<<"The linkedlist is sorted"<<endl;
    }
    else{
        cout<<"The linkedlist is not sorted"<<endl;
    }
    return 0;
}