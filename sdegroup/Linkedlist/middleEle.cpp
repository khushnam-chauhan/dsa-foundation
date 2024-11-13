#include<iostream>
#include<algorithm>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data= data;
        this->next=NULL;
    }
};
void middle(Node* head){
    if(head==NULL){
        cout<<"list is empty";
        return;
    }
    Node* slow=head;
    Node*fast=head;


    while(fast!=NULL && fast->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<"the middle element of list is: "<< slow->data;
}


void append(Node*& head, int newData){
    Node* newNode=new Node(newData);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=newNode;
}
int main(){
    Node* head= NULL;
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);
    append(head, 5);
    append(head, 6);
    middle(head);
    return 0;

} 