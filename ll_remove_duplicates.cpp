#include<iostream>
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

void RemoveDuplicates(node* head){
    node* q = head;
    node* p = head->next;
    while(q!=NULL){
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q = p->next;
        }
    }

}


int main(){
    node* head;
    node* one = new node(3);
    node* two = new node(5);
    node* three = new node(8);
    node* four = new node(8);

    head=one;
    one->next=two;
    two->next=three;
    three->next=four;

    RemoveDuplicates(head);
    //Display the linkedlist
    while(head != NULL){
        cout<<head->data<<endl;
        head=head->next;
    }


    return 0;
}