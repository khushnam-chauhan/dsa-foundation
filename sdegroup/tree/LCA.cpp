#include<iostream>
#include<vector>
using namespace std;

struct Treenode{
    int data;
    Treenode* left;
    Treenode* right;
    Treenode(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Treenode* LCA(Treenode* root, Treenode* p, Treenode* q){
    // base case
    if(root==NULL) return NULL;
    if(root->data==p->data)return p;
    if(root->data==q->data)return q;

    Treenode* ansLeft= LCA(root->left,p,q);
    Treenode* ansRight= LCA(root->right,p,q);

    if(ansLeft==NULL && ansRight==NULL) return NULL;
    else if(ansLeft!=NULL && ansRight==NULL) return ansLeft;
    else if(ansRight!=NULL && ansLeft==NULL) return ansRight;
    else{
        return root;
    }
}

int main(){
    Treenode* root= new Treenode(2);
    root->left=new Treenode(3);
    root->right= new Treenode(4);
    root->left->left= new Treenode(5);
    root->left->right= new Treenode(6);
    root->left->left->left=new Treenode(7);
    root->left->left->right=new Treenode(8);
    root->left->right->left=new Treenode(9);
    root->left->right->right=new Treenode(10);

/*
                         2
                        / \
                     3      4   
                    /  \       
                   5     6
                  / \   / \
                 7   8 9   10
 */
    Treenode* p = root->left->right->right;  
    Treenode* q = root->left->left->right;
    Treenode*lca= LCA(root,p,q);
    if(lca!=NULL){
        cout<<" LCA = "<<lca->data;
    }else{
        cout<<"lca not found";
    }

    return 0;

}