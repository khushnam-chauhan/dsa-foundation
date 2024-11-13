#include<iostream>
#include<queue>

using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};


Node* insertIntoBST(Node* root,int data){
        if(root==NULL){
            root=new Node(data);
            return root;
        }
        if(root->data > data){
            root->left=insertIntoBST(root->left,data);
        }else{
            root->right=insertIntoBST(root->right,data);
        }
        return root;
}
void  takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root= insertIntoBST(root,data);
        cin>>data;
    }
}

// void inOrder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     inOrder(root->left);
//     cout<<root->data<<" ";
//     inOrder(root->right);
// }

void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp= q.front();
        q.pop();
        if(temp== NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}


int main(){
    Node* root=NULL;
    cout<<"enter the data "<< endl;
    takeInput(root);
    cout<<"print tree"<<endl;
    levelOrder(root);
}