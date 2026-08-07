/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    void mirror(Node* node) {
        if(node == NULL){
            return;
        }
        mirror(node->left);
        mirror(node->right);
        
        Node* temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
};