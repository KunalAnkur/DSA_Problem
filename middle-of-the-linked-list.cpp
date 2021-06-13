//https://leetcode.com/problems/middle-of-the-linked-list/submissions/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp -> next;
        }
        
        int key = floor(count/2);
        int iterator = 0;
        ListNode* ans = head;
        while(iterator < key){
            iterator++;
            ans = ans->next;
        }
        
        return ans;
    }
};
