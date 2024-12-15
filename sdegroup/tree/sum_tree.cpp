#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

void printLevelOrder(TreeNode* root) {
    if (root == NULL) return;

    // Create a queue to store the nodes for level-order traversal
    queue<TreeNode*> q;

    // Start with the root node
    q.push(root);

    while (!q.empty()) {
        // Get the current node from the queue
        TreeNode* current = q.front();
        q.pop();

        // Print the current node's data
        cout << current->data << " ";

        // Add the left and right children to the queue (if they exist)
        if (current->left != NULL) {
            q.push(current->left);
        }
        if (current->right != NULL) {
            q.push(current->right);
        }
    }
}
int sumTree(TreeNode* root){
    if(root==NULL) return 0;
    int leftans=sumTree(root->left);
    int rightans= sumTree(root->right);
    root->data=leftans+root->data+rightans;

    return root->data;
}

int main(){
    TreeNode* root= new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);

    cout<<sumTree(root)<<endl;

    cout<<"level order traversal: "<<endl;
    printLevelOrder(root);

}