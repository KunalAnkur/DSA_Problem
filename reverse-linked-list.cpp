class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prevptr=nullptr;
        ListNode* currentptr=head;
        ListNode* nextptr;
        while(currentptr != nullptr){
            
           nextptr = currentptr -> next;
            currentptr -> next = prevptr;
            
            prevptr= currentptr;
            currentptr = nextptr;
        }
        
        return prevptr;
    }
};
