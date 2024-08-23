// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(){
        data=0;
        next=NULL;
    }
    
    Node(int data){
        this ->data = data;
        this ->next = nullptr;
    }
    
};

void insertAttail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* reverse(Node* &rev){
    Node* curr=rev;
    Node* prev=nullptr;
    Node* forward=nullptr;
    
    while(curr!=nullptr){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}


int main() {
    Node* head=new Node();
    vector<int> arr={1,2,2};
    Node* tail=head;
    for(int i=0;i<arr.size();i++){
        insertAttail(tail,arr[i]);
    }
    print(head->next);
    cout<<endl;
    Node* original=head->next;
    
    Node* rev=head->next;
    rev=reverse(rev);
    print(rev);
    
    while(original!=nullptr && rev!=nullptr){
        if(original->data != rev->data){
            cout<< "not palindrome";
        }
        original=original->next;
        rev=rev->next;
    }
    cout<<"palindrome";
    return 0;
}