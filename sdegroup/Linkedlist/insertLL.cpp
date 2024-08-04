#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data ){
        this->data=data;
        this->next=NULL;
    }
};

void print(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

void insertAtHead(Node* &head, int data){
    Node* newNode= new Node(data);
    newNode->next=head;
    head=newNode;
}
int main(){
    Node* a= new Node(10); 
    insertAtHead(a, 10);
    insertAtHead(a, 50);
    insertAtHead(a, 30);
    insertAtHead(a, 40);
    print(a);
}