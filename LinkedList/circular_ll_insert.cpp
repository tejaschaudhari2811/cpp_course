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

    Display(Head);
    
    return 0;
}