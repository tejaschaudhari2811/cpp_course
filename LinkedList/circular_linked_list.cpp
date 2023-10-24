#include<iostream>
using namespace std;

class node{
    public: 
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

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
    four->next = one;

    return 0;
}