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

void DeleteElementLL(node* &head, int pos){
    if(pos==0){
        node* temp = head;
        head = head->next;
        int data = temp->data;
        delete temp;
    }
    else{
        node* p;
        node* q;
        p = head;
        q = NULL;
        for(int i=0;i<pos;i++){
            q=p;
            p=p->next;
        }
        q->next = p->next;
        int data = p->data;
        delete p;

    }
}

int main(){
    node* head;
    node* one = new node(1);
    node* two = new node(2);
    node* three = new node(3);
    node* four = new node(4);

    head=one;
    one->next=two;
    two->next=three;
    three->next=four;

    DeleteElementLL(head,2);
    //Display the linkedlist
    while(head != NULL){
        cout<<head->data<<endl;
        head=head->next;
    }

    return 0;

}