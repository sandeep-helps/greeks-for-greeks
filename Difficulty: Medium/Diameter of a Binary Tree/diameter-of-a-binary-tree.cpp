/*Structure of binary tree Node 
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
      int leftht = height(root->left);
      int rightht = height(root->right);
      
      return max(leftht, rightht)+1;
  }
    int diameter(Node* root) {
        if(root == NULL){
            return 0;
        }
        int leftdaim = diameter(root->left);
        int rightdiam = diameter(root->right);
        int currdiam = height(root->left)+ height(root->right);
        
        return max(currdiam, max(leftdaim, rightdiam));
        
    }
};