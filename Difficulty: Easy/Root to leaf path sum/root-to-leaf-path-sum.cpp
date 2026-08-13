/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

/*you are required to
complete this function */
class Solution {
  public:
    bool hasPathSum(Node *root, int target) {
        // Your code here
        if(!root){
            return false;
        }
        if(!root->left && !root->right){
            return root->data == target;
        }
        int remaining = target - root->data;
        return hasPathSum(root->left, remaining) ||
        hasPathSum(root->right, remaining);
    }
};