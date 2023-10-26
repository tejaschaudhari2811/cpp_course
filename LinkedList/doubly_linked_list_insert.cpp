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

void Insert(node* &head, int index, int value){
    node* new_node = new node(value);
    node* p = head;
    if(index==0){
        if(head==NULL){
            head=new_node;
        }
        else{
            new_node->next=head;
            head->prev=new_node;
            head=new_node;
        }
    }
    else{
        for(int i=0;i<index;i++){
            p = p->next;
        }
        if(p->next){
            new_node->next=p->next;
            p->next->prev = new_node;
        }
        new_node->prev=p;
        p->next=new_node;
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

    Insert(head, 2, 100);
    Display(head);

    return 0;
}