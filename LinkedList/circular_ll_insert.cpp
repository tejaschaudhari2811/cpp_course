#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int value){
        this->data=value;
        this->next=NULL;
    }
};

void Display(node* head){
    node* temp = head;
    do{
        cout<<temp->data<<endl;
        temp=temp->next;
    }while(temp!=head);

}

void Insert(node* &head, int position, int new_node_value){
    node* p = head;
    node* temp = new node(new_node_value);
    
    if(position == 0){
        if(head == NULL){
            head = temp;
            head->next = head;
        }
        else {
            do{
                p = p->next;
            } while (p->next != head);
            p->next = temp;
            temp->next = head;
            head = temp; 
        }
    }
    else {
        for(int i = 0; i < position - 1; i++){
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
}


int main(){
    node* Head = NULL;
    node* one = new node(1);
    node* two = new node(2);
    node* three = new node(3);
    node* four = new node(4);

    Head = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = one;

    Insert(Head, 0, 24);
    Display(Head);

    return 0;
}