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

void Delete(node* &head, int index){
    if(index==0){
        node* temp = head;
        if(head->next!=NULL){
            head = head->next;
            delete temp;
        }
        else{
            delete temp;
        }
    }
    else{
        // Take the head to index position
        node* temp = head;
        for(int i=0;i<index;i++){
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        if(temp->next !=NULL)
        {
        temp->next->prev = temp->prev;
        }

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

    Delete(head, 2);
    Display(head);

    return 0;
}