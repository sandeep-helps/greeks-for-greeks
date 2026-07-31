/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // Base case
        if(head == NULL) return NULL;
        
        // Step 1: Count k nodes (or less for last group)
        Node* temp = head;
        int count = 0;
        while(temp != NULL && count < k){
            temp = temp->next;
            count++;
        }
        
        // ✅ FIX: Even if count < k, we need to reverse whatever nodes are left
        // So we DON'T return head here
        
        // Step 2: Reverse k nodes (or whatever is left)
        Node* prevNode = NULL;
        Node* curr = head;
        int reversed = 0;
        
        while(curr != NULL && reversed < k){
            Node* nextNode = curr->next;
            curr->next = prevNode;
            prevNode = curr;
            curr = nextNode;
            reversed++;
        }
        // Step 3: Recursively reverse remaining nodes
        if(curr != NULL){
            head->next = reverseKGroup(curr, k);
        }
        // If curr is NULL, head->next should point to NULL (already NULL)
        return prevNode;
    }
};