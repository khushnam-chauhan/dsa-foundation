#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


struct TreeNode{
    int data;
    TreeNode* right;
    TreeNode* left;
    TreeNode(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

int sumtree(TreeNode* root){
    if(root ==NULL) return 0;
    int left= sumtree(root->left);
    int right= sumtree(root->right);
    root->data= left+root->data+right;
    return root->data;

}

int main(){
    TreeNode* root= new TreeNode(1);
    root->left= new TreeNode(3);
    root->right=new TreeNode(4);
    root->left->left= new TreeNode(5);
    root->left->right= new TreeNode(6);

    cout<<sumtree(root);
}