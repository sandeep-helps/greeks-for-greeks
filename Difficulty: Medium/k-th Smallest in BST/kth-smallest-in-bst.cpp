/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
    public:
    int preorder = 0;
    int kthSmallest(Node *root, int k) {
        // code here
       if(!root){
           return -1;
       }
       if(root->left != NULL){
           int leftans = kthSmallest(root->left, k);
           if(leftans != -1){
               return leftans;
           }
       }

       // IMPORTANT: Increment the counter
       preorder++;

       // Check if current node is the kth smallest
       if(preorder == k){
           return root->data;
       }

       if(root->right != NULL){
           int rightans = kthSmallest(root->right, k);
           if(rightans != -1){
               return rightans;
           }
       }
       return -1;
    }
};














