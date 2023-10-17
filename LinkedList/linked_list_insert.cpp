#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
};

void DisplayLL(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int count(node* head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

void Insert(node* &head, int position, int value){
    node* temp = new node();
    temp->data = value;
    if(position < 0 || position > count(head)){
        return;
    }
    if(position==0){
        temp->next=head;
        head=temp;
    }
    else{
    for(int i=0;i<position-1;i++){
        head=head->next;
        }
    temp->next=head->next;
    head->next=temp;
    }
    
}
int main() {
    node* head = new node(); // Initialize head

    node* one = new node();
    node* two = new node();
    node* three = new node();
    node* four = new node();

    one->data = 1;
    two->data = 2;
    three->data = 3;
    four->data = 4;

    // Connect the nodes to each other
    head = one; // Set head to point to the first node
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;
    cout<<count(head)<<endl;
    Insert(head,0,50);
    DisplayLL(head);

    return 0;
}
