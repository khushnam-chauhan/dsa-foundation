#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): val(0),left(nullptr),right(nullptr){}
    TreeNode(int x): val(x), left(nullptr),right(nullptr){}
    TreeNode(int x, TreeNode* left, TreeNode* right ): val(x),left(left),right(right){}
};

int height(TreeNode* root){
    if( root==NULL) return 0;
    int leftH=height(root->left);
    int rightH=height(root->right);
    int ans= 1+max(leftH,rightH);
    return ans;
}
 bool isBalanced(TreeNode* root){
    if(root==NULL) return true;

    int leftH=height(root->left);
    int rightH=height(root->right);
    int diff=abs(leftH-rightH);

    bool ans1= (diff<=1);

    bool leftAns= isBalanced(root->left);
    bool rightAns= isBalanced(root->right);

    if(ans1 && leftAns && rightAns){
        return true;}
    else{
            return false;
        }
 }
int main(){
    TreeNode* root= new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);

    if(isBalanced(root)){
        cout<<"balanced tree"<<endl;

    }else{
        cout<<"not balanced tree"<<endl;
    }
    return 0;
}