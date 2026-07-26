/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        int count = 0;
        Node* val = head;
        while(val != NULL){
            count++;
            val = val->next;
        }
        if(k > count || k <= 0) {
            return -1;
        }
        int target = count - k;
        Node* temp = head;
        for(int i = 0; i<target; i++){
            temp = temp->next;
        }
        return temp->data;
        
    }
};