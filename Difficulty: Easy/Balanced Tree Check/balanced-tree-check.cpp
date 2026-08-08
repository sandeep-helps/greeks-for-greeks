/* Structure of binary tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int height(Node* root){
        if(root == NULL){
            return 0;
        }
        int left_height = height(root->left);
        int right_height = height(root->right);
        
        return max(left_height, right_height) + 1;
    }
    bool isBalanced(Node* root) {
        // code here
        if(root == NULL){
            return true;
        }
        bool leftbalance = isBalanced(root->left);
        bool rightbalance = isBalanced(root->right);
        if (!leftbalance || !rightbalance) {
            return false;
        }
        int leftheight = height(root->left);
        int rightheight = height(root->right);
        int diff = abs(leftheight - rightheight);
        
        return diff <=1;
    }
};