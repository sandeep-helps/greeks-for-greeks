/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
class Solution {
  public:
    int minDepth(Node *root) {
        // code here
        if(!root){
            return 0;
        }
        if(root->left == NULL && root->right == NULL){
            return 1;
        }
        int l = root->left != NULL ? minDepth(root->left) : INT_MAX;
        int r = root->right != NULL ? minDepth(root->right) : INT_MAX;
        
        return 1 + min(l , r);
    }
};