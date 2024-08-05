#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        this->data=value;
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

void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        head=new Node(data);
        tail=head;
        return;
    }
    Node* newNode=new Node(data);
    newNode->next= head;
    head=newNode;
    
}

void insertAtTail(Node* &head, Node*& tail, int data){
    if(head==NULL){
        head=new Node(data);
        tail= head;
        return;
    }
    Node* newNode=new Node(data);
    tail->next= newNode;
    tail=newNode;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,70);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,50);
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,40);
    print(head);
}