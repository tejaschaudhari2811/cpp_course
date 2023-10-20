#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};


int main(){
    //Create first list.
    node* first_head = NULL;
    node* first = new node(2);

    first_head = first;
    node* two = new node(8);
    node* three = new node(10);
    node* four = new node(15);

    // Conncet the nodes to each other.
    first->next = two;
    two->next = three;
    three->next = four;

    //Create second list.
    node* second_head = NULL;
    node* s_first = new node(4);
    second_head = s_first;

    node* s_two = new node(7);
    node* s_three = new node(12);
    node* s_four = new node(14);

    // In this code, we will directly merge the 2 sorted
    // linked lists coded above than to create a function.

    node* third = NULL;
    node* last = NULL;
    while(first_head!=NULL && second_head != NULL){
        if(first_head->data < second_head->data){
            third = first_head;
            last = first_head;
            first_head = first_head->next;
            last->next = NULL;
        }
        else{
            third = second_head;
            last = second_head;
            second_head = second_head->next;
            last->next = NULL;
        }
    }
    if(first_head!=NULL){
        last->next = first_head;
    }
    else{
        last->next = second_head;
    }

    //Display the merged linkedlist
    while(third != NULL){
        cout<<third->data<<endl;
        third=third->next;
    }

    return 0;
}