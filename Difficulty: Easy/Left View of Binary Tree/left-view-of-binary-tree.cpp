/* Structure of Binary Tree Node
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
    void dfs(Node* node , int depth, vector<int>&result){
        if(node == NULL){
            return;
        }
        if(depth == result.size()){
            result.push_back(node->data);
        }
        dfs(node->left, depth+1, result);
        dfs(node->right, depth+1, result);
    }
    vector<int> leftView(Node *root) {
        vector<int>result;
        dfs(root, 0, result);
        return result;
        
    }
};