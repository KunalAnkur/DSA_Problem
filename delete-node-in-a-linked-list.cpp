//https://leetcode.com/problems/delete-node-in-a-linked-list/
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node;
        temp->val = temp ->next -> val;
        ListNode* toDelete = temp ->next;
        if( temp ->next ->next != NULL){
            
        temp -> next = temp ->next ->next;
        }else {
             temp -> next = NULL;
        }
        
        delete toDelete;
        
    }
};
