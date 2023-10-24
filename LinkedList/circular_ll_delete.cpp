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

void Delete(node* &head, int position){
    node* p = head;
    if (position == 0) {
        if (head == NULL) {
            delete head;
        } else {
            node* q = head;
            while (q->next != head) {
                q = q->next;
            }
            node* temp = head;
            q->next = head->next;
            head = head->next;
            delete temp;
        }
    }

    else{
        for(int i = 0;i<position-1;i++){
            p=p->next;
        }
        node* q = p->next;
        p->next = q->next;
        delete q;

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

    Delete(Head, 0);
    Display(Head);

    return 0;
}