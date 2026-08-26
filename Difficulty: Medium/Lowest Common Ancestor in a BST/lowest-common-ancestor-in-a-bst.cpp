/* Structure of a Binary Search Tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
public:
    Node* findLCA(Node* root, Node* p, Node* q) {
        if(!root){
            return NULL;
        }
        if(root->data > p->data && root->data > q->data){
            return findLCA(root->left, p, q);
        }
        else if(root->data < p->data && root->data < q->data){
            return findLCA(root->right, p, q);
        }
        else{
            return root;
        }
    }
};

