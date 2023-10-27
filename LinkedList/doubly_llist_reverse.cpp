#include<iostream>
using namespace std;

class node{
    public:
    node* prev;
    int data;
    node* next;

    node(int value){
        this->prev = NULL;
        this->data = value;
        this->next = NULL;
    }
};

void Display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next; 
    }

}

void Reverse(node* &head){
    node* p = head;
    node* temp;
    while(p!=NULL){
        temp=p->next;
        p->next = p->prev;
        p->prev = temp;
        if(temp==NULL){
            head=p;
            break;
        }
        p=temp;
    }
}

int main(){
    node* head = NULL;
    node* first = new node(1);
    node* second = new node(2);
    node* third = new node(3);
    node* fourth = new node(4);

    head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    //Connect the nodes backward.
    fourth->prev = third;
    third->prev = second;
    second->prev = first;

    Reverse(head);
    Display(head);

    return 0;
}