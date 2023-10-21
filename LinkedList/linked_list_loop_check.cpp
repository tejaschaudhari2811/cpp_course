#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

bool hasLoop(Node* head)
{
    if(head==NULL){
        return false;
    }
    Node* slow = head;
    Node* fast = head->next;

    while(slow && fast->next){
        if(slow == fast){
            return true;
        }
        slow = slow->next;
        fast  = fast->next->next;
    }
    return false; // If no loop is found.

}



int main(){
    Node* head = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);

    // Create a loop by pointing the last node to node2
    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node2;

    if (hasLoop(head)) {
        std::cout << "The linked list has a loop." << std::endl;
    } else {
        std::cout << "The linked list does not have a loop." << std::endl;
    }
    
    return 0;
}