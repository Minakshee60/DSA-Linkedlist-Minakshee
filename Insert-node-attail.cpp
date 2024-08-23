// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int data){
            this->data=data;
            this->next=NULL;
        }
};

// void insertAtHead(node* &head,int data){
    
//     node* temp=new node(data);
//     tail->next=temp;
//     head=temp;
// }

void insertAtTail(node* &tail,int data){
    node* temp=new node(data);
    tail->next=temp;
    tail=tail->next;
}

void print(node* &head){
    node* temp=head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main() {
node* node1=new node(2);
node* head=node1;
node* tail=node1;

insertAtTail(tail,20);
insertAtTail(tail,30);
print(head);

    return 0;
}